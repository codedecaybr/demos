#define pusheen_flip_width 101
#define pusheen_flip_height 64
static const unsigned char pusheen_flip_bits[] U8X8_PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x01, 0x00,
   0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x03,
   0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c,
   0x06, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x06, 0x04, 0x80, 0x81, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff,
   0x01, 0x03, 0x0c, 0xc0, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff,
   0xff, 0xff, 0x03, 0xf8, 0xff, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf0,
   0xc3, 0x1f, 0xf0, 0x01, 0xb8, 0x77, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xc3, 0x1f, 0x00, 0x00, 0x38, 0x63, 0x00, 0x06, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xc3, 0x1f, 0x00, 0x00, 0x10, 0x63, 0x00, 0x04, 0x00, 0x00,
   0x00, 0x80, 0xfb, 0xc3, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
   0x00, 0x00, 0xc0, 0xf8, 0x83, 0x0f, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x09,
   0x00, 0x00, 0x00, 0x60, 0xf8, 0x03, 0x80, 0x1f, 0xfc, 0xff, 0xff, 0xff,
   0xd9, 0x0f, 0x00, 0x00, 0x30, 0xf0, 0x01, 0x80, 0x7f, 0xfc, 0x3f, 0xf0,
   0xff, 0xf9, 0x05, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f,
   0xf0, 0xff, 0x11, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0x3f, 0xf3, 0xff, 0x31, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x80, 0x7f,
   0xfc, 0x3f, 0xe3, 0xff, 0xf0, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x80,
   0x3f, 0xf8, 0x9f, 0xef, 0xff, 0x60, 0x0f, 0x00, 0x00, 0x06, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0xdf, 0xcf, 0x7f, 0x20, 0x00, 0x00, 0x00, 0x03, 0x00,
   0x00, 0x00, 0x00, 0xf0, 0x0f, 0x80, 0x3f, 0x60, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x1f, 0x60, 0x00, 0x18, 0x00,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x7c,
   0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00,
   0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x00, 0xfe, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0x00, 0x3e, 0xc1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x80, 0x00, 0x1e, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x01, 0x8c, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x01, 0xcc, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xd8, 0x7b, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x71, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x39, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x79, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x3b,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
   0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
   0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x01, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x80,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00,
   0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00,
   0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xc0, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x40, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xc0, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x80,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x90, 0xff, 0x9f, 0xff, 0xff, 0xf3, 0xff, 0x33, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf8, 0x00, 0x00, 0x36, 0x00, 0x1f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x70, 0x00, 0x00, 0x1c, 0x00,
   0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };