unsigned char tuberom_6502_orig[] = {
  0xa2,0x00,0xbd,0x00,0xff,0x9d,0x00,0xff,0xca,0xd0,0xf7,0xa2,0x36,0xbd,0x80,0xff,
  0x9d,0x00,0x02,0xca,0x10,0xf7,0x9a,0xa2,0xf0,0xbd,0xff,0xfd,0x9d,0xff,0xfd,0xca,
  0xd0,0xf7,0xa0,0x00,0x84,0xf8,0xa9,0xf8,0x85,0xf9,0xb1,0xf8,0x91,0xf8,0xc8,0xd0,
  0xf9,0xe6,0xf9,0xa5,0xf9,0xc9,0xfe,0xd0,0xf1,0xa2,0x10,0xbd,0x59,0xf8,0x9d,0x00,
  0x01,0xca,0x10,0xf7,0xa5,0xee,0x85,0xf6,0xa5,0xef,0x85,0xf7,0xa9,0x00,0x85,0xff,
  0x85,0xf2,0xa9,0xf8,0x85,0xf3,0x4c,0x00,0x01,0xad,0xf8,0xfe,0x58,0x4c,0x60,0xf8,
  0x20,0x98,0xfe,0x0a,0x41,0x63,0x6f,0x72,0x6e,0x20,0x54,0x55,0x42,0x45,0x20,0x36,
  0x35,0x30,0x32,0x20,0x36,0x34,0x4b,0x0a,0x0a,0x0d,0x00,0xea,0xa9,0x8d,0x8d,0x5e,
  0xf8,0xa9,0xf8,0x8d,0x5f,0xf8,0x20,0x75,0xf9,0xc9,0x80,0xf0,0x28,0xa9,0x2a,0x20,
  0xee,0xff,0xa2,0x5d,0xa0,0xf9,0xa9,0x00,0x20,0xf1,0xff,0xb0,0x0a,0xa2,0x36,0xa0,
  0x02,0x20,0xf7,0xff,0x4c,0x8d,0xf8,0xa9,0x7e,0x20,0xf4,0xff,0x00,0x11,0x45,0x73,
  0x63,0x61,0x70,0x65,0x00,0xa5,0xf6,0x85,0xee,0x85,0xf2,0xa5,0xf7,0x85,0xef,0x85,
  0xf3,0xa0,0x07,0xb1,0xee,0xd8,0x18,0x65,0xee,0x85,0xfd,0xa9,0x00,0x65,0xef,0x85,
  0xfe,0xa0,0x00,0xb1,0xfd,0xd0,0x23,0xc8,0xb1,0xfd,0xc9,0x28,0xd0,0x1c,0xc8,0xb1,
  0xfd,0xc9,0x43,0xd0,0x15,0xc8,0xb1,0xfd,0xc9,0x29,0xd0,0x0e,0xa0,0x06,0xb1,0xee,
  0x29,0x4f,0xc9,0x40,0x90,0x09,0x29,0x0d,0xd0,0x28,0xa9,0x01,0x6c,0xf2,0x00,0xa9,
  0x45,0x8d,0x02,0x02,0xa9,0xf9,0x8d,0x03,0x02,0x00,0x00,0x54,0x68,0x69,0x73,0x20,
  0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x6c,0x61,0x6e,0x67,0x75,0x61,0x67,
  0x65,0x00,0xa9,0x45,0x8d,0x02,0x02,0xa9,0xf9,0x8d,0x03,0x02,0x00,0x00,0x49,0x20,
  0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x72,0x75,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,
  0x63,0x6f,0x64,0x65,0x00,0xa2,0xff,0x9a,0x20,0xe7,0xff,0xa0,0x01,0xb1,0xfd,0xf0,
  0x06,0x20,0xee,0xff,0xc8,0xd0,0xf6,0x20,0xe7,0xff,0x4c,0x8d,0xf8,0x36,0x02,0xca,
  0x20,0xff,0x2c,0xf8,0xfe,0xea,0x50,0xfa,0x8d,0xf9,0xfe,0x60,0xa9,0x00,0x20,0x4a,
  0xfc,0x20,0x75,0xf9,0x0a,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x60,0xc8,0xb1,
  0xf8,0xc9,0x20,0xf0,0xf9,0x60,0xa2,0x00,0x86,0xf0,0x86,0xf1,0xb1,0xf8,0xc9,0x30,
  0x90,0x1f,0xc9,0x3a,0x90,0x0a,0x29,0xdf,0xe9,0x07,0x90,0x15,0xc9,0x40,0xb0,0x11,
  0x0a,0x0a,0x0a,0x0a,0xa2,0x03,0x0a,0x26,0xf0,0x26,0xf1,0xca,0x10,0xf8,0xc8,0xd0,
  0xdb,0x60,0x86,0xf8,0x84,0xf9,0xa0,0x00,0x2c,0xfa,0xfe,0x50,0xfb,0xb1,0xf8,0x8d,
  0xfb,0xfe,0xc8,0xc9,0x0d,0xd0,0xf1,0xa4,0xf9,0x60,0x48,0x86,0xf8,0x84,0xf9,0xa0,
  0x00,0x20,0x7f,0xf9,0xc8,0xc9,0x2a,0xf0,0xf8,0x29,0xdf,0xaa,0xb1,0xf8,0xe0,0x47,
  0xf0,0x5c,0xe0,0x48,0xd0,0x47,0xc9,0x2e,0xf0,0x2d,0x29,0xdf,0xc9,0x45,0xd0,0x3d,
  0xc8,0xb1,0xf8,0xc9,0x2e,0xf0,0x20,0x29,0xdf,0xc9,0x4c,0xd0,0x30,0xc8,0xb1,0xf8,
  0xc9,0x2e,0xf0,0x13,0x29,0xdf,0xc9,0x50,0xd0,0x23,0xc8,0xb1,0xf8,0x29,0xdf,0xc9,
  0x41,0x90,0x04,0xc9,0x5b,0x90,0x16,0x20,0x98,0xfe,0x0a,0x0d,0x36,0x35,0x30,0x32,
  0x20,0x54,0x55,0x42,0x45,0x20,0x31,0x2e,0x31,0x30,0x0a,0x0d,0xea,0xa9,0x02,0x20,
  0x4a,0xfc,0x20,0xb6,0xf9,0x20,0x75,0xf9,0xc9,0x80,0xf0,0x20,0x68,0x60,0x29,0xdf,
  0xc9,0x4f,0xd0,0xe9,0x20,0x7e,0xf9,0x20,0x86,0xf9,0x20,0x7f,0xf9,0xc9,0x0d,0xd0,
  0xdc,0x8a,0xf0,0x08,0xa5,0xf0,0x85,0xf6,0xa5,0xf1,0x85,0xf7,0xa5,0xef,0x48,0xa5,
  0xee,0x48,0x20,0xb5,0xf8,0x68,0x85,0xee,0x85,0xf2,0x68,0x85,0xef,0x85,0xf3,0x68,
  0x60,0xf0,0xc2,0xc9,0x80,0xb0,0x25,0x48,0xa9,0x04,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,
  0xfb,0xfe,0x2c,0xfa,0xfe,0x50,0xfb,0x8e,0xfb,0xfe,0x68,0x2c,0xfa,0xfe,0x50,0xfb,
  0x8d,0xfb,0xfe,0x2c,0xfa,0xfe,0x10,0xfb,0xae,0xfb,0xfe,0x60,0xc9,0x82,0xf0,0x5a,
  0xc9,0x83,0xf0,0x51,0xc9,0x84,0xf0,0x48,0x48,0xa9,0x06,0x2c,0xfa,0xfe,0x50,0xfb,
  0x8d,0xfb,0xfe,0x2c,0xfa,0xfe,0x50,0xfb,0x8e,0xfb,0xfe,0x2c,0xfa,0xfe,0x50,0xfb,
  0x8c,0xfb,0xfe,0x68,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,0xc9,0x8e,0xf0,0xa1,
  0xc9,0x9d,0xf0,0x1b,0x48,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x0a,0x68,0x2c,
  0xfa,0xfe,0x10,0xfb,0xac,0xfb,0xfe,0x2c,0xfa,0xfe,0x10,0xfb,0xae,0xfb,0xfe,0x60,
  0xa6,0xf2,0xa4,0xf3,0x60,0xa2,0x00,0xa0,0x08,0x60,0xa2,0x00,0xa0,0x00,0x60,0x86,
  0xf8,0x84,0xf9,0xa8,0xf0,0x71,0x48,0xa0,0x08,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,
  0xfe,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,0xaa,0x10,0x08,0xa0,0x00,0xb1,0xf8,
  0xa8,0x4c,0x2d,0xfb,0xbc,0xbc,0xfc,0xe0,0x15,0x90,0x02,0xa0,0x10,0x2c,0xfa,0xfe,
  0x50,0xfb,0x8c,0xfb,0xfe,0x88,0x30,0x0d,0x2c,0xfa,0xfe,0x50,0xfb,0xb1,0xf8,0x8d,
  0xfb,0xfe,0x88,0x10,0xf3,0x8a,0x10,0x08,0xa0,0x01,0xb1,0xf8,0xa8,0x4c,0x59,0xfb,
  0xbc,0xd0,0xfc,0xe0,0x15,0x90,0x02,0xa0,0x10,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,
  0xfe,0x88,0x30,0x0d,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x91,0xf8,0x88,0x10,
  0xf3,0xa4,0xf9,0xa6,0xf8,0x68,0x60,0xa9,0x0a,0x20,0x4a,0xfc,0xa0,0x04,0x2c,0xfa,
  0xfe,0x50,0xfb,0xb1,0xf8,0x8d,0xfb,0xfe,0x88,0xc0,0x01,0xd0,0xf1,0xa9,0x07,0x20,
  0x4a,0xfc,0xb1,0xf8,0x48,0x88,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,0xb1,0xf8,
  0x48,0xa2,0xff,0x20,0x75,0xf9,0xc9,0x80,0xb0,0x1d,0x68,0x85,0xf8,0x68,0x85,0xf9,
  0xa0,0x00,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x91,0xf8,0xc8,0xc9,0x0d,0xd0,
  0xf1,0xa9,0x00,0x88,0x18,0xe8,0x60,0x68,0x68,0xa9,0x00,0x60,0x48,0xa9,0x0c,0x20,
  0x4a,0xfc,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,0xb5,0x03,0x20,0x4a,0xfc,0xb5,
  0x02,0x20,0x4a,0xfc,0xb5,0x01,0x20,0x4a,0xfc,0xb5,0x00,0x20,0x4a,0xfc,0x68,0x20,
  0x4a,0xfc,0x20,0x75,0xf9,0x48,0x20,0x75,0xf9,0x95,0x03,0x20,0x75,0xf9,0x95,0x02,
  0x20,0x75,0xf9,0x95,0x01,0x20,0x75,0xf9,0x95,0x00,0x68,0x60,0x48,0xa9,0x12,0x20,
  0x4a,0xfc,0x68,0x20,0x4a,0xfc,0xc9,0x00,0xd0,0x0a,0x48,0x98,0x20,0x4a,0xfc,0x20,
  0x75,0xf9,0x68,0x60,0x20,0xb2,0xf9,0x4c,0x75,0xf9,0xa9,0x0e,0x20,0x4a,0xfc,0x98,
  0x20,0x4a,0xfc,0x4c,0x71,0xf9,0x48,0xa9,0x10,0x20,0x4a,0xfc,0x98,0x20,0x4a,0xfc,
  0x68,0x20,0x4a,0xfc,0x48,0x20,0x75,0xf9,0x68,0x60,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,
  0xfb,0xfe,0x60,0x84,0xfb,0x86,0xfa,0x48,0xa9,0x14,0x20,0x4a,0xfc,0xa0,0x11,0xb1,
  0xfa,0x20,0x4a,0xfc,0x88,0xc0,0x01,0xd0,0xf6,0x88,0xb1,0xfa,0xaa,0xc8,0xb1,0xfa,
  0xa8,0x20,0xb2,0xf9,0x68,0x20,0x4a,0xfc,0x20,0x75,0xf9,0x48,0xa0,0x11,0x20,0x75,
  0xf9,0x91,0xfa,0x88,0xc0,0x01,0xd0,0xf6,0xa4,0xfb,0xa6,0xfa,0x68,0x60,0x84,0xfb,
  0x86,0xfa,0x48,0xa9,0x16,0x20,0x4a,0xfc,0xa0,0x0c,0xb1,0xfa,0x20,0x4a,0xfc,0x88,
  0x10,0xf8,0x68,0x20,0x4a,0xfc,0xa0,0x0c,0x20,0x75,0xf9,0x91,0xfa,0x88,0x10,0xf8,
  0xa4,0xfb,0xa6,0xfa,0x4c,0x71,0xf9,0x00,0xff,0x42,0x61,0x64,0x00,0x00,0x05,0x00,
  0x05,0x02,0x05,0x08,0x0e,0x04,0x01,0x01,0x05,0x00,0x01,0x20,0x10,0x0d,0x00,0x04,
  0x80,0x05,0x00,0x05,0x00,0x05,0x00,0x00,0x00,0x05,0x09,0x05,0x00,0x08,0x18,0x00,
  0x01,0x0d,0x80,0x04,0x80,0x85,0xfc,0x68,0x48,0x29,0x10,0xd0,0x10,0x6c,0x04,0x02,
  0x2c,0xfe,0xfe,0x30,0x4a,0x2c,0xf8,0xfe,0x30,0x1e,0x6c,0x06,0x02,0x8a,0x48,0xba,
  0xbd,0x03,0x01,0xd8,0x38,0xe9,0x01,0x85,0xfd,0xbd,0x04,0x01,0xe9,0x00,0x85,0xfe,
  0x68,0xaa,0xa5,0xfc,0x58,0x6c,0x02,0x02,0xad,0xf9,0xfe,0x30,0x1c,0x98,0x48,0x8a,
  0x48,0x20,0x80,0xfe,0xa8,0x20,0x80,0xfe,0xaa,0x20,0x80,0xfe,0x20,0x36,0xfd,0x68,
  0xaa,0x68,0xa8,0xa5,0xfc,0x40,0x6c,0x20,0x02,0x0a,0x85,0xff,0xa5,0xfc,0x40,0xad,
  0xff,0xfe,0x10,0x21,0x58,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0xa9,0x00,0x8d,
  0x36,0x02,0xa8,0x20,0x75,0xf9,0x8d,0x37,0x02,0xc8,0x20,0x75,0xf9,0x99,0x37,0x02,
  0xd0,0xf7,0x4c,0x36,0x02,0x8d,0xfa,0xff,0x98,0x48,0xac,0xfa,0xff,0xb9,0x70,0xfe,
  0x8d,0xfa,0xff,0xb9,0x78,0xfe,0x8d,0xfb,0xff,0xb9,0x60,0xfe,0x85,0xf4,0xb9,0x68,
  0xfe,0x85,0xf5,0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,0xc0,0x05,0xf0,0x58,0x98,
  0x48,0xa0,0x01,0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,0x2c,0xfe,0xfe,0x10,0xfb,
  0xad,0xff,0xfe,0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,0x91,0xf4,0x88,0x2c,0xfe,
  0xfe,0x10,0xfb,0xad,0xff,0xfe,0x91,0xf4,0x2c,0xfd,0xfe,0x2c,0xfd,0xfe,0x2c,0xfe,
  0xfe,0x10,0xfb,0xad,0xff,0xfe,0x68,0xc9,0x06,0x90,0x1c,0xd0,0x1f,0xa0,0x00,0xad,
  0xfc,0xfe,0x29,0x80,0x10,0xf9,0xb9,0xff,0xff,0x8d,0xfd,0xfe,0xc8,0xd0,0xf0,0x2c,
  0xfc,0xfe,0x10,0xfb,0x8d,0xfd,0xfe,0x68,0xa8,0xa5,0xfc,0x40,0xa0,0x00,0xad,0xfc,
  0xfe,0x29,0x80,0x10,0xf9,0xad,0xfd,0xfe,0x99,0xff,0xff,0xc8,0xd0,0xf0,0xf0,0xe7,
  0x48,0xad,0xff,0xff,0x8d,0xfd,0xfe,0xee,0x02,0xfe,0xd0,0x03,0xee,0x03,0xfe,0x68,
  0x40,0x48,0xad,0xfd,0xfe,0x8d,0xff,0xff,0xee,0x16,0xfe,0xd0,0x03,0xee,0x17,0xfe,
  0x68,0x40,0x48,0x98,0x48,0xa0,0x00,0xb1,0xf6,0x8d,0xfd,0xfe,0xe6,0xf6,0xd0,0x02,
  0xe6,0xf7,0xb1,0xf6,0x8d,0xfd,0xfe,0xe6,0xf6,0xd0,0x02,0xe6,0xf7,0x68,0xa8,0x68,
  0x40,0x48,0x98,0x48,0xa0,0x00,0xad,0xfd,0xfe,0x91,0xf6,0xe6,0xf6,0xd0,0x02,0xe6,
  0xf7,0xad,0xfd,0xfe,0x91,0xf6,0xe6,0xf6,0xd0,0x02,0xe6,0xf7,0x68,0xa8,0x68,0x40,
  0x02,0x16,0xf6,0xf6,0xf6,0xf6,0xd7,0xf9,0xfe,0xfe,0x00,0x00,0x00,0x00,0xfd,0xfd,
  0x00,0x11,0x22,0x41,0xb3,0xb3,0xb3,0xb3,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,
  0x2c,0xf8,0xfe,0x30,0x0f,0x2c,0xfe,0xfe,0x10,0xf6,0xa5,0xfc,0x08,0x58,0x28,0x85,
  0xfc,0x4c,0x80,0xfe,0xad,0xf9,0xfe,0x60,0x68,0x85,0xfa,0x68,0x85,0xfb,0xa0,0x00,
  0xe6,0xfa,0xd0,0x02,0xe6,0xfb,0xb1,0xfa,0x30,0x06,0x20,0xee,0xff,0x4c,0xa0,0xfe,
  0x6c,0xfa,0x00,0x8d,0xfd,0xfe,0x40,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xb7,0xfc,0x45,0xf9,0xf0,0xfc,0xb7,0xfc,0xca,0xf9,0x73,0xfa,0xff,0xfa,0x62,0xf9,
  0x6c,0xf9,0x53,0xfc,0xcc,0xfb,0x2a,0xfc,0x36,0xfc,0x8e,0xfc,0x0c,0xfc,0xb7,0xfc,
  0x7d,0xf9,0xb7,0xfc,0xb7,0xfc,0xb7,0xfc,0xb7,0xfc,0xb7,0xfc,0xb7,0xfc,0xb7,0xfc,
  0x7d,0xf9,0x7d,0xf9,0x7d,0xf9,0x36,0x80,0xff,0x4c,0xb7,0xfc,0x4c,0xb7,0xfc,0x4c,
  0xb7,0xfc,0x4c,0xb7,0xfc,0x4c,0xb7,0xfc,0x4c,0x6c,0xf9,0x4c,0x62,0xf9,0x6c,0x1c,
  0x02,0x6c,0x1a,0x02,0x6c,0x18,0x02,0x6c,0x16,0x02,0x6c,0x14,0x02,0x6c,0x12,0x02,
  0x6c,0x10,0x02,0xc9,0x0d,0xd0,0x07,0xa9,0x0a,0x20,0xee,0xff,0xa9,0x0d,0x6c,0x0e,
  0x02,0x6c,0x0c,0x02,0x6c,0x0a,0x02,0x6c,0x08,0x02,0xb3,0xfe,0x00,0xf8,0xe5,0xfc
};

