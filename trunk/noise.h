
#ifndef __NOISE_H__
#define __NOISE_H__


#include "defs.h"

static byte noise7[] =
{
	0x54,0x8c,0xd8,0x2c,0x95,0x1b,0xfe,0x5c,
	0xca,0xa5,0x56,0x34,0x9f,0xf0,0x93,0x0d
};

static byte noise15[] =
{
	0xd4,0x59,0x3c,0x22,0x3d,0x52,0x68,0x7b,
	0x23,0x20,0x6f,0x76,0x24,0x0a,0x09,0x6f,
	0xc3,0xb1,0x6d,0x6d,0x59,0xcb,0x60,0x33,
	0x6e,0x24,0x8b,0x7e,0x93,0x01,0xfd,0x6c,
	0x9c,0x1d,0x69,0x34,0xe5,0xdb,0xf1,0x7a,
	0x89,0x34,0xcb,0x71,0xd3,0xf9,0xcc,0x2b,
	0x6b,0xa3,0xe1,0x29,0xa7,0x55,0x31,0x67,
	0x9a,0x3e,0xd7,0x36,0x4f,0x02,0xd5,0x61,
	0x47,0x77,0xcc,0x7d,0xc6,0xda,0xb2,0x75,
	0x76,0x08,0xbf,0x02,0xe4,0x5f,0xe6,0x5c,
	0xc7,0x40,0x4b,0x7f,0x9e,0xc6,0x72,0x47,
	0x4c,0x98,0x68,0x1a,0x35,0x1a,0x15,0x5e,
	0x09,0xd7,0x02,0x56,0x01,0x34,0x2a,0x57,
	0x28,0x47,0x2e,0x7b,0x5e,0x63,0xdb,0x02,
	0x96,0x4f,0x28,0x34,0xf2,0xec,0x84,0x2f,
	0xfd,0x53,0x6f,0x10,0x6a,0xa9,0x64,0x56,
	0x2f,0x3f,0xed,0x2a,0x20,0x74,0xde,0x06,
	0x8e,0xb3,0x6d,0x45,0xf2,0xf0,0x5a,0x18,
	0x7a,0x3f,0x3f,0x3a,0xfd,0xd7,0xf8,0x43,
	0x85,0xf2,0x57,0x05,0x16,0x5d,0xa8,0x6e,
	0xe2,0xb3,0xea,0x3e,0x0f,0x27,0x23,0x77,
	0xe9,0x56,0x75,0x1a,0x4d,0x57,0xcc,0x68,
	0xb6,0x7c,0x54,0x5e,0x83,0x95,0x4c,0x51,
	0x9c,0x59,0xa1,0x4a,0xfd,0xf3,0x20,0x5c,
	0x49,0x70,0xff,0x46,0x13,0x62,0x60,0x4d,
	0xe1,0x53,0x07,0x39,0x11,0xb1,0x4a,0x46,
	0xb1,0x28,0xd3,0x14,0x2d,0xec,0x6f,0x53,
	0x46,0xcb,0x5f,0x24,0xbb,0xff,0xd5,0x6a,
	0x2e,0x20,0x9a,0x2a,0x6e,0x12,0x8e,0x1f,
	0x19,0x63,0xb1,0x6d,0xc4,0x6f,0xc2,0x5e,
	0x60,0xff,0x12,0x4f,0x16,0xb7,0x20,0x7e,
	0x2e,0x19,0x27,0x35,0x8f,0x3e,0x00,0x7a,
	0x37,0x2b,0xff,0x04,0xbd,0xcc,0x94,0x7a,
	0x82,0x2f,0x5b,0x12,0xb1,0x6a,0x3e,0x3f,
	0xba,0xa4,0x8d,0x3e,0x07,0x22,0xb3,0x17,
	0xc7,0xc7,0xe6,0x2d,0x9c,0x58,0x78,0x7d,
	0x16,0x49,0xd6,0x0e,0xb0,0x1e,0x5c,0x48,
	0xea,0xaf,0x44,0x66,0xcc,0xc5,0x2a,0x6d,
	0x34,0xb4,0xa8,0x19,0x86,0x09,0xe6,0x30,
	0xc9,0xb9,0x4b,0x49,0x7d,0x24,0xa8,0x60,
	0x99,0x6b,0x46,0x7e,0xaa,0x0d,0x53,0x02,
	0x8e,0xd5,0xf2,0x26,0x4b,0x94,0x19,0x13,
	0xd8,0xf9,0xc2,0x55,0xd4,0xa0,0x52,0x4b,
	0x06,0x94,0xef,0x7d,0x06,0x1a,0x5d,0x00,
	0x42,0xb3,0xe0,0x6a,0x1f,0xf7,0xa0,0x6b,
	0xcb,0x89,0x1f,0x5f,0xa2,0xb2,0xf3,0x39,
	0x35,0xae,0xc1,0x69,0xf9,0xa2,0x46,0x14,
	0x32,0xf1,0xf3,0x33,0x6c,0xd9,0xc0,0x6e,
	0xb6,0x6f,0xdb,0x0e,0xb4,0x20,0x4f,0x46,
	0x1d,0x44,0xff,0x2d,0x70,0x14,0x69,0x4d,
	0xbb,0x42,0x02,0x5e,0xe4,0x0b,0xe6,0x5b,
	0x0d,0x6d,0xe1,0x4a,0xd2,0x8b,0xd8,0x6c,
	0x95,0x2a,0x42,0x24,0xf7,0x1c,0x26,0x31,
	0x9e,0x51,0x03,0x5a,0xc9,0xde,0xea,0x3d,
	0x7d,0x26,0x0c,0x62,0x68,0x0b,0x4f,0x23,
	0x46,0x03,0x93,0x1e,0x17,0x92,0x52,0x60,
	0x12,0x19,0xa2,0x25,0xd5,0xd8,0x85,0x45,
	0x62,0x26,0x6c,0x73,0xea,0x12,0x65,0x7b,
	0xa9,0x79,0xd8,0x10,0x68,0xba,0x5b,0x71,
	0xf1,0x2c,0xc2,0x7b,0xec,0x2c,0xb9,0x7b,
	0x87,0xb1,0xfc,0x5c,0xbc,0xb6,0xe1,0x5a,
	0x8e,0xdf,0xac,0x35,0xbc,0x5f,0xbe,0x46,
	0xb5,0x59,0x28,0x6f,0xc0,0xd0,0xa0,0x69,
	0x29,0x39,0x7f,0x35,0x6c,0xc9,0x03,0x7e,
	0x74,0xf1,0xef,0x2f,0x46,0x7d,0x7e,0x63,
	0xdc,0xdd,0x6c,0x4b,0x30,0x34,0xf2,0x0d,
	0x2b,0x89,0x64,0x3f,0xe9,0x4a,0x4e,0x16,
	0x02,0xc0,0xca,0x7a,0xc0,0xb3,0xa6,0x63,
	0xe0,0x67,0x74,0x47,0xa0,0x11,0xce,0x54,
	0x89,0x92,0x91,0x21,0x5e,0x8e,0x80,0x29,
	0x08,0x1d,0x1d,0x78,0xcf,0x95,0x24,0x40,
	0x75,0x20,0xd3,0x09,0x1b,0x36,0xbf,0x1d,
	0xa4,0x6e,0xaa,0x05,0xd7,0x46,0x3f,0x7d,
	0x05,0x49,0x24,0x19,0x4e,0xe8,0x82,0x16,
	0x3f,0x01,0x9b,0x6e,0xf6,0x75,0xe6,0x14,
	0x3a,0x15,0x3c,0x12,0xc6,0xb2,0x97,0x4b,
	0xb2,0x2c,0xc8,0x6f,0xc8,0xf4,0xe8,0x47,
	0x82,0x12,0x56,0x12,0x68,0x86,0xf0,0x5e,
	0x89,0xc5,0x89,0x31,0xab,0x4b,0xd5,0x47,
	0xd4,0x4f,0xf4,0x5c,0xfd,0xb6,0x79,0x61,
	0xf2,0xc8,0x53,0x2b,0xb0,0x2d,0x61,0x28,
	0x2d,0xeb,0x6b,0x6f,0x1d,0x52,0xb8,0x6a,
	0x9a,0x78,0xaf,0x3e,0x2f,0xab,0x36,0x6a,
	0xdd,0x05,0x5f,0x4e,0x7a,0xe0,0x23,0x06,
	0xd0,0xbc,0x04,0x3f,0x66,0x98,0xf0,0x6f,
	0xd8,0x6e,0xa4,0x2f,0xd8,0xd9,0x21,0x37,
	0x35,0x2e,0x15,0x30,0x4d,0x8f,0x77,0x39,
	0xf3,0x0f,0xe1,0x54,0xda,0x9c,0xbf,0x35,
	0x24,0xd6,0xb6,0x36,0xf9,0x58,0x05,0x6e,
	0x28,0x85,0x42,0x4c,0x63,0xd7,0x51,0x25,
	0xef,0xce,0xeb,0x02,0x62,0x9a,0x7e,0x5e,
	0x29,0x8a,0xe9,0x70,0xa2,0xfb,0xb3,0x72,
	0x2a,0x8f,0x67,0x26,0xac,0x9c,0x3f,0x03,
	0x0a,0x82,0xa4,0x51,0xb3,0x54,0xf1,0x57,
	0x57,0xe8,0x14,0x4b,0xde,0xd1,0x98,0x2e,
	0xb1,0x0b,0x6b,0x39,0x49,0xb1,0x68,0x76,
	0x8e,0xff,0xf9,0x56,0xde,0xf6,0xd6,0x28,
	0x66,0x03,0x21,0x61,0x28,0x78,0xa9,0x15,
	0x0e,0xa2,0x0d,0x13,0x43,0x09,0x80,0x2f,
	0xa3,0x58,0xcd,0x1b,0xde,0x5e,0x12,0x52,
	0xa9,0xa1,0x70,0x1f,0x7b,0xc7,0x71,0x4b,
	0xb6,0x38,0x34,0x09,0xdf,0xcf,0x85,0x4f,
	0xc9,0x56,0xe9,0x04,0xaa,0x48,0x15,0x5e,
	0xb9,0x6c,0x45,0x05,0xed,0x2c,0xa0,0x3b,
	0xa3,0xa1,0x1a,0x4c,0xe1,0xf1,0x87,0x51,
	0x51,0x04,0xf2,0x60,0x92,0x70,0x06,0x4f,
	0x43,0x8c,0x06,0x30,0x7a,0x8e,0xdb,0x51,
	0x34,0x6c,0xba,0x41,0x6d,0x1b,0x6e,0x56,
	0x26,0x2b,0x1b,0x55,0x3e,0xee,0x5e,0x13,
	0x21,0x70,0x5f,0x2e,0x7e,0x13,0x30,0x20,
	0x1c,0xc0,0xf7,0x41,0xd2,0x7b,0xca,0x67,
	0xc7,0xc4,0x98,0x16,0xab,0xbf,0xf1,0x18,
	0xb0,0x72,0xa1,0x10,0x2e,0xc8,0xb9,0x77,
	0xd3,0x37,0x9b,0x2e,0xbe,0x14,0xaf,0x23,
	0x71,0xd1,0x39,0x27,0x76,0x90,0x68,0x4a,
	0x9c,0x73,0xc1,0x75,0x1b,0x73,0xaa,0x46,
	0xf2,0x57,0xda,0x15,0x53,0xac,0xf5,0x7e,
	0xfa,0x42,0x30,0x16,0xbb,0xae,0xc3,0x1a,
	0xfd,0xf4,0x0a,0x5d,0xb3,0xaf,0x75,0x1b,
	0xa8,0xdb,0x63,0x56,0xa0,0x96,0x25,0x29,
	0x94,0xa1,0xfd,0x6c,0xf9,0xdf,0x55,0x37,
	0x32,0x07,0x2c,0x78,0xd7,0x2d,0x04,0x1d,
	0x74,0x6e,0x31,0x09,0x67,0x73,0xe6,0x39,
	0x44,0x49,0x72,0x73,0x9a,0x99,0x4c,0x5e,
	0xa5,0x61,0x45,0x4d,0x65,0xb9,0xd1,0x21,
	0x18,0xad,0x7c,0x7e,0xc2,0x21,0x3d,0x0f,
	0x37,0x35,0x9c,0x09,0xe0,0x71,0x15,0x15,
	0x6d,0xe1,0x2e,0x28,0xe8,0xa7,0x3d,0x1a,
	0x0e,0x3a,0xcf,0x0c,0x40,0x19,0xca,0x56,
	0xa6,0xbc,0xec,0x3d,0x7f,0x0b,0x09,0x34,
	0xb7,0xa9,0x32,0x21,0x43,0x30,0xae,0x33,
	0x9a,0x7e,0xb3,0x7a,0xa9,0x01,0x0d,0x37,
	0x96,0xdc,0xa3,0x32,0x94,0xc1,0xe3,0x10,
	0x64,0xb0,0xd0,0x51,0x93,0xd1,0xae,0x0f,
	0x47,0x71,0x59,0x2c,0x0c,0x8c,0x34,0x28,
	0x33,0x68,0xd4,0x38,0xdb,0x12,0x57,0x19,
	0x06,0x6c,0x8a,0x5f,0x65,0x6f,0x00,0x31,
	0xb2,0x40,0x5b,0x36,0x7a,0xda,0xbb,0x68,
	0xcc,0xe2,0xe6,0x6a,0xf7,0x89,0xcd,0x29,
	0x14,0x74,0x08,0x47,0x72,0x44,0x2c,0x38,
	0x5c,0x43,0x9f,0x4b,0x2d,0x21,0x85,0x45,
	0x34,0x66,0x69,0x47,0x94,0x78,0x3b,0x55,
	0x0d,0x93,0x9a,0x5a,0xa1,0x47,0x98,0x6f,
	0x7c,0x20,0x79,0x6f,0x1b,0xcd,0x69,0x67,
	0xe1,0x60,0x62,0x46,0x22,0xdd,0x65,0x2d,
	0x9a,0xd8,0x72,0x1b,0x98,0x0a,0x95,0x67,
	0x65,0x0d,0x14,0x61,0x35,0x57,0x26,0x16,
	0x41,0x0c,0xa2,0x1e,0xfb,0xe9,0xb7,0x13,
	0xc9,0x18,0x0a,0x27,0xa5,0xbc,0x72,0x70,
	0x8e,0xbb,0x66,0x23,0x11,0x8a,0x63,0x53,
	0xb2,0x48,0xa7,0x18,0xc1,0x23,0x3b,0x5c,
	0xec,0x9c,0xba,0x6c,0xb8,0xb4,0x31,0x78,
	0x27,0x93,0x3b,0x0d,0x9f,0xdd,0x15,0x23,
	0x32,0x8f,0xed,0x60,0xf3,0x75,0x22,0x78,
	0x96,0x67,0xe3,0x4c,0x46,0x03,0xf6,0x27,
	0x65,0xba,0x4e,0x30,0xf2,0xaa,0x82,0x18,
	0x73,0x24,0x7b,0x6d,0x99,0x20,0xb8,0x77,
	0x86,0x23,0xbe,0x6d,0x80,0xb7,0x15,0x48,
	0x3a,0x68,0x50,0x67,0x02,0x44,0x37,0x5d,
	0x9b,0x84,0x7f,0x2f,0x1c,0xc9,0xb2,0x2d,
	0x25,0x21,0x9d,0x0a,0x36,0x5d,0xf2,0x4a,
	0xb4,0xd3,0x47,0x15,0x8a,0x2e,0xb1,0x6b,
	0x6b,0xb4,0x18,0x61,0xf6,0xdf,0xe9,0x33,
	0x86,0x18,0x69,0x7f,0x34,0xcd,0x22,0x08,
	0x9b,0x9c,0x5c,0x24,0x14,0xd4,0xcf,0x22,
	0x45,0x57,0x86,0x5b,0x4d,0xe5,0x03,0x3d,
	0xd6,0xf7,0x0a,0x7f,0x32,0xf4,0x40,0x48,
	0x05,0x9a,0x35,0x35,0xfd,0x8a,0x46,0x0c,
	0xd1,0xd1,0x56,0x6b,0x37,0x29,0x23,0x16,
	0xf0,0x00,0x69,0x04,0x67,0x39,0x3a,0x38,
	0x7e,0x2c,0x19,0x3e,0x56,0xbb,0xb7,0x34,
	0x59,0xe4,0xbc,0x50,0xf1,0x50,0x94,0x2b,
	0xef,0xdb,0x6f,0x2c,0xe0,0x07,0x7b,0x3e,
	0x72,0x08,0xaa,0x73,0x2a,0x44,0xc0,0x13,
	0xe2,0x4b,0xb2,0x1b,0x0d,0x8d,0x29,0x23,
	0x46,0x0d,0x73,0x41,0x07,0x6d,0x4f,0x26,
	0x43,0xea,0x1b,0x6e,0xfa,0xe0,0xba,0x56,
	0x92,0x9b,0x00,0x12,0xae,0x9e,0x34,0x4f,
	0xf0,0xc0,0xa4,0x0a,0x18,0xb4,0x69,0x11,
	0xe3,0x6b,0x57,0x57,0x8c,0x5d,0x01,0x2f,
	0x2c,0x88,0x39,0x34,0x28,0xc3,0xdd,0x32,
	0xd9,0x42,0x05,0x6c,0x02,0x80,0x44,0x33,
	0x5a,0xb7,0x1e,0x7b,0xdf,0xdc,0x3a,0x21,
	0xff,0x0a,0x8b,0x3f,0x2b,0x89,0x75,0x66,
	0x16,0x06,0x5e,0x37,0xf0,0x0b,0xf4,0x43,
	0x92,0xc2,0xaf,0x1e,0x94,0x32,0x77,0x75,
	0x46,0xc7,0xab,0x78,0xec,0xa6,0x6c,0x6f,
	0x86,0x83,0x0b,0x21,0x35,0xa3,0x1b,0x25,
	0xcc,0xae,0xe7,0x2d,0xf8,0x8b,0xb5,0x14,
	0x5f,0xe7,0xdb,0x38,0xae,0xfa,0x99,0x49,
	0x05,0x19,0xdf,0x37,0xa5,0xf4,0x4e,0x7a,
	0xb6,0x67,0xe9,0x6f,0x49,0x03,0xfb,0x25,
	0xa0,0xd5,0x09,0x51,0x48,0x03,0xea,0x01,
	0xf7,0xa1,0x2f,0x75,0x90,0x96,0xae,0x5b,
	0x60,0xb7,0x53,0x13,0xda,0x0d,0x87,0x4c,
	0x1c,0xf4,0xaf,0x0a,0x8c,0x3f,0x8d,0x47,
	0x03,0xd1,0x64,0x7f,0xf6,0x36,0xb5,0x76,
	0x8f,0xbf,0xd1,0x7a,0x5d,0x88,0x83,0x7a,
	0xd5,0x13,0xf0,0x17,0x8e,0xca,0x5c,0x3a,
	0x89,0x11,0xf9,0x60,0xeb,0x19,0x4e,0x4f,
	0x7e,0xd6,0x50,0x7e,0x1b,0xd4,0xa8,0x7f,
	0x80,0x4c,0xc5,0x44,0xc4,0x9d,0xfc,0x76,
	0x07,0x7b,0x15,0x6f,0x06,0xd0,0xd0,0x65,
	0xfa,0x40,0x18,0x1c,0xd3,0x29,0xfd,0x1c,
	0xfe,0x5b,0x86,0x7a,0x59,0x28,0xf4,0x54,
	0x82,0x24,0x97,0x66,0x03,0x75,0x65,0x32,
	0xff,0x1c,0x43,0x4f,0x38,0x8c,0x80,0x56,
	0x4c,0x78,0x60,0x58,0x9f,0xf2,0x4c,0x20,
	0x80,0x8f,0x6a,0x58,0x44,0x1a,0x90,0x4d,
	0x2f,0x89,0xfb,0x7b,0xe0,0x46,0xbe,0x6b,
	0x1e,0x28,0x17,0x1a,0x4c,0x7d,0xab,0x06,
	0x6c,0x86,0x4b,0x33,0x21,0xf9,0x7b,0x19,
	0x42,0xb4,0x60,0x7d,0xfb,0x45,0x1d,0x2e,
	0x7f,0x81,0xff,0x13,0x17,0xc8,0x50,0x15,
	0x8a,0x10,0x7a,0x68,0x08,0x93,0xf8,0x74,
	0x02,0xe2,0x9e,0x64,0x08,0xe7,0xca,0x66,
	0x23,0x67,0xa1,0x74,0x82,0x2e,0x64,0x29,
	0xcd,0x84,0xc7,0x5d,0x2b,0xe2,0xb6,0x63,
	0x88,0xfe,0x34,0x0f,0xc7,0xc5,0xdf,0x79,
	0xfe,0x0b,0xb4,0x00,0x86,0x5a,0xbb,0x09,
	0x20,0xee,0xd3,0x4e,0x80,0x30,0x4b,0x67,
	0x8a,0xcf,0x20,0x3c,0x1f,0x0b,0x17,0x1e,
	0xb8,0xbc,0xcb,0x3d,0xd6,0x47,0x81,0x14,
	0xbe,0xfd,0x63,0x3e,0x38,0x4c,0x36,0x16,
	0x1a,0x62,0x11,0x62,0xee,0x86,0x5f,0x3a,
	0x18,0x93,0xf4,0x01,0x39,0x8a,0x28,0x7c,
	0x3a,0x04,0x0b,0x41,0x85,0x19,0x40,0x35,
	0x5a,0x83,0xa4,0x15,0x7c,0xb8,0x6b,0x3e,
	0x80,0x5f,0x5d,0x63,0xd9,0x04,0xa4,0x29,
	0x93,0x80,0xbc,0x53,0x0a,0x70,0xd7,0x4b,
	0xe1,0x97,0x9c,0x1e,0x95,0x62,0x5b,0x38,
	0x13,0x57,0xa2,0x32,0x05,0xff,0x3d,0x13,
	0x18,0x91,0xbf,0x61,0xe0,0xdb,0x69,0x10,
	0x30,0xe1,0xf4,0x76,0xa0,0x8f,0xf4,0x70,
	0xa7,0xa1,0x49,0x0a,0x2e,0xed,0xa8,0x77,
	0x27,0xea,0xaf,0x7a,0xc7,0x8f,0x1d,0x59,
	0xaf,0x1d,0xf4,0x5e,0xb1,0xb9,0xd0,0x36,
	0xe7,0x9a,0x34,0x77,0x67,0xda,0xbf,0x1c,
	0x87,0x01,0x52,0x4b,0xa5,0x98,0x98,0x35,
	0xa0,0x26,0xf6,0x32,0xa2,0x63,0x63,0x2d,
	0x93,0x1f,0xf8,0x6f,0xb8,0xb9,0xea,0x34,
	0xdb,0xed,0x8b,0x29,0xcd,0x23,0x03,0x31,
	0x3d,0xd3,0x2a,0x6a,0x35,0x71,0x30,0x3f,
	0x49,0xdc,0x6e,0x6f,0xbe,0x32,0x88,0x4d,
	0x0f,0x76,0xd4,0x68,0xdc,0x5c,0x2b,0x43,
	0xc8,0xa2,0x5f,0x19,0xf0,0x0d,0x71,0x07,
	0x72,0xbf,0x86,0x7b,0xdb,0xf9,0x01,0x4c,
	0xf5,0x0c,0xaf,0x1a,0x8a,0x50,0x46,0x5d,
	0xbb,0xd5,0x6b,0x5c,0x25,0xee,0xa3,0x11,
	0x2a,0xe0,0x3a,0x4e,0x62,0x77,0xb5,0x66,
	0x54,0xdb,0x4c,0x09,0x51,0xca,0xea,0x48,
	0x2a,0x07,0xd3,0x3f,0x03,0xf9,0x40,0x68,
	0x02,0x84,0xbb,0x7f,0x11,0xa2,0x07,0x37,
	0x6a,0xd3,0x00,0x05,0x8a,0x85,0x0d,0x4b,
	0xb6,0x3a,0xa0,0x6c,0x0a,0xfa,0xf6,0x37,
	0x2c,0xe9,0x70,0x78,0x4a,0x5a,0x98,0x5c,
	0xc3,0xb3,0xe1,0x6c,0x07,0xd7,0xfc,0x21,
	0x17,0x7e,0x9b,0x0d,0x00,0x87,0x0c,0x57,
	0x3c,0x48,0x2d,0x61,0x61,0x5a,0x0a,0x7d,
	0xbe,0xb9,0x94,0x24,0x4b,0xbe,0x01,0x4a,
	0x3d,0xb7,0x35,0x40,0x87,0x5c,0xf4,0x3d,
	0x3c,0xcc,0x72,0x51,0xaf,0x76,0xbc,0x3b,
	0x62,0x56,0xf6,0x09,0x31,0xd9,0x21,0x6c,
	0x39,0xc7,0x02,0x19,0x1e,0x2c,0x62,0x66,
	0x57,0xc7,0xc5,0x7d,0x64,0xa7,0x3d,0x67,
	0x80,0xa3,0x17,0x4d,0xab,0xa2,0x12,0x07,
	0xb5,0x71,0x28,0x30,0xaa,0xaa,0xea,0x0c,
	0xae,0x9b,0x53,0x6f,0xb8,0xf5,0xe3,0x2f,
	0xbb,0x4c,0xf2,0x43,0x18,0x6f,0x54,0x74,
	0x42,0x7b,0xf1,0x7a,0x72,0x87,0x92,0x30,
	0x23,0x69,0x4b,0x2c,0x6e,0x64,0x62,0x73,
	0xbc,0xe1,0x2a,0x0d,0xe6,0x1c,0x2d,0x19,
	0x75,0x3b,0x5f,0x15,0xd3,0x5f,0xc6,0x1a,
	0xe6,0xa3,0x39,0x70,0xb1,0x83,0x8c,0x76,
	0x34,0xba,0xd0,0x17,0xa5,0x5d,0xce,0x14,
	0xfd,0x41,0x8e,0x40,0x72,0x71,0x06,0x58,
	0x2c,0xba,0xc2,0x52,0x39,0x0e,0x01,0x12,
	0x21,0xe8,0xc2,0x13,0x8e,0x10,0xb9,0x5c,
	0x6a,0xe7,0x22,0x7e,0x5b,0xaf,0xc5,0x2c,
	0xac,0x3c,0x1b,0x43,0xc1,0xae,0xe8,0x7b,
	0xbf,0x56,0x03,0x14,0x2d,0xe0,0x32,0x10,
	0x6c,0x51,0xfb,0x02,0x74,0xc8,0x2b,0x44,
	0xd7,0x8a,0x1d,0x1d,0x1a,0xed,0x4e,0x72,
	0x2c,0xbe,0x0f,0x74,0x93,0xd7,0x0f,0x61,
	0x33,0x5c,0xa3,0x66,0x6e,0x39,0x01,0x6f,
	0x05,0x5f,0xa2,0x11,0x56,0xc5,0xee,0x12,
	0xdc,0x9d,0x63,0x62,0xc1,0x40,0xcd,0x1e,
	0x3c,0xe2,0x1b,0x2c,0x51,0xd9,0xc2,0x77,
	0x94,0xa0,0x93,0x39,0x22,0x86,0x55,0x1c,
	0x03,0x5d,0x4f,0x6e,0xc9,0x5a,0x64,0x51,
	0xc7,0xe3,0x23,0x31,0x00,0x9f,0xdd,0x2e,
	0x3b,0xcc,0x6a,0x29,0xf3,0x9d,0xe6,0x03,
	0x39,0xad,0xde,0x40,0x5c,0xb4,0x2d,0x3d,
	0x82,0xae,0x9f,0x60,0xa3,0x94,0x01,0x3f,
	0xb7,0x63,0xf3,0x69,0x2e,0xeb,0xba,0x23,
	0x65,0x43,0xea,0x3a,0x76,0xba,0xf6,0x7d,
	0x5b,0xcb,0xed,0x33,0xd1,0x94,0xe5,0x3d,
	0xeb,0x82,0x22,0x42,0x33,0x56,0x0b,0x51,
	0xec,0x81,0x34,0x30,0x17,0x41,0x32,0x36,
	0xc6,0x2d,0x1b,0x32,0x1f,0xde,0xd7,0x16,
	0x86,0x7a,0x33,0x25,0xcb,0x8c,0xbd,0x43,
	0x75,0xa3,0xc6,0x29,0x62,0x18,0x97,0x07,
	0x8c,0xcd,0x8a,0x62,0xb1,0x85,0xe2,0x55,
	0xb4,0xf1,0x59,0x7f,0x20,0x6e,0x1e,0x1c,
	0xd3,0x0b,0x38,0x72,0xb7,0x4e,0xa9,0x6d,
	0xe9,0xc8,0x82,0x6d,0x9b,0xef,0x5b,0x23,
	0xb7,0xed,0x86,0x1c,0x24,0x95,0xed,0x16,
	0x8e,0x8d,0x42,0x27,0xf0,0x9a,0x65,0x5d,
	0x81,0x49,0x1b,0x54,0x10,0x3c,0xe2,0x07,
	0x93,0x2f,0x67,0x1c,0x38,0xad,0x0e,0x3e,
	0x3f,0x27,0x9d,0x2b,0xf8,0x72,0x51,0x57,
	0xaf,0x67,0x05,0x3c,0x9a,0xf2,0x8a,0x5f,
	0xca,0x07,0x37,0x15,0x9a,0xea,0x27,0x7e,
	0xcd,0x48,0x96,0x30,0xb6,0x89,0x6b,0x45,
	0xb1,0x2b,0x5a,0x34,0x93,0x76,0xb1,0x62,
	0xd5,0x67,0x43,0x5c,0x37,0xa6,0x8d,0x59,
	0x5e,0x03,0x6f,0x26,0x4a,0x0b,0x0a,0x06,
	0x9a,0xbe,0x24,0x61,0xea,0xd0,0xf9,0x08,
	0xfb,0x90,0xec,0x5b,0x4e,0xb0,0x7e,0x60,
	0x0b,0x3f,0x18,0x25,0xce,0x9c,0x24,0x4e,
	0x05,0xff,0x27,0x4e,0xf4,0x07,0x9b,0x12,
	0x69,0x8c,0x80,0x71,0xbc,0xec,0xae,0x6a,
	0x19,0x9d,0x88,0x29,0xf8,0x19,0xc3,0x18,
	0xac,0x87,0x14,0x48,0x9a,0xe6,0xa3,0x7d,
	0x08,0x56,0xa5,0x20,0x3f,0xb7,0x7b,0x64,
	0xd2,0x93,0xb2,0x3b,0x47,0x7d,0x42,0x4c,
	0x38,0x2a,0xcd,0x3b,0x81,0xfb,0xb7,0x77,
	0xe2,0x6f,0xcd,0x2b,0x02,0x32,0x04,0x51,
	0x1b,0xe6,0xdf,0x75,0xaf,0xb8,0x63,0x5c,
	0xb8,0xbb,0x6f,0x16,0xcd,0x11,0x3a,0x2a,
	0x43,0x2f,0x15,0x3f,0x8d,0x23,0xb3,0x72,
	0x04,0xb8,0xc7,0x03,0xa1,0x32,0x84,0x65,
	0xd7,0x2e,0xbd,0x78,0x9e,0x76,0xec,0x64,
	0x8c,0x03,0x7e,0x6e,0xd2,0xbf,0xa9,0x54,
	0xec,0x26,0x6b,0x45,0x97,0x42,0x96,0x13,
	0xa0,0x5c,0xce,0x22,0xf1,0x25,0x93,0x13,
	0x8b,0x4a,0x31,0x26,0x0a,0xe9,0x4e,0x14,
	0xad,0x12,0x42,0x7e,0xa4,0xe7,0xb9,0x4f,
	0x02,0x03,0x12,0x2d,0x59,0x9a,0x56,0x46,
	0x3e,0xce,0x5d,0x4d,0x0a,0x59,0xb7,0x4d,
	0x99,0x51,0xd2,0x2a,0x11,0x62,0x10,0x09,
	0x52,0xd6,0xf9,0x19,0xd1,0x7b,0x9f,0x66,
	0x92,0x5d,0xc8,0x00,0x34,0x46,0xc7,0x45,
	0xd3,0xad,0xa3,0x37,0xae,0x43,0xa8,0x76,
	0xe3,0xfe,0x2a,0x22,0x8b,0x69,0x13,0x4e,
	0x7b,0x55,0xe2,0x20,0x26,0x2e,0x40,0x61,
	0x18,0x8d,0xc6,0x40,0x7f,0x0d,0xaa,0x24,
	0xc8,0x60,0xc4,0x46,0xef,0xbb,0x83,0x39,
	0x1e,0x84,0x96,0x09,0x54,0x64,0x42,0x35,
	0xc1,0x7b,0x2d,0x0e,0x0a,0xab,0x01,0x4f,
	0xeb,0xa6,0xd8,0x48,0x61,0xd8,0xfb,0x30,
	0xfc,0xd0,0x94,0x62,0x76,0xf1,0x09,0x6f,
	0x6b,0xc1,0x4a,0x45,0xa9,0xe3,0xd6,0x60,
	0x1b,0xd9,0xc3,0x3e,0x6d,0xc4,0x5c,0x72,
	0x03,0x7e,0x2d,0x27,0x59,0xa7,0x21,0x0c,
	0x78,0x1d,0x14,0x40,0x9c,0xcf,0xff,0x51,
	0x6a,0x09,0x32,0x15,0xca,0xf3,0x0d,0x5a,
	0x6d,0x4b,0x9f,0x38,0xfd,0x66,0xfa,0x15,
	0xfe,0x39,0xd5,0x1f,0x40,0xf9,0x42,0x70,
	0xab,0xaa,0xa2,0x0c,0xe1,0x38,0x00,0x42,
	0xcb,0x62,0x56,0x3e,0x26,0x00,0x85,0x2d,
	0x08,0x67,0x40,0x23,0xe3,0xef,0x1c,0x7f,
	0xa5,0x0d,0x2f,0x52,0xd0,0xc7,0x04,0x6a,
	0xd2,0xab,0xa0,0x38,0xc3,0x91,0xc5,0x5b,
	0x24,0x2c,0x47,0x1f,0x93,0x27,0xce,0x46,
	0xce,0x3c,0xc7,0x2a,0x0f,0xd3,0x1f,0x68,
	0xf4,0xff,0xc9,0x77,0xca,0x0d,0x5c,0x0d,
	0x85,0xc4,0x29,0x57,0x60,0xc1,0x14,0x3d,
	0x73,0xf1,0x32,0x6e,0xa0,0x9d,0xed,0x15,
	0xcd,0x85,0x71,0x2f,0x76,0x6f,0x60,0x15,
	0xfa,0x44,0x0f,0x22,0x45,0xa3,0x85,0x6f,
	0x12,0x3f,0x60,0x67,0x64,0x4e,0x41,0x37,
	0x0f,0x97,0x93,0x49,0x7f,0x8a,0xff,0x1f,
	0x61,0xb5,0x3b,0x4d,0x0d,0xd1,0x68,0x69,
	0xbf,0x83,0x42,0x10,0x0c,0x60,0xde,0x59,
	0xef,0x09,0x69,0x2b,0x8a,0xe6,0x98,0x4e,
	0x32,0x60,0x63,0x07,0xf7,0x70,0xa9,0x4e,
	0x6d,0xd6,0xb5,0x4d,0xd8,0x6d,0x92,0x59,
	0xc7,0x38,0xae,0x38,0x3f,0x82,0x56,0x06,
	0x9b,0xff,0x57,0x35,0xeb,0x64,0xf5,0x57,
	0xd2,0xa9,0x24,0x4d,0x69,0x3c,0x1f,0x60,
	0xfa,0x37,0x15,0x40,0xc7,0xa9,0xee,0x44,
	0x33,0x4a,0x7b,0x6d,0x7f,0xfc,0x3e,0x17,
	0x27,0x6b,0x03,0x02,0xa7,0x3b,0xae,0x5b,
	0x20,0x9a,0x2c,0x2d,0xf4,0xf0,0x74,0x31,
	0x1d,0xab,0x0e,0x71,0x1a,0xdf,0x3b,0x4f,
	0x3a,0x94,0xfa,0x20,0x30,0xea,0x6e,0x58,
	0x7e,0x2d,0x7d,0x06,0x49,0x2b,0x8e,0x6a,
	0xaf,0x74,0x6e,0x78,0xe0,0xe2,0xb8,0x53,
	0x57,0xfc,0xf6,0x53,0x6f,0xf8,0xb0,0x08,
	0xec,0x42,0x97,0x2d,0x46,0x06,0x60,0x7f,
	0xf9,0xde,0x49,0x57,0x1f,0xa3,0xfa,0x34,
	0x3d,0x77,0x09,0x4e,0x67,0xb5,0xff,0x24,
	0xf7,0x10,0x8d,0x0e,0x04,0xb0,0xb7,0x06,
	0xa6,0x37,0x56,0x2b,0x92,0x10,0xe5,0x43,
	0xef,0x14,0xad,0x5e,0x79,0xe1,0x7a,0x78,
	0xfc,0x4c,0x04,0x24,0xe9,0x4c,0xc2,0x1e,
	0x40,0x8b,0x69,0x3d,0x2f,0x97,0x7f,0x11,
	0x68,0x49,0x01,0x36,0x67,0xf6,0x6c,0x3f,
	0xd6,0xd2,0x2d,0x6d,0x88,0xe3,0x2d,0x63,
	0x5b,0xe7,0xe1,0x70,0xf4,0x7d,0x3c,0x5e,
	0xa2,0xc2,0x69,0x32,0x95,0x7b,0xdc,0x11,
	0x24,0x68,0xab,0x36,0x21,0xf0,0xe6,0x38,
	0xdf,0xa6,0x6a,0x7c,0xd3,0xdc,0x19,0x2f,
	0x01,0xd3,0x9f,0x0c,0x36,0xa3,0x61,0x50,
	0x42,0xd5,0xca,0x37,0xed,0x15,0x37,0x3a,
	0x7c,0xa9,0xc1,0x4f,0x3c,0xb4,0x14,0x0f,
	0x0c,0xb9,0x31,0x6f,0xb9,0x20,0xcb,0x1d,
	0xa3,0x69,0x14,0x34,0x03,0xca,0xbe,0x7d,
	0xbd,0xd0,0x82,0x24,0x49,0xa1,0x6a,0x5f,
	0x96,0xda,0xa3,0x41,0xac,0xe5,0x2f,0x03,
	0xc2,0x82,0xe5,0x57,0x92,0x27,0xa8,0x65,
	0x95,0x32,0xf2,0x21,0x02,0x0e,0x4f,0x15,
	0xc1,0xbe,0x27,0x77,0xfd,0x7b,0xf3,0x57,
	0x69,0x04,0xbc,0x54,0x98,0x91,0x55,0x64,
	0x86,0x5f,0x21,0x3b,0xc5,0xeb,0x9d,0x45,
	0x8c,0x0f,0x92,0x42,0x28,0x22,0x8b,0x6d,
	0x5a,0x67,0x7a,0x57,0xb0,0x77,0x3d,0x79,
	0x49,0x12,0x72,0x26,0x39,0x0e,0xe5,0x53,
	0x83,0x54,0x57,0x28,0x4a,0xe5,0x11,0x33,
	0x6f,0xb1,0x46,0x24,0xc6,0x29,0x22,0x60,
	0x38,0xfb,0x48,0x6d,0xeb,0x5a,0x08,0x74,
	0x02,0xde,0x36,0x6f,0x44,0xb4,0x7a,0x5c,
	0xa4,0x7b,0xd3,0x11,0xa5,0x47,0x4b,0x23,
	0x48,0x7e,0x39,0x5a,0x61,0x4c,0x56,0x36,
	0xee,0xe8,0xb5,0x02,0xde,0x58,0xdd,0x1b,
	0x0d,0x32,0x86,0x39,0xb1,0x6b,0x9b,0x5a,
	0x70,0x80,0x85,0x01,0xa2,0x64,0x78,0x5b,
	0xb3,0x79,0xea,0x6f,0x31,0x3f,0xad,0x78,
	0xa0,0xe0,0x6b,0x33,0x1d,0x7e,0xa6,0x44,
	0xc9,0xd0,0x02,0x5d,0x26,0x40,0x8d,0x6e,
	0xe2,0x69,0x44,0x0a,0x55,0xe0,0x94,0x1f,
	0x4e,0x62,0x18,0x5c,0x3c,0xd1,0xbe,0x61,
	0x05,0x58,0xd2,0x18,0x98,0x74,0x8a,0x02,
	0x76,0xdf,0xa3,0x35,0x89,0xac,0x29,0x41,
	0xe2,0x59,0x9c,0x35,0xe5,0x90,0xea,0x59,
	0x4f,0xd6,0x4b,0x21,0x1a,0x55,0xe5,0x22,
	0xd1,0xeb,0xf2,0x4d,0x51,0xb4,0x82,0x10,
	0x5f,0x09,0x60,0x7f,0x75,0x67,0xc6,0x5f,
	0xf6,0xfb,0xcd,0x33,0xa7,0x87,0x99,0x59,
	0xd7,0xb3,0x1c,0x16,0xe4,0xe4,0x83,0x36,
	0x85,0xe0,0x76,0x75,0xe4,0xe5,0xa2,0x4f,
	0x95,0x50,0x1f,0x11,0xf5,0x60,0xfc,0x76,
	0x87,0x4a,0x1b,0x2b,0x49,0xca,0x09,0x01,
	0x26,0xa0,0xa9,0x6f,0x27,0x2b,0x87,0x5e,
	0x66,0x48,0xb0,0x45,0xf0,0x70,0xac,0x4c,
	0x4d,0x6b,0x14,0x4d,0x48,0xb2,0xf4,0x4f,
	0x45,0x51,0x41,0x6c,0x9b,0xcd,0x2c,0x29,
	0x84,0x83,0xb3,0x31,0x4b,0xa9,0x13,0x05,
	0x33,0x42,0xb7,0x2b,0xfa,0x62,0x57,0x67,
	0xd4,0x55,0x3d,0x46,0x16,0x9c,0x53,0x61,
	0xe0,0xf3,0x41,0x41,0x23,0x2c,0x89,0x67,
	0x30,0xf1,0x38,0x04,0xb1,0xdf,0x34,0x0f,
	0x74,0xe0,0x0b,0x78,0x8f,0xfa,0x98,0x03,
	0x26,0x47,0xfb,0x6e,0x6a,0xdc,0xd9,0x2b,
	0x36,0x82,0x32,0x5d,0xfd,0xfa,0x17,0x05,
	0x4e,0xc1,0x5d,0x62,0xbb,0x62,0xa9,0x52,
	0xe2,0xe0,0xba,0x54,0xe4,0x11,0x7d,0x73,
	0xb0,0xc3,0xa5,0x49,0x69,0x2b,0xd6,0x7f,
	0x2d,0xdc,0x86,0x74,0xd7,0x63,0x4f,0x39,
	0x90,0x56,0x5d,0x5e,0x93,0x24,0x37,0x3a,
	0xc7,0xd4,0xfb,0x05,0xdd,0xc1,0x71,0x2b,
	0xdb,0xd6,0x2b,0x0a,0x0c,0x26,0x3d,0x72,
	0x78,0x8f,0x9e,0x54,0x5f,0x5a,0xdf,0x3b,
	0x57,0xcf,0x50,0x77,0xac,0xd1,0x55,0x00,
	0x5a,0xbd,0x36,0x23,0x2b,0x25,0x8e,0x3d,
	0xc2,0x6d,0xa9,0x61,0x3a,0xb1,0x78,0x64,
	0x4e,0x51,0x17,0x25,0xf2,0x5e,0xe2,0x65,
	0xeb,0x90,0xad,0x73,0xc2,0x31,0x23,0x1d,
	0x82,0x59,0x7b,0x69,0x11,0xd8,0xa8,0x62,
	0x2c,0x0e,0xfd,0x48,0xb8,0xdb,0xad,0x46,
	0x0f,0xd3,0xc0,0x67,0x7b,0xcf,0x5a,0x2b,
	0x74,0x3e,0x57,0x19,0xf1,0xb3,0x7b,0x3c,
	0x5f,0xe1,0xd7,0x1e,0x24,0x02,0xfd,0x62,
	0x5a,0xdf,0x51,0x3c,0x8c,0xbd,0x5e,0x13,
	0xfb,0x65,0x4c,0x1c,0xea,0x35,0xaf,0x1a,
	0x1f,0xe2,0x95,0x4d,0xc2,0x3a,0x48,0x22,
	0xc7,0xf7,0x20,0x46,0xfa,0xb8,0xc1,0x57,
	0xcf,0x60,0x85,0x14,0x3f,0x87,0xbf,0x1a,
	0x59,0x13,0xa1,0x13,0x26,0x30,0xd6,0x0b,
	0xeb,0x58,0x15,0x1b,0xb3,0xd0,0xd7,0x36,
	0x52,0x55,0x64,0x49,0xad,0xc6,0xbe,0x7c,
	0xed,0x81,0x50,0x1b,0xa0,0xa6,0x7b,0x6e,
	0xa0,0x25,0xa1,0x62,0xd8,0x12,0xfe,0x0e,
	0x63,0xd8,0x9e,0x0b,0x22,0x7f,0x1c,0x4c,
	0xea,0xea,0xa6,0x71,0x8f,0xe6,0x9b,0x54,
	0xda,0x5a,0xca,0x12,0xf9,0xbd,0x67,0x59,
	0x0a,0xb6,0xf6,0x7f,0x4e,0x99,0x21,0x2c,
	0xea,0x71,0xe3,0x15,0x69,0x97,0xce,0x1e,
	0x73,0x9b,0x1e,0x0f,0x44,0x51,0x35,0x52,
	0xf5,0x54,0x2d,0x32,0x6e,0x01,0x6b,0x2b,
	0x2e,0x87,0xe4,0x6c,0x14,0x37,0xc3,0x7f,
	0x31,0x3c,0xb3,0x4d,0xf5,0x7e,0x05,0x33,
	0x0e,0xf0,0x84,0x57,0x00,0x9d,0x38,0x62,
	0x34,0x06,0xc5,0x4d,0x68,0x03,0x26,0x6b,
	0x26,0xcd,0x0e,0x6e,0x20,0x5f,0xda,0x68,
	0x1b,0xd4,0xfd,0x21,0x78,0x22,0x73,0x37,
	0xcd,0x25,0x99,0x65,0x09,0x56,0x4e,0x3d,
	0x19,0xc9,0xee,0x25,0x6d,0x4b,0x3a,0x48,
	0xe1,0x68,0x4c,0x4c,0x7c,0xa1,0x8d,0x31,
	0x8f,0xca,0x56,0x14,0xcb,0x53,0xf3,0x3d,
	0x0b,0x88,0x29,0x06,0x6a,0x25,0x21,0x27,
	0xc4,0x11,0x5b,0x17,0x16,0x3e,0x20,0x06,
	0xb8,0xbe,0x42,0x53,0xae,0x83,0x3e,0x2d,
	0x7f,0xd5,0xee,0x24,0x2b,0x5a,0x61,0x62,
	0xf2,0xd4,0x73,0x7f,0x75,0x2a,0x1c,0x57,
	0x9a,0x5b,0xcc,0x0d,0x20,0x5c,0x58,0x6c,
	0x89,0x61,0xdf,0x56,0xcb,0x97,0x7f,0x5b,
	0x15,0xdb,0x5d,0x1f,0x98,0x51,0x64,0x2e,
	0xcb,0x34,0xb8,0x3d,0x4a,0xe1,0x22,0x6d,
	0x00,0x55,0x8a,0x19,0xf1,0x01,0xc7,0x2b,
	0x6a,0x40,0xfd,0x55,0x1b,0x29,0x88,0x3b
};


#endif

