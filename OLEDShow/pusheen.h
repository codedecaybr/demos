#define pusheen_width 101
#define pusheen_height 64
static const unsigned char pusheen_bits[] U8X8_PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0xb0, 0x03, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x0c, 0x00, 0x18, 0x06, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x18, 0x00, 0x0c, 0x06, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x04, 0x0c, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x60, 0x00, 0x06, 0x18,
   0xf0, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe0, 0xff, 0x03,
   0xf8, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xc0, 0xbd,
   0x03, 0xf0, 0x01, 0x7f, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0,
   0x98, 0x03, 0x00, 0x00, 0x7f, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x04,
   0xc0, 0x18, 0x01, 0x00, 0x00, 0x7f, 0xf8, 0x0f, 0x00, 0x00, 0x00, 0x00,
   0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x3b, 0x00, 0x00, 0x00,
   0x00, 0xf2, 0xff, 0xff, 0xff, 0x07, 0x00, 0x3e, 0xf8, 0x63, 0x00, 0x00,
   0x00, 0x7e, 0xf3, 0xff, 0xff, 0xff, 0x07, 0x3f, 0x00, 0xf8, 0xc3, 0x00,
   0x00, 0x00, 0xf4, 0xf3, 0xff, 0x81, 0xff, 0xc7, 0x3f, 0x00, 0xf0, 0x81,
   0x01, 0x00, 0x00, 0x00, 0xf1, 0xff, 0x81, 0xff, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x03, 0x00, 0x00, 0x80, 0xf1, 0xff, 0x99, 0xff, 0x07, 0x00, 0x00,
   0x00, 0x00, 0x03, 0x00, 0x00, 0xf8, 0xe1, 0xff, 0x98, 0xff, 0xc7, 0x3f,
   0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xde, 0xe0, 0xff, 0x3e, 0xff, 0x83,
   0x3f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x80, 0xc0, 0x7f, 0x7e, 0xff,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xc0, 0x80, 0x3f, 0x00,
   0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0xc0, 0x00, 0x1f,
   0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x60,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xc0, 0x07,
   0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe0,
   0x0f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
   0xf0, 0x0f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x60, 0x90, 0x0f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x60, 0x18, 0x0f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x40, 0x3c, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xc0, 0x7e, 0x06, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x7b, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf1, 0x01, 0x10, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf3, 0x00, 0x10, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x73, 0x00, 0x10, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3b, 0x00, 0x10,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00,
   0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01,
   0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x30, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
   0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
   0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
   0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x0c, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x06, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x70,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00,
   0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x80, 0xf9, 0xff, 0xf9, 0xff, 0x3f, 0xff, 0x3f, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x1f, 0x80, 0x0d, 0x00, 0xe0, 0x03, 0xe0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x07, 0x00, 0xc0, 0x01, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };
