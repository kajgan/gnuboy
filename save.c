

#include <stdio.h>

#include "defs.h"
#include "cpu.h"
#include "cpuregs.h"
#include "hw.h"
#include "regs.h"
#include "lcd.h"
#include "rtc.h"
#include "mem.h"
#include "sound.h"



#ifdef IS_LITTLE_ENDIAN
#define LIL(x) (x)
#else
#define LIL(x) ((x<<24)|((x&0xff00)<<8)|((x>>8)&0xff00)|(x>>24))
#endif

#define I1(s, p) { 1, (s), (p) }
#define I2(s, p) { 2, (s), (p) }
#define I4(s, p) { 4, (s), (p) }
#define R(r) I1(#r, &R_##r)
#define END { 0, 0, 0 }

struct svar
{
	int len;
	char key[4];
	void *ptr;
};

static int ver;
static int sramblock, iramblock, vramblock;
static int hramofs, palofs, oamofs, wavofs;

static byte regmask[128];

struct svar svars[] = 
{
	I4("GbSs", &ver),
	
	I2("PC  ", &PC),
	I2("SP  ", &SP),
	I2("BC  ", &BC),
	I2("DE  ", &DE),
	I2("HL  ", &HL),
	I2("AF  ", &AF),
	
	I4("IME ", &cpu.ime),
	I4("ima ", &cpu.ima),
	I4("spd ", &cpu.speed),
	I4("halt", &cpu.halt),
	I4("div ", &cpu.div),
	I4("tim ", &cpu.tim),
	I4("lcdc", &cpu.lcdc),
	I4("snd ", &cpu.snd),
	
	I1("ints", &hw.ilines),
	I1("pad ", &hw.pad),
	I4("cgb ", &hw.cgb),
	
	I4("mbcm", &mbc.model),
	I4("romb", &mbc.rombank),
	I4("ramb", &mbc.rambank),
	I4("enab", &mbc.enableram),
	I4("batt", &mbc.batt),
	
	I4("rtcR", &rtc.sel),
	I4("rtcL", &rtc.latch),
	I4("rtcC", &rtc.carry),
	I4("rtcS", &rtc.stop),
	I4("rtcd", &rtc.d),
	I4("rtch", &rtc.h),
	I4("rtcm", &rtc.m),
	I4("rtcs", &rtc.s),
	I4("rtct", &rtc.t),
	I1("rtR8", &rtc.regs[0]),
	I1("rtR9", &rtc.regs[1]),
	I1("rtRA", &rtc.regs[2]),
	I1("rtRB", &rtc.regs[3]),
	I1("rtRC", &rtc.regs[4]),

	I4("S1on", &snd.ch[0].on),
	I4("S1p ", &snd.ch[0].pos),
	I4("S1c ", &snd.ch[0].cnt),
	I4("S1ec", &snd.ch[0].encnt),
	I4("S1sc", &snd.ch[0].swcnt),

	I4("S2on", &snd.ch[1].on),
	I4("S2p ", &snd.ch[1].pos),
	I4("S2c ", &snd.ch[1].cnt),
	I4("S2ec", &snd.ch[1].encnt),
	
	I4("S3on", &snd.ch[2].on),
	I4("S3p ", &snd.ch[2].pos),
	I4("S3c ", &snd.ch[2].cnt),
	
	I4("S4on", &snd.ch[3].on),
	I4("S4p ", &snd.ch[3].pos),
	I4("S4c ", &snd.ch[3].cnt),
	I4("S4ec", &snd.ch[3].encnt),
	
	I4("sram", &sramblock),
	I4("iram", &iramblock),
	I4("vram", &vramblock),
	I4("hram", &hramofs),
	I4("pal ", &palofs),
	I4("oam ", &oamofs),
	I4("wav ", &wavofs),
	
	R(P1), R(SB), R(SC),
	R(DIV), R(TIMA), R(TMA), R(TAC),
	R(IE), R(IF),
	R(LCDC), R(STAT), R(LY), R(LYC),
	R(SCX), R(SCY), R(WX), R(WY),
	R(BGP), R(OBP0), R(OBP1),
	R(DMA),

	R(VBK), R(SVBK), R(KEY1),
	R(BCPS), R(BCPD), R(OCPS), R(OCPD),