unsigned char tuberom_6502_jgh[] = {
  0xa2,0x00,0xbd,0x00,0xff,0x9d,0x00,0xff,0xca,0xd0,0xf7,0xa2,0x36,0xbd,0x80,0xff,
  0x9d,0x00,0x02,0xca,0x10,0xf7,0x9a,0xa2,0xf0,0xbd,0xff,0xfd,0x9d,0xff,0xfd,0xca,
  0xd0,0xf7,0xa0,0x00,0x84,0xf8,0xa9,0xf8,0x85,0xf9,0xb1,0xf8,0x91,0xf8,0xc8,0xd0,
  0xf9,0xe6,0xf9,0xa5,0xf9,0xc9,0xfe,0xd0,0xf1,0xa2,0x10,0xbd,0x59,0xf8,0x9d,0x00,
  0x01,0xca,0x10,0xf7,0xa5,0xee,0x85,0xf6,0xa5,0xef,0x85,0xf7,0xa9,0x00,0x85,0xff,
  0x85,0xf2,0xa9,0xf8,0x85,0xf3,0x4c,0x00,0x01,0xad,0xf8,0xfe,0x58,0x4c,0x60,0xf8,
  0x20,0xa5,0xfe,0x0a,0x41,0x63,0x6f,0x72,0x6e,0x20,0x54,0x55,0x42,0x45,0x20,0x36,
  0x35,0x43,0x31,0x30,0x32,0x20,0x43,0x6f,0x2d,0x50,0x72,0x6f,0x63,0x65,0x73,0x73,
  0x6f,0x72,0x0a,0x0a,0x0d,0x00,0xea,0xa9,0x98,0x8d,0x5e,0xf8,0xa9,0xf8,0x8d,0x5f,
  0xf8,0x20,0x80,0xf9,0xc9,0x80,0xf0,0x28,0xa9,0x2a,0x20,0xee,0xff,0xa2,0x68,0xa0,
  0xf9,0xa9,0x00,0x20,0xf1,0xff,0xb0,0x0a,0xa2,0x36,0xa0,0x02,0x20,0xf7,0xff,0x4c,
  0x98,0xf8,0xa9,0x7e,0x20,0xf4,0xff,0x00,0x11,0x45,0x73,0x63,0x61,0x70,0x65,0x00,
  0xa5,0xf6,0x85,0xee,0x85,0xf2,0xa5,0xf7,0x85,0xef,0x85,0xf3,0xa0,0x07,0xb1,0xee,
  0xd8,0x18,0x65,0xee,0x85,0xfd,0xa9,0x00,0x65,0xef,0x85,0xfe,0xa0,0x00,0xb1,0xfd,
  0xd0,0x23,0xc8,0xb1,0xfd,0xc9,0x28,0xd0,0x1c,0xc8,0xb1,0xfd,0xc9,0x43,0xd0,0x15,
  0xc8,0xb1,0xfd,0xc9,0x29,0xd0,0x0e,0xa0,0x06,0xb1,0xee,0x29,0x4f,0xc9,0x40,0x90,
  0x09,0x29,0x0d,0xd0,0x28,0xa9,0x01,0x6c,0xf2,0x00,0xa9,0x50,0x8d,0x02,0x02,0xa9,
  0xf9,0x8d,0x03,0x02,0x00,0x00,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x6e,0x6f,
  0x74,0x20,0x61,0x20,0x6c,0x61,0x6e,0x67,0x75,0x61,0x67,0x65,0x00,0xa9,0x50,0x8d,
  0x02,0x02,0xa9,0xf9,0x8d,0x03,0x02,0x00,0x00,0x49,0x20,0x63,0x61,0x6e,0x6e,0x6f,
  0x74,0x20,0x72,0x75,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x64,0x65,0x00,
  0xa2,0xff,0x9a,0x20,0xe7,0xff,0xa0,0x01,0xb1,0xfd,0xf0,0x06,0x20,0xee,0xff,0xc8,
  0xd0,0xf6,0x20,0xe7,0xff,0x4c,0x98,0xf8,0x36,0x02,0xca,0x20,0xff,0x2c,0xf8,0xfe,
  0xea,0x50,0xfa,0x8d,0xf9,0xfe,0x60,0xa9,0x00,0x20,0x57,0xfc,0x20,0x80,0xf9,0x0a,
  0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x60,0xc8,0xb1,0xf8,0xc9,0x20,0xf0,0xf9,
  0x60,0xa2,0x00,0x86,0xf0,0x86,0xf1,0xb1,0xf8,0xc9,0x30,0x90,0x1f,0xc9,0x3a,0x90,
  0x0a,0x29,0xdf,0xe9,0x07,0x90,0x15,0xc9,0x40,0xb0,0x11,0x0a,0x0a,0x0a,0x0a,0xa2,
  0x03,0x0a,0x26,0xf0,0x26,0xf1,0xca,0x10,0xf8,0xc8,0xd0,0xdb,0x60,0x86,0xf8,0x84,
  0xf9,0xa0,0x00,0x2c,0xfa,0xfe,0x50,0xfb,0xb1,0xf8,0x8d,0xfb,0xfe,0xc8,0xc9,0x0d,
  0xd0,0xf1,0xa4,0xf9,0x60,0x48,0x86,0xf8,0x84,0xf9,0xa0,0x00,0x20,0x8a,0xf9,0xc8,
  0xc9,0x2a,0xf0,0xf8,0x29,0xdf,0xaa,0xb1,0xf8,0xe0,0x47,0xf0,0x5e,0xe0,0x48,0xd0,
  0x49,0xc9,0x2e,0xf0,0x2d,0x29,0xdf,0xc9,0x45,0xd0,0x3f,0xc8,0xb1,0xf8,0xc9,0x2e,
  0xf0,0x20,0x29,0xdf,0xc9,0x4c,0xd0,0x32,0xc8,0xb1,0xf8,0xc9,0x2e,0xf0,0x13,0x29,
  0xdf,0xc9,0x50,0xd0,0x25,0xc8,0xb1,0xf8,0x29,0xdf,0xc9,0x41,0x90,0x04,0xc9,0x5b,
  0x90,0x18,0x20,0xa5,0xfe,0x0a,0x0d,0x36,0x35,0x43,0x31,0x30,0x32,0x20,0x54,0x55,
  0x42,0x45,0x20,0x31,0x2e,0x31,0x30,0x0a,0x0d,0xea,0xa9,0x02,0x20,0x57,0xfc,0x20,
  0xc1,0xf9,0x20,0x80,0xf9,0xc9,0x80,0xf0,0x20,0x68,0x60,0x29,0xdf,0xc9,0x4f,0xd0,
  0xe9,0x20,0x89,0xf9,0x20,0x91,0xf9,0x20,0x8a,0xf9,0xc9,0x0d,0xd0,0xdc,0x8a,0xf0,
  0x08,0xa5,0xf0,0x85,0xf6,0xa5,0xf1,0x85,0xf7,0xa5,0xef,0x48,0xa5,0xee,0x48,0x20,
  0xc0,0xf8,0x68,0x85,0xee,0x85,0xf2,0x68,0x85,0xef,0x85,0xf3,0x68,0x60,0xf0,0xc2,
  0xc9,0x80,0xb0,0x25,0x48,0xa9,0x04,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,0x2c,
  0xfa,0xfe,0x50,0xfb,0x8e,0xfb,0xfe,0x68,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,
  0x2c,0xfa,0xfe,0x10,0xfb,0xae,0xfb,0xfe,0x60,0xc9,0x82,0xf0,0x5a,0xc9,0x83,0xf0,
  0x51,0xc9,0x84,0xf0,0x48,0x48,0xa9,0x06,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,
  0x2c,0xfa,0xfe,0x50,0xfb,0x8e,0xfb,0xfe,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,
  0x68,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,0xc9,0x8e,0xf0,0xa1,0xc9,0x9d,0xf0,
  0x1b,0x48,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x0a,0x68,0x2c,0xfa,0xfe,0x10,
  0xfb,0xac,0xfb,0xfe,0x2c,0xfa,0xfe,0x10,0xfb,0xae,0xfb,0xfe,0x60,0xa6,0xf2,0xa4,
  0xf3,0x60,0xa2,0x00,0xa0,0x08,0x60,0xa2,0x00,0xa0,0x00,0x60,0x86,0xf8,0x84,0xf9,
  0xa8,0xf0,0x71,0x48,0xa0,0x08,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,0x2c,0xfa,
  0xfe,0x50,0xfb,0x8d,0xfb,0xfe,0xaa,0x10,0x08,0xa0,0x00,0xb1,0xf8,0xa8,0x4c,0x3a,
  0xfb,0xbc,0xc9,0xfc,0xe0,0x15,0x90,0x02,0xa0,0x10,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,
  0xfb,0xfe,0x88,0x30,0x0d,0x2c,0xfa,0xfe,0x50,0xfb,0xb1,0xf8,0x8d,0xfb,0xfe,0x88,
  0x10,0xf3,0x8a,0x10,0x08,0xa0,0x01,0xb1,0xf8,0xa8,0x4c,0x66,0xfb,0xbc,0xdd,0xfc,
  0xe0,0x15,0x90,0x02,0xa0,0x10,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,0x88,0x30,
  0x0d,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x91,0xf8,0x88,0x10,0xf3,0xa4,0xf9,
  0xa6,0xf8,0x68,0x60,0xa9,0x0a,0x20,0x57,0xfc,0xa0,0x04,0x2c,0xfa,0xfe,0x50,0xfb,
  0xb1,0xf8,0x8d,0xfb,0xfe,0x88,0xc0,0x01,0xd0,0xf1,0xa9,0x07,0x20,0x57,0xfc,0xb1,
  0xf8,0x48,0x88,0x2c,0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,0xb1,0xf8,0x48,0xa2,0xff,
  0x20,0x80,0xf9,0xc9,0x80,0xb0,0x1d,0x68,0x85,0xf8,0x68,0x85,0xf9,0xa0,0x00,0x2c,
  0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0x91,0xf8,0xc8,0xc9,0x0d,0xd0,0xf1,0xa9,0x00,
  0x88,0x18,0xe8,0x60,0x68,0x68,0xa9,0x00,0x60,0x48,0xa9,0x0c,0x20,0x57,0xfc,0x2c,
  0xfa,0xfe,0x50,0xfb,0x8c,0xfb,0xfe,0xb5,0x03,0x20,0x57,0xfc,0xb5,0x02,0x20,0x57,
  0xfc,0xb5,0x01,0x20,0x57,0xfc,0xb5,0x00,0x20,0x57,0xfc,0x68,0x20,0x57,0xfc,0x20,
  0x80,0xf9,0x48,0x20,0x80,0xf9,0x95,0x03,0x20,0x80,0xf9,0x95,0x02,0x20,0x80,0xf9,
  0x95,0x01,0x20,0x80,0xf9,0x95,0x00,0x68,0x60,0x48,0xa9,0x12,0x20,0x57,0xfc,0x68,
  0x20,0x57,0xfc,0xc9,0x00,0xd0,0x0a,0x48,0x98,0x20,0x57,0xfc,0x20,0x80,0xf9,0x68,
  0x60,0x20,0xbd,0xf9,0x4c,0x80,0xf9,0xa9,0x0e,0x20,0x57,0xfc,0x98,0x20,0x57,0xfc,
  0x4c,0x7c,0xf9,0x48,0xa9,0x10,0x20,0x57,0xfc,0x98,0x20,0x57,0xfc,0x68,0x20,0x57,
  0xfc,0x48,0x20,0x80,0xf9,0x68,0x60,0x2c,0xfa,0xfe,0x50,0xfb,0x8d,0xfb,0xfe,0x60,
  0x84,0xfb,0x86,0xfa,0x48,0xa9,0x14,0x20,0x57,0xfc,0xa0,0x11,0xb1,0xfa,0x20,0x57,
  0xfc,0x88,0xc0,0x01,0xd0,0xf6,0x88,0xb1,0xfa,0xaa,0xc8,0xb1,0xfa,0xa8,0x20,0xbd,
  0xf9,0x68,0x20,0x57,0xfc,0x20,0x80,0xf9,0x48,0xa0,0x11,0x20,0x80,0xf9,0x91,0xfa,
  0x88,0xc0,0x01,0xd0,0xf6,0xa4,0xfb,0xa6,0xfa,0x68,0x60,0x84,0xfb,0x86,0xfa,0x48,
  0xa9,0x16,0x20,0x57,0xfc,0xa0,0x0c,0xb1,0xfa,0x20,0x57,0xfc,0x88,0x10,0xf8,0x68,
  0x20,0x57,0xfc,0xa0,0x0c,0x20,0x80,0xf9,0x91,0xfa,0x88,0x10,0xf8,0xa4,0xfb,0xa6,
  0xfa,0x4c,0x7c,0xf9,0x00,0xff,0x42,0x61,0x64,0x00,0x00,0x05,0x00,0x05,0x04,0x05,
  0x08,0x0e,0x04,0x01,0x01,0x05,0x00,0x01,0x20,0x10,0x0d,0x00,0x04,0x80,0x05,0x00,
  0x05,0x00,0x05,0x00,0x00,0x00,0x05,0x09,0x05,0x00,0x08,0x18,0x00,0x01,0x0d,0x80,
  0x04,0x80,0x85,0xfc,0x68,0x48,0x29,0x10,0xd0,0x10,0x6c,0x04,0x02,0x2c,0xfe,0xfe,
  0x30,0x4a,0x2c,0xf8,0xfe,0x30,0x1e,0x6c,0x06,0x02,0x8a,0x48,0xba,0xbd,0x03,0x01,
  0xd8,0x38,0xe9,0x01,0x85,0xfd,0xbd,0x04,0x01,0xe9,0x00,0x85,0xfe,0x68,0xaa,0xa5,
  0xfc,0x58,0x6c,0x02,0x02,0xad,0xf9,0xfe,0x30,0x1c,0x98,0x48,0x8a,0x48,0x20,0x8d,
  0xfe,0xa8,0x20,0x8d,0xfe,0xaa,0x20,0x8d,0xfe,0x20,0x43,0xfd,0x68,0xaa,0x68,0xa8,
  0xa5,0xfc,0x40,0x6c,0x20,0x02,0x0a,0x85,0xff,0xa5,0xfc,0x40,0xad,0xff,0xfe,0x10,
  0x21,0x58,0x2c,0xfa,0xfe,0x10,0xfb,0xad,0xfb,0xfe,0xa9,0x00,0x8d,0x36,0x02,0xa8,
  0x20,0x80,0xf9,0x8d,0x37,0x02,0xc8,0x20,0x80,0xf9,0x99,0x37,0x02,0xd0,0xf7,0x4c,
  0x36,0x02,0x8d,0xfa,0xff,0x98,0x48,0xac,0xfa,0xff,0xb9,0x7d,0xfe,0x8d,0xfa,0xff,
  0xb9,0x85,0xfe,0x8d,0xfb,0xff,0xb9,0x6d,0xfe,0x85,0xf4,0xb9,0x75,0xfe,0x85,0xf5,
  0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,0xc0,0x05,0xf0,0x58,0x98,0x48,0xa0,0x01,
  0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,
  0x2c,0xfe,0xfe,0x10,0xfb,0xad,0xff,0xfe,0x91,0xf4,0x88,0x2c,0xfe,0xfe,0x10,0xfb,
  0xad,0xff,0xfe,0x91,0xf4,0x2c,0xfd,0xfe,0x2c,0xfd,0xfe,0x2c,0xfe,0xfe,0x10,0xfb,
  0xad,0xff,0xfe,0x68,0xc9,0x06,0x90,0x1c,0xd0,0x1f,0xa0,0x00,0xad,0xfc,0xfe,0x29,
  0x80,0x10,0xf9,0xb9,0xff,0xff,0x8d,0xfd,0xfe,0xc8,0xd0,0xf0,0x2c,0xfc,0xfe,0x10,
  0xfb,0x8d,0xfd,0xfe,0x68,0xa8,0xa5,0xfc,0x40,0xa0,0x00,0xad,0xfc,0xfe,0x29,0x80,
  0x10,0xf9,0xad,0xfd,0xfe,0x99,0xff,0xff,0xc8,0xd0,0xf0,0xf0,0xe7,0x48,0xad,0xff,
  0xff,0x8d,0xfd,0xfe,0xee,0x0f,0xfe,0xd0,0x03,0xee,0x10,0xfe,0x68,0x40,0x48,0xad,
  0xfd,0xfe,0x8d,0xff,0xff,0xee,0x23,0xfe,0xd0,0x03,0xee,0x24,0xfe,0x68,0x40,0x48,
  0x98,0x48,0xa0,0x00,0xb1,0xf6,0x8d,0xfd,0xfe,0xe6,0xf6,0xd0,0x02,0xe6,0xf7,0xb1,
  0xf6,0x8d,0xfd,0xfe,0xe6,0xf6,0xd0,0x02,0xe6,0xf7,0x68,0xa8,0x68,0x40,0x48,0x98,
  0x48,0xa0,0x00,0xad,0xfd,0xfe,0x91,0xf6,0xe6,0xf6,0xd0,0x02,0xe6,0xf7,0xad,0xfd,
  0xfe,0x91,0xf6,0xe6,0xf6,0xd0,0x02,0xe6,0xf7,0x68,0xa8,0x68,0x40,0x0f,0x23,0xf6,
  0xf6,0xf6,0xf6,0xe4,0x06,0xfe,0xfe,0x00,0x00,0x00,0x00,0xfd,0xfe,0x0d,0x1e,0x2f,
  0x4e,0xc0,0xc0,0xc0,0xc0,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0x2c,0xf8,0xfe,
  0x30,0x0f,0x2c,0xfe,0xfe,0x10,0xf6,0xa5,0xfc,0x08,0x58,0x28,0x85,0xfc,0x4c,0x8d,
  0xfe,0xad,0xf9,0xfe,0x60,0x68,0x85,0xfa,0x68,0x85,0xfb,0xa0,0x00,0xe6,0xfa,0xd0,
  0x02,0xe6,0xfb,0xb1,0xfa,0x30,0x06,0x20,0xee,0xff,0x4c,0xad,0xfe,0x6c,0xfa,0x00,
  0x8d,0xfd,0xfe,0x40,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xc4,0xfc,0x50,0xf9,0xfd,0xfc,0xc4,0xfc,0xd5,0xf9,0x80,0xfa,0x0c,0xfb,0x6d,0xf9,
  0x77,0xf9,0x60,0xfc,0xd9,0xfb,0x37,0xfc,0x43,0xfc,0x9b,0xfc,0x19,0xfc,0xc4,0xfc,
  0x88,0xf9,0xc4,0xfc,0xc4,0xfc,0xc4,0xfc,0xc4,0xfc,0xc4,0xfc,0xc4,0xfc,0xc4,0xfc,
  0x88,0xf9,0x88,0xf9,0x88,0xf9,0x36,0x80,0xff,0x4c,0xc4,0xfc,0x4c,0xc4,0xfc,0x4c,
  0xc4,0xfc,0x4c,0xc4,0xfc,0x4c,0xc4,0xfc,0x4c,0x77,0xf9,0x4c,0x6d,0xf9,0x6c,0x1c,
  0x02,0x6c,0x1a,0x02,0x6c,0x18,0x02,0x6c,0x16,0x02,0x6c,0x14,0x02,0x6c,0x12,0x02,
  0x6c,0x10,0x02,0xc9,0x0d,0xd0,0x07,0xa9,0x0a,0x20,0xee,0xff,0xa9,0x0d,0x6c,0x0e,
  0x02,0x6c,0x0c,0x02,0x6c,0x0a,0x02,0x6c,0x08,0x02,0x0d,0xfe,0x00,0xf8,0xf2,0xfc
};
