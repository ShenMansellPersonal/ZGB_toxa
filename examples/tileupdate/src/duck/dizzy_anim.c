#pragma bank 255

#include <stdint.h>
#include <gbdk/platform.h>

BANKREF(dizzy_anim)

const uint8_t dizzy0_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0x93,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x63,0x63,0xf3,0xf3,0xf7,0xf7,0x77,0x77,0x07,0x07,0x07,0x07,0x03,0x03,
0xff,0x11,0xff,0x55,0xff,0x11,0xff,0xff,0xff,0xff,0xff,0x7d,0xff,0x83,0xff,0xef,
0x80,0x80,0x8c,0x8c,0x9e,0x9e,0xde,0xde,0xdc,0xdc,0xc0,0xc0,0xc0,0xc0,0x80,0x80,
0x03,0x03,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x02,0x03,0x03,0x00,0x00,
0xff,0xff,0xfe,0xfe,0x00,0x00,0xc7,0xc7,0xc7,0x45,0xef,0xeb,0xef,0xef,0x00,0x00,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
};
const uint8_t dizzy1_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0x93,0xff,0x11,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x03,0x03,0x03,0x03,0x07,0x07,0x37,0x37,0xf7,0xf7,0xf7,0xf7,0xf3,0xf3,0x03,0x03,
0xff,0x55,0xff,0x11,0xff,0xff,0xff,0xff,0xff,0x7d,0xff,0x83,0xff,0xef,0xff,0xff,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xd8,0xd8,0xde,0xde,0xde,0xde,0x9e,0x9e,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x02,0x03,0x03,0x00,0x00,
0xfe,0xfe,0x00,0x00,0x00,0x00,0xc7,0xc7,0xc7,0x45,0xef,0xeb,0xef,0xef,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
};
const uint8_t dizzy2_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x02,0x07,0x06,
0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xf8,0xfc,0xfc,0xfe,0xfe,0xfe,0x7e,0xff,0x3f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x06,0x07,0x06,0x0f,0x0f,0x0f,0x0f,0x0f,0x0e,0x07,0x00,0x07,0x06,0x07,0x07,
0xff,0xbf,0xff,0x3f,0xff,0x9f,0xff,0x6f,0xff,0xf7,0xff,0xf7,0xff,0xf7,0xff,0x6f,
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x00,0x00,
0xfc,0x9c,0x00,0x00,0x00,0x00,0x7c,0x6c,0xfc,0x9c,0xfc,0x7c,0xfc,0x7c,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy3_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x0f,0x1f,0x1f,0x3f,0x3f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xf0,0xf0,0xfc,0xfc,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3f,0x3f,0x3f,0x3f,0x3f,0x30,0x3f,0x32,0x1f,0x18,0x1f,0x1f,0x0f,0x0f,0x0f,0x0e,
0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0x8f,0xff,0x77,0xff,0x7b,0xfe,0x7a,0xfc,0xb4,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,
0x07,0x04,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xf8,0xc8,0xe1,0xe0,0x03,0x02,0x03,0x02,0x03,0x03,0x07,0x07,0x02,0x02,0x00,0x00,
0xe0,0xe0,0xf0,0x70,0xe0,0xe0,0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy4_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0x7f,0x7f,
0x00,0x00,0x00,0x00,0xe0,0xe0,0xfc,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xc6,0xfe,0xba,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x78,0x78,0x78,0x78,0x38,
0x7f,0x7f,0x7f,0x78,0x7f,0x72,0x3f,0x30,0x1f,0x1f,0x07,0x07,0x00,0x00,0x00,0x00,
0xfe,0x7c,0xfe,0x7c,0xfe,0xaa,0xfe,0xc6,0xfc,0xec,0xfc,0xec,0xe0,0xe0,0x00,0x00,
0x78,0x58,0x78,0x58,0x38,0x20,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy5_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x07,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,
0x00,0x00,0x00,0x00,0x01,0x01,0x07,0x07,0x0f,0x0f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,
0x07,0x07,0x00,0x00,0xf0,0xf0,0xf8,0xc8,0xfc,0xb0,0xfc,0x7c,0xff,0x7b,0xff,0x7b,
0xe0,0xc0,0xf0,0xb0,0x78,0x38,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3f,0x3f,0x3f,0x3f,0x3f,0x3e,0x3f,0x3e,0x1f,0x1e,0x1f,0x1f,0x0f,0x0f,0x00,0x00,
0xff,0xb1,0xfe,0x0c,0xfe,0x7e,0xfc,0x3c,0xf8,0x38,0xe0,0xe0,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy6_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xf6,0xfe,0xf6,0xfc,0xcc,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x07,0x07,0x07,0x07,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x00,0x00,0xfc,0xcc,0xff,0xb7,0xff,0x7b,0xff,0x70,0xff,0x7b,0xff,0xb7,0xff,0xcf,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,
0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xe3,0xff,0xeb,0xff,0xe3,0xfe,0xf2,0xfe,0xfe,0xfc,0xfc,0xf8,0xf8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy7_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x07,0x07,0x0f,0x0b,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1f,0x1d,0x3f,0x3b,0x3c,0x3c,0x1c,0x1c,0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x03,
0x00,0x00,0x3c,0x3c,0x7f,0x79,0xff,0xcb,0xff,0xb3,0xff,0x7d,0xff,0x7b,0xff,0xb8,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,0xe0,0xe0,0xe0,0x60,
0x07,0x07,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xc5,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x3f,0x06,0x06,0x00,0x00,
0xf0,0x30,0xf0,0x30,0xf0,0xf0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy8_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x61,0x61,0x71,0x11,0x79,0x68,
0x00,0x00,0x00,0x00,0x1c,0x1c,0xff,0xdf,0xff,0xdf,0xff,0x8c,0xff,0x75,0xff,0xf8,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xe0,0xe0,0xf0,0x30,0xf8,0x38,0xf8,0x78,
0x79,0x68,0x79,0x71,0x79,0x79,0x79,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xfb,0xff,0x77,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0x3c,0x3c,0x00,0x00,
0xf8,0xf8,0xf8,0xf8,0xf8,0xf8,0xf0,0xf0,0xe0,0xe0,0x80,0x80,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy9_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x1f,0x7f,0x7f,0xff,0xe7,0xff,0xc7,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0xc0,0xc0,
0x03,0x03,0x03,0x03,0x03,0x01,0x07,0x04,0x07,0x06,0x03,0x02,0x03,0x02,0x01,0x01,
0xff,0xd7,0xff,0xc7,0xff,0x8f,0xff,0x77,0xff,0xf7,0xff,0xf7,0xff,0x77,0xff,0x8f,
0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x1f,0x1d,0x1f,0x1a,0x07,0x07,0x03,0x03,0x01,0x01,0x00,0x00,
0x7f,0x7f,0x3c,0x3c,0x00,0x00,0xc0,0x40,0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy10_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0x7f,0x7e,0xff,0xfc,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0xc0,0x40,0xe0,0x60,
0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xfd,0xff,0xfc,0xff,0xf9,0xff,0xf6,0xff,0xef,0xff,0xef,0xff,0xef,0xff,0xf6,
0xe0,0x60,0xe0,0x60,0xf0,0xf0,0xf0,0xf0,0xf0,0x70,0xe0,0x00,0xe0,0x60,0xe0,0xe0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3f,0x39,0x00,0x00,0x00,0x00,0x3e,0x36,0x3f,0x39,0x3f,0x3e,0x3f,0x3e,0x00,0x00,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0x00,0x00,
};
const uint8_t dizzy11_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x0f,0x0f,0x3f,0x3f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xf0,0xf8,0xf8,0xfc,0xfc,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,
0x7f,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xf1,0xff,0xee,0xff,0xde,0x7f,0x5e,0x3f,0x2d,
0xfc,0xfc,0xfc,0xfc,0xfc,0x0c,0xfc,0x4c,0xf8,0x18,0xf8,0xf8,0xf0,0xf0,0x70,0x70,
0x07,0x07,0x0f,0x0e,0x07,0x07,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x13,0x13,0x07,0x07,0xc0,0x40,0xc0,0x40,0xc0,0xc0,0xe0,0xe0,0x40,0x40,0x00,0x00,
0x20,0x20,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy12_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x1e,0x1e,0x1e,0x1e,0x1c,
0x00,0x00,0x00,0x00,0x07,0x07,0x3f,0x3f,0x3f,0x3f,0x7f,0x7f,0x7f,0x63,0x7f,0x5d,
0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xe0,0xf8,0xf8,0xfc,0xfc,0xfe,0xfe,0xfe,0xfe,
0x1e,0x1a,0x1e,0x1a,0x1c,0x04,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
0x3f,0x3e,0x3f,0x3e,0x7f,0x55,0x7f,0x63,0x3f,0x37,0x3f,0x37,0x07,0x07,0x00,0x00,
0xfe,0xfe,0xfe,0x1e,0xfe,0x4e,0xfc,0x0c,0xf8,0xf8,0xe0,0xe0,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy13_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0xe0,0xe0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x03,0x0f,0x0d,0x1c,0x1c,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xe0,0xe0,0x00,0x00,0x0f,0x0f,0x1f,0x13,0x3f,0x0d,0x7f,0x3e,0xff,0xde,0xff,0xde,
0x00,0x00,0x00,0x00,0x80,0x80,0xe0,0xe0,0xf0,0xf0,0xf8,0xf8,0xf8,0xf8,0xf8,0xf8,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0x8d,0x7f,0x30,0x7f,0x7e,0x3f,0x3c,0x1f,0x1c,0x07,0x07,0x01,0x01,0x00,0x00,
0xfc,0xfc,0xfc,0xfc,0xfc,0x7c,0xfc,0x7c,0xf8,0x78,0xf8,0xf8,0xf0,0xf0,0x00,0x00,
};
const uint8_t dizzy14_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x6f,0x7f,0x6f,0x3f,0x33,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x33,0x33,0xff,0xed,0xff,0xde,0xff,0x0e,0xff,0xde,0xff,0xed,0xff,0xf3,
0x00,0x00,0x80,0x80,0xe0,0xe0,0xe0,0xe0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xc7,0xff,0xd7,0xff,0xc7,0x7f,0x4f,0x7f,0x7f,0x3f,0x3f,0x1f,0x1f,0x00,0x00,
0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy15_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0xe0,0xe0,0xf0,0xd0,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,0x07,0x07,0x07,0x06,
0x00,0x00,0x3c,0x3c,0xfe,0x9e,0xff,0xd3,0xff,0xcd,0xff,0xbe,0xff,0xde,0xff,0x1d,
0xf8,0xb8,0xfc,0xdc,0x3c,0x3c,0x38,0x38,0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,
0x0f,0x0c,0x0f,0x0c,0x0f,0x0f,0x07,0x07,0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,
0xff,0xa3,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xfc,0x60,0x60,0x00,0x00,
0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy16_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x07,0x07,0x0f,0x0c,0x1f,0x1c,0x1f,0x1e,
0x00,0x00,0x00,0x00,0x38,0x38,0xff,0xfb,0xff,0xfb,0xff,0x31,0xff,0xae,0xff,0x1f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x86,0x86,0x8e,0x88,0x9e,0x16,
0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x0f,0x0f,0x07,0x07,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xdf,0xff,0xee,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0x3c,0x3c,0x00,0x00,
0x9e,0x16,0x9e,0x8e,0x9e,0x9e,0x9e,0x9e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy17_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xf8,0xfe,0xfe,0xff,0xe7,0xff,0xe3,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,
0xff,0xeb,0xff,0xe3,0xff,0xf1,0xff,0xee,0xff,0xef,0xff,0xef,0xff,0xee,0xff,0xf1,
0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0xe0,0x20,0xe0,0x60,0xc0,0x40,0xc0,0x40,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfe,0xfe,0x3c,0x3c,0x00,0x00,0x03,0x02,0x07,0x07,0x03,0x03,0x03,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0xf8,0xb8,0xf8,0x58,0xe0,0xe0,0xc0,0xc0,0x80,0x80,0x00,0x00,
};
const uint8_t dizzy18_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x07,0x07,0x07,0x07,0x27,0x27,0x77,0x77,0xf7,0xf7,0xe3,0xe3,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x93,0xff,0x11,0xff,0x55,0xff,0xff,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xc8,0xc8,0xdc,0xdc,0xde,0xde,0x8e,0x8e,
0x60,0x60,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x02,0x03,0x03,0x01,0x01,0x00,0x00,
0xfe,0xfe,0x00,0x00,0xc7,0xc7,0xc7,0x45,0xef,0xeb,0xef,0xef,0xc7,0xc7,0x00,0x00,
0x0c,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy19_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,0x38,0x38,0xfe,0xfe,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
0x27,0x27,0x77,0x77,0xf7,0xf7,0xe3,0xe3,0x63,0x63,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x93,0x7c,0x7c,0x00,0x00,
0xc8,0xc8,0xdc,0xdc,0xde,0xde,0x8e,0x8e,0x8c,0x8c,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy20_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc7,0xc7,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x00,0x00,0x03,0x03,0x07,0x07,0x37,0x37,
0xef,0xef,0xef,0xef,0xc7,0xc7,0x01,0x01,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,
0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd8,0xd8,
0xf7,0xf7,0xe7,0xe7,0xe7,0xe7,0xc3,0xc3,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7c,0x7c,0x00,0x00,
0xde,0xde,0xce,0xce,0xce,0xce,0x86,0x86,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy21_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xef,0xef,0xef,0xef,0xc7,0xc7,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
0x01,0x01,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x07,0x07,0xe7,0xe7,0xf7,0xf7,
0xc7,0xc7,0x00,0x00,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,0xce,0xce,0xde,0xde,
0xf7,0xf7,0xf3,0xf3,0xc3,0xc3,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0x38,0x38,0x00,0x00,
0xde,0xde,0x9e,0x9e,0x86,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy22_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc7,0xc7,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x00,0x00,0x03,0x03,0x07,0x07,0x07,0x07,
0xef,0xef,0xef,0xef,0xc7,0xc7,0xc7,0xc7,0x38,0x38,0xff,0xff,0xff,0xff,0xff,0xff,
0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0xc0,0xc0,
0xc7,0xc7,0xf7,0xf7,0xf7,0xf7,0x73,0x73,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7c,0x7c,0x00,0x00,
0xc6,0xc6,0xde,0xde,0xde,0xde,0x9c,0x9c,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy23_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0xc7,0xc7,0xef,0xef,0xef,0xef,0xff,0xd7,0xff,0xd7,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0xc7,0xc6,0xe7,0xe7,0xf7,0xf7,0x73,0x73,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xd6,0xff,0x39,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7c,0x7c,0x00,0x00,
0xc6,0xc6,0xce,0xce,0xde,0xde,0x9c,0x9c,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy24_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0xc7,0xc7,0xe7,0xe7,0xf7,0xf7,0x77,0x77,
0x7c,0x7c,0xff,0x93,0xff,0x11,0xff,0x55,0xff,0xff,0xff,0x7d,0xff,0x83,0xff,0xef,
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc6,0xc6,0xce,0xce,0xde,0xde,0xdc,0xdc,
0x07,0x07,0x03,0x02,0x01,0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0x38,0xff,0xd7,0xef,0xef,0xef,0xef,0xef,0xef,0xc6,0xc6,0x00,0x00,
0xc0,0xc0,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy25_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0x9f,0xff,0x8f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,
0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x01,0x01,0x01,0x01,
0xff,0xaf,0xff,0x8f,0xff,0xfc,0xff,0xfb,0xff,0xd7,0xff,0x3b,0xff,0xfd,0xfe,0xfe,
0xc0,0xc0,0xc0,0xc0,0xe0,0x60,0xe0,0xa0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0x7f,0x00,0x00,0x11,0x11,0xb9,0xb9,0xff,0xf7,0xff,0xf7,0x7f,0x77,0x00,0x00,
0x00,0x00,0x00,0x00,0xc0,0xc0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy26_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0x9f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x09,0x09,0x1b,0x1b,0x3b,0x3b,0x3b,0x3b,0x39,0x38,0x01,0x01,
0xff,0x8f,0xff,0xaf,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0x3f,0xff,0xff,
0xc0,0xc0,0xc0,0xc0,0xc8,0xc8,0xdc,0xdc,0xde,0xde,0xde,0xde,0xce,0xce,0xc0,0xc0,
0x01,0x01,0x00,0x00,0x01,0x01,0x07,0x07,0x0f,0x0f,0x07,0x07,0x01,0x01,0x00,0x00,
0xff,0xff,0x7f,0x7f,0x80,0x80,0xc0,0xc0,0xe0,0xe0,0xc0,0xc0,0x80,0x80,0x00,0x00,
0xc0,0xc0,0x30,0x30,0x78,0x78,0x3c,0x3c,0x78,0x78,0xf0,0xf0,0x60,0x60,0x00,0x00,
};
const uint8_t dizzy27_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0x9f,0xff,0x8f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,
0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x01,0x01,0x01,0x01,
0xff,0xaf,0xff,0x8f,0xff,0xe7,0xff,0xdb,0xff,0xbd,0xff,0x3d,0xff,0xbd,0xff,0xdb,
0xc0,0xc0,0xc0,0xc0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x67,0x67,0x00,0x00,0x04,0x04,0x1f,0x1b,0x7f,0x67,0xff,0xdf,0xff,0xdf,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy28_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0x9f,0xff,0x8f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,
0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x02,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0xff,0xaf,0xff,0x8f,0xff,0x1f,0xff,0xef,0xff,0xf7,0xff,0xef,0xff,0xdf,0xff,0xbf,
0xc0,0xc0,0xc0,0xc0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0x7f,0x00,0x00,0x11,0x11,0xb9,0xb9,0xff,0xfb,0xff,0xf7,0x7f,0x77,0x00,0x00,
0x00,0x00,0x00,0x00,0xc0,0xc0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy29_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0x9f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
0x01,0x01,0x01,0x01,0x0b,0x0b,0x1f,0x1d,0x3f,0x3d,0x3b,0x3b,0x39,0x38,0x01,0x01,
0xff,0x8f,0xff,0xaf,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0x3f,0xff,0xff,
0xc0,0xc0,0xc0,0xc0,0xe8,0xe8,0xec,0xec,0xee,0xee,0xee,0xee,0xce,0xce,0xc0,0xc0,
0x01,0x01,0x00,0x00,0x01,0x01,0x07,0x07,0x0f,0x0f,0x07,0x07,0x01,0x01,0x00,0x00,
0xff,0xff,0x7f,0x7f,0x80,0x80,0xc0,0xc0,0xe0,0xe0,0xc0,0xc0,0x80,0x80,0x00,0x00,
0xc0,0xc0,0x30,0x30,0x78,0x78,0x3c,0x3c,0x78,0x78,0xf0,0xf0,0x60,0x60,0x00,0x00,
};
const uint8_t dizzy30_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0x3f,0xff,0x1f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x03,0x03,0x03,0x03,0x07,0x06,0x07,0x05,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,
0xff,0x5f,0xff,0x1f,0xff,0x3f,0xff,0xdf,0xff,0xef,0xff,0xdf,0xff,0xbf,0xff,0x7f,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0xfe,0xfe,0x00,0x00,0x23,0x23,0x73,0x73,0xff,0xf7,0xff,0xef,0xfe,0xee,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy31_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0x9f,0xff,0x8f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,
0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x01,0x01,0x01,0x01,
0xff,0xaf,0xff,0x8f,0xff,0xe7,0xff,0xdb,0xff,0xbd,0xff,0x3d,0xff,0xbd,0xff,0xdb,
0xc0,0xc0,0xc0,0xc0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7f,0x67,0x00,0x00,0x04,0x04,0x1f,0x1b,0x7f,0x67,0xff,0xdf,0xff,0xdf,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy32_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0xf9,0xff,0xf1,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x03,0x03,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,
0xff,0xf5,0xff,0xf1,0xff,0xe7,0xff,0xdb,0xfd,0xbd,0xfc,0xbc,0xfd,0xbd,0xff,0xdb,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x00,0x00,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xe6,0xe6,0x00,0x00,0x20,0x20,0xf8,0xd8,0xfe,0xe6,0xff,0xfb,0xff,0xfb,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy33_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x3e,0x7f,0x7f,0xff,0xff,0xff,0xfc,0xff,0xf8,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xc0,0xc0,
0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x01,
0xff,0xfa,0xff,0xf8,0xff,0xfc,0xff,0xfb,0xff,0xf7,0xff,0xfb,0xff,0xfd,0xff,0xfe,
0xc0,0xc0,0xc0,0xc0,0xe0,0x60,0xe0,0xa0,0xc0,0xc0,0xc0,0xc0,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
0x7f,0x7f,0x00,0x00,0xc4,0xc4,0xce,0xce,0xff,0xef,0xff,0xf7,0x7f,0x77,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy34_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0xf9,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x17,0x17,0x37,0x37,0x77,0x77,0x77,0x77,0x73,0x73,0x03,0x03,
0xff,0xf1,0xff,0xf5,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xfc,0xff,0xff,
0x80,0x80,0x80,0x80,0xd0,0xd0,0xf8,0xb8,0xfc,0xbc,0xdc,0xdc,0x9c,0x1c,0x80,0x80,
0x03,0x03,0x0c,0x0c,0x1e,0x1e,0x3c,0x3c,0x1e,0x1e,0x0f,0x0f,0x06,0x06,0x00,0x00,
0xff,0xff,0xfe,0xfe,0x01,0x01,0x03,0x03,0x07,0x07,0x03,0x03,0x01,0x01,0x00,0x00,
0x80,0x80,0x00,0x00,0x80,0x80,0xe0,0xe0,0xf0,0xf0,0xe0,0xe0,0x80,0x80,0x00,0x00,
};
const uint8_t dizzy35_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0xf9,0xff,0xf1,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x03,0x03,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,
0xff,0xf5,0xff,0xf1,0xff,0xf8,0xff,0xf7,0xff,0xef,0xff,0xf7,0xff,0xfb,0xff,0xfd,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0x40,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0x03,0x07,0x07,0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,
0xfe,0xfe,0x00,0x00,0x88,0x88,0x9d,0x9d,0xff,0xdf,0xff,0xef,0xfe,0xee,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy36_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0xf9,0xff,0xf1,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x03,0x03,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,
0xff,0xf5,0xff,0xf1,0xff,0xe7,0xff,0xdb,0xff,0xbd,0xff,0xbc,0xff,0xbd,0xff,0xdb,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x00,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfe,0xe6,0x00,0x00,0x20,0x20,0xf8,0xd8,0xfe,0xe6,0xff,0xfb,0xff,0xfb,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy37_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0xf9,0xff,0xf1,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0x03,0x03,0x03,0x03,0x07,0x06,0x07,0x05,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,
0xff,0xf5,0xff,0xf1,0xff,0x3f,0xff,0xdf,0xff,0xeb,0xff,0xdc,0xff,0xbf,0xff,0x7f,
0x80,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x00,0x80,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x03,0x03,0x07,0x07,0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,
0xfe,0xfe,0x00,0x00,0x88,0x88,0x9d,0x9d,0xff,0xef,0xff,0xef,0xfe,0xee,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t dizzy38_tiles[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x7c,0xfe,0xfe,0xff,0xff,0xff,0xf9,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x13,0x13,0x3b,0x3b,0x7b,0x7b,0x7b,0x7b,0x73,0x73,0x03,0x03,
0xff,0xf1,0xff,0xf5,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xfc,0xff,0xff,
0x80,0x80,0x80,0x80,0x90,0x90,0xd8,0xd8,0xdc,0xdc,0xdc,0xdc,0x9c,0x1c,0x80,0x80,
0x03,0x03,0x0c,0x0c,0x1e,0x1e,0x3c,0x3c,0x1e,0x1e,0x0f,0x0f,0x06,0x06,0x00,0x00,
0xff,0xff,0xfe,0xfe,0x01,0x01,0x03,0x03,0x07,0x07,0x03,0x03,0x01,0x01,0x00,0x00,
0x80,0x80,0x00,0x00,0x80,0x80,0xe0,0xe0,0xf0,0xf0,0xe0,0xe0,0x80,0x80,0x00,0x00,
};
const uint8_t * const dizzy_anim[] = {
dizzy0_tiles,dizzy1_tiles,dizzy0_tiles,dizzy1_tiles,dizzy0_tiles,dizzy1_tiles,dizzy0_tiles,dizzy1_tiles,dizzy2_tiles,dizzy3_tiles,dizzy4_tiles,dizzy5_tiles,dizzy6_tiles,dizzy7_tiles,dizzy8_tiles,dizzy9_tiles,dizzy10_tiles,dizzy11_tiles,dizzy12_tiles,dizzy13_tiles,dizzy14_tiles,dizzy15_tiles,dizzy16_tiles,dizzy17_tiles,dizzy0_tiles,dizzy18_tiles,dizzy19_tiles,dizzy20_tiles,dizzy21_tiles,dizzy22_tiles,dizzy23_tiles,dizzy24_tiles,dizzy25_tiles,dizzy26_tiles,dizzy25_tiles,dizzy27_tiles,dizzy28_tiles,dizzy29_tiles,dizzy30_tiles,dizzy31_tiles,dizzy32_tiles,dizzy33_tiles,dizzy34_tiles,dizzy35_tiles,dizzy36_tiles,dizzy37_tiles,dizzy38_tiles,dizzy37_tiles
};