	R(NR10), R(NR11), R(NR12), R(NR13), R(NR14),
	R(NR21), R(NR22), R(NR23), R(NR24),
	R(NR30), R(NR31), R(NR32), R(NR33), R(NR34),
	R(NR41), R(NR42), R(NR43), R(NR44),
	R(NR50), R(NR51), R(NR52),

	I1("DMA1", &R_HDMA1),
	I1("DMA2", &R_HDMA2),
	I1("DMA3", &R_HDMA3),
	I1("DMA4", &R_HDMA4),
	I1("DMA5", &R_HDMA5),
	I4("hdma", &hw.hdma),
	
	END
};


void savestate(FILE *f)
{
	int i;
	byte buf[4096];
	un32 (*header)[2] = (un32 (*)[2])buf;
	un32 d;
	int irl = hw.cgb ? 8 : 2;
	int vrl = hw.cgb ? 4 : 2;
	int srl = mbc.ramsize << 1;

	ver = 0x103;
	iramblock = 1;
	vramblock = 1+irl;
	sramblock = 1+irl+vrl;
	hramofs = 4096 - 512;
	palofs = 4096 - 384;
	oamofs = 4096 - 256;
	wavofs = 4096 - 96;
	memset(buf, 0, sizeof buf);

	for (i = 0; svars[i].ptr; i++)
	{
		header[i][0] = *(un32 *)svars[i].key;
		switch (svars[i].len)
		{
		case 1:
			d = *(byte *)svars[i].ptr;
			break;
		case 2:
			d = *(un16 *)svars[i].ptr;
			break;
		case 4:
			d = *(un32 *)svars[i].ptr;
			break;
		}
		header[i][1] = LIL(d);
	}
	header[i][0] = header[i][1] = 0;

	memcpy(buf+hramofs, ram.stack, sizeof ram.stack);
	memcpy(buf+palofs, lcd.pal, sizeof lcd.pal);
	memcpy(buf+oamofs, lcd.oam.mem, sizeof lcd.oam);
	memcpy(buf+wavofs, snd.wave, sizeof snd.wave);

	fseek(f, 0, SEEK_SET);
	fwrite(buf, 4096, 1, f);
	
	fseek(f, iramblock<<12, SEEK_SET);
	fwrite(ram.ibank, 4096, irl, f);
	
	fseek(f, vramblock<<12, SEEK_SET);
	fwrite(lcd.vbank, 4096, vrl, f);
	
	fseek(f, sramblock<<12, SEEK_SET);
	fwrite(ram.sbank, 4096, srl, f);
}

void loadstate(FILE *f)
{
	int i, j;
	byte buf[4096];
	un32 (*header)[2] = (un32 (*)[2])buf;
	un32 d;
	int irl = hw.cgb ? 8 : 2;
	int vrl = hw.cgb ? 4 : 2;
	int srl = mbc.ramsize << 1;

	hramofs = palofs = oamofs = wavofs = 0;

	fseek(f, 0, SEEK_SET);
	fread(buf, 4096, 1, f);
	
	for (j = 0; header[j][0]; j++)
	{
		for (i = 0; svars[i].ptr; i++)
		{
			if (header[j][0] != *(un32 *)svars[i].key)
				continue;
			d = LIL(header[j][1]);
			switch (svars[i].len)
			{
			case 1:
				*(byte *)svars[i].ptr = d;
				break;
			case 2:
				*(un16 *)svars[i].ptr = d;
				break;
			case 4:
				*(un32 *)svars[i].ptr = d;
				break;
			}
		}
	}

	if (hramofs) memcpy(ram.stack, buf+hramofs, sizeof ram.stack);
	if (palofs) memcpy(lcd.pal, buf+palofs, sizeof lcd.pal);
	if (oamofs) memcpy(lcd.oam.mem, buf+oamofs, sizeof lcd.oam);
	if (wavofs) memcpy(snd.wave, buf+wavofs, sizeof snd.wave);

	fseek(f, iramblock<<12, SEEK_SET);
	fread(ram.ibank, 4096, irl, f);
	
	fseek(f, vramblock<<12, SEEK_SET);
	fread(lcd.vbank, 4096, vrl, f);
	
	fseek(f, sramblock<<12, SEEK_SET);
	fread(ram.sbank, 4096, srl, f);
}



















