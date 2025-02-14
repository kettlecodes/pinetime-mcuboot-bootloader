#ifndef __GRAPHIC_H__
#define __GRAPHIC_H__

#include <stdint.h>

struct imgInfo {
  uint8_t width;
  uint8_t height;
  uint8_t left;
  uint8_t top;
  uint8_t colorCount;
  const uint16_t* colors;
  uint16_t dataSize;
  const uint8_t* data;
};

static const uint8_t kettleRle[] = {
  0xf8, 0xf8, 0x09, 0x0a, 0x1b, 0x12, 0x09, 0xf8, 0xf8, 0xf8, 0xf8, 0x60, 0x09, 0x4b, 0x0a, 0x09, 
  0xf8, 0xf8, 0xf8, 0xf8, 0x48, 0x0a, 0x63, 0x0a, 0xf8, 0xf8, 0xf8, 0xf8, 0x38, 0x0a, 0x73, 0x0a, 
  0xf8, 0xf8, 0xf8, 0xf8, 0x28, 0x09, 0x83, 0x09, 0xf8, 0xf8, 0xf8, 0xf8, 0x20, 0x8b, 0x0a, 0xf8, 
  0xf8, 0xf8, 0xf8, 0x18, 0x09, 0x93, 0x09, 0xf8, 0xf8, 0xf8, 0xf8, 0x10, 0x0a, 0x93, 0x0a, 0xf8, 
  0xf8, 0xf8, 0xf8, 0x10, 0x9b, 0x0a, 0xf8, 0xf8, 0xf8, 0xf8, 0x10, 0xa3, 0xf8, 0xf8, 0xf8, 0xf8, 
  0x10, 0xa3, 0xf8, 0xf8, 0xf8, 0xf8, 0x10, 0xa3, 0xf8, 0xf8, 0xf8, 0xf8, 0x10, 0x0a, 0x93, 0x0a, 
  0xf8, 0xf8, 0xf8, 0xf8, 0x10, 0x0a, 0x93, 0x09, 0xf8, 0xf8, 0xf8, 0xf8, 0x18, 0x93, 0xf8, 0xf8, 
  0xf8, 0xf8, 0x20, 0x0a, 0x83, 0x09, 0xf8, 0xf8, 0xf8, 0xf8, 0x28, 0x0a, 0x73, 0x0a, 0xf8, 0xf8, 
  0xf8, 0xf8, 0x38, 0x0a, 0x63, 0x0a, 0xf8, 0xf8, 0xf8, 0xf8, 0x40, 0x0c, 0x0a, 0x53, 0x0a, 0xf8, 
  0xf8, 0xf8, 0xf8, 0x20, 0x0c, 0x12, 0x93, 0x12, 0x0c, 0xf8, 0xf8, 0xf8, 0xd0, 0x09, 0x0a, 0xd3, 
  0x0a, 0x09, 0xf8, 0xf8, 0xf8, 0xa0, 0x09, 0x0a, 0xfb, 0x0b, 0x0a, 0x0c, 0xf8, 0xf8, 0xf8, 0x78, 
  0x09, 0x0a, 0xfb, 0x2b, 0x0a, 0x09, 0xf8, 0x60, 0x09, 0x12, 0x23, 0x1a, 0x0c, 0xf8, 0x98, 0x09, 
  0x0a, 0xfb, 0x4b, 0x0a, 0x09, 0xf8, 0x38, 0x09, 0x0a, 0x6b, 0x0a, 0xf8, 0x78, 0x09, 0x0a, 0xfb, 
  0x6b, 0x0a, 0x0c, 0xf8, 0x18, 0x09, 0x0a, 0x8b, 0x0a, 0x09, 0xf8, 0x58, 0x0a, 0xfb, 0x8b, 0x0a, 
  0xf8, 0x08, 0x0a, 0xab, 0x0a, 0xf8, 0x40, 0x09, 0xfb, 0xa3, 0x0a, 0x0c, 0xe0, 0x0c, 0x0a, 0xb3, 
  0x0a, 0xf8, 0x38, 0x0a, 0xfb, 0xbb, 0x09, 0xd0, 0x0c, 0xc3, 0x0a, 0xf8, 0x30, 0x0a, 0xfb, 0xcb, 
  0x0a, 0xc0, 0x0c, 0x9b, 0x22, 0x13, 0xf8, 0x28, 0x0c, 0xfb, 0xe3, 0x0a, 0xb0, 0x0c, 0x7b, 0x0a, 
  0x09, 0xf8, 0x68, 0x0c, 0xfb, 0xfb, 0x0c, 0xa0, 0x73, 0x0a, 0x0c, 0xf8, 0x70, 0x09, 0xfb, 0xfb, 
  0x13, 0x0c, 0x90, 0x0a, 0x6b, 0x09, 0xf8, 0x78, 0x0c, 0xfb, 0xfb, 0x23, 0x0c, 0x80, 0x09, 0x6b, 
  0x0c, 0xf8, 0x78, 0x0c, 0xfb, 0xfb, 0x33, 0x0c, 0x70, 0x0c, 0x6b, 0x0c, 0xf8, 0x80, 0xfb, 0xfb, 
  0x3b, 0x0a, 0x70, 0x0a, 0x63, 0x0a, 0xf8, 0x80, 0x0a, 0xfb, 0xfb, 0x43, 0x0a, 0x60, 0x09, 0x6b, 
  0xf8, 0x80, 0x0a, 0xfb, 0xfb, 0x53, 0x0a, 0x58, 0x0a, 0x63, 0x09, 0xf8, 0x78, 0x09, 0xfb, 0xfb, 
  0x63, 0x09, 0x48, 0x0c, 0x6b, 0xf8, 0x80, 0xfb, 0xfb, 0x73, 0x48, 0x0a, 0x63, 0x0a, 0xf8, 0x12, 
  0x43, 0x0a, 0x20, 0x0a, 0xfb, 0xfb, 0x73, 0x0a, 0x40, 0x6b, 0x0a, 0xe8, 0x0a, 0x5b, 0x0a, 0x18, 
  0x09, 0xfb, 0xfb, 0x83, 0x0c, 0x30, 0x09, 0x6b, 0x09, 0xe0, 0x0a, 0x63, 0x20, 0xfb, 0xfb, 0x8b, 
  0x0a, 0x30, 0x0a, 0x6b, 0xe0, 0x0a, 0x63, 0x0a, 0x18, 0x0a, 0xfb, 0xfb, 0x93, 0x09, 0x28, 0x73, 
  0xe0, 0x6b, 0x20, 0xfb, 0xfb, 0x9b, 0x0a, 0x28, 0x73, 0xd8, 0x0a, 0x63, 0x0a, 0x18, 0x0a, 0xfb, 
  0xfb, 0xa3, 0x09, 0x18, 0x09, 0x73, 0xd8, 0x0a, 0x33, 0x32, 0x0c, 0x18, 0xfb, 0xfb, 0xab, 0x0a, 
  0x18, 0x0a, 0x73, 0xd8, 0x33, 0x0a, 0x48, 0x09, 0xfb, 0xfb, 0xb3, 0x09, 0x10, 0x7b, 0xd8, 0x33, 
  0x0a, 0x48, 0x0a, 0xfb, 0xfb, 0xb3, 0x0a, 0x08, 0x0a, 0x7b, 0xd8, 0x33, 0x0a, 0x40, 0x0c, 0xfb, 
  0xfb, 0xc3, 0x08, 0x83, 0xd8, 0x33, 0x0a, 0x40, 0x0a, 0xf3, 0x0d, 0xbb, 0x15, 0xf3, 0x0a, 0x83, 
  0xd8, 0x33, 0x0a, 0x40, 0x0a, 0xeb, 0x0d, 0x16, 0xab, 0x0d, 0x16, 0x0d, 0xfb, 0x7b, 0xd8, 0x33, 
  0x0a, 0x40, 0xeb, 0x0d, 0x26, 0x0d, 0x93, 0x0d, 0x26, 0x0d, 0xfb, 0x73, 0xd8, 0x33, 0x0a, 0x38, 
  0x0a, 0xe3, 0x0d, 0x36, 0x0d, 0x83, 0x0d, 0x36, 0x0d, 0xfb, 0x6b, 0xd8, 0x33, 0x0a, 0x38, 0x0a, 
  0xdb, 0x0d, 0x46, 0x7b, 0x0d, 0x46, 0xfb, 0x6b, 0xd8, 0x33, 0x0a, 0x38, 0xdb, 0x0d, 0x46, 0x0f, 
  0x83, 0x0f, 0x46, 0xfb, 0x63, 0xd8, 0x33, 0x0a, 0x38, 0xdb, 0x46, 0x0f, 0x93, 0x0f, 0x3e, 0x0f, 
  0xfb, 0x5b, 0xd8, 0x33, 0x09, 0x30, 0x09, 0xd3, 0x46, 0x0f, 0xa3, 0x46, 0x0f, 0xfb, 0x53, 0xd0, 
  0x0a, 0x33, 0x38, 0x0a, 0xcb, 0x0f, 0x3e, 0x0f, 0xb3, 0x46, 0x0f, 0xfb, 0x4b, 0xc8, 0x0c, 0x3b, 
  0x38, 0x0a, 0xc3, 0x0f, 0x46, 0xbb, 0x0d, 0x46, 0x0f, 0xfb, 0x43, 0xc0, 0x0c, 0x0a, 0x33, 0x0a, 
  0x38, 0x0a, 0xbb, 0x0f, 0x46, 0xcb, 0x0d, 0x46, 0x0f, 0xfb, 0x3b, 0xb8, 0x0a, 0x43, 0x40, 0x0a, 
  0xb3, 0x0f, 0x46, 0x0d, 0xd3, 0x0d, 0x46, 0x0d, 0xfb, 0x2b, 0x0a, 0xa0, 0x09, 0x53, 0x0a, 0x40, 
  0xb3, 0x0f, 0x46, 0x0d, 0xe3, 0x0d, 0x46, 0x0d, 0xfb, 0x23, 0x0a, 0xa0, 0x0a, 0x4b, 0x0a, 0x48, 
  0xab, 0x0d, 0x46, 0x0d, 0xf3, 0x0d, 0x46, 0x0d, 0xfb, 0x1b, 0x0a, 0xa0, 0x0a, 0x4b, 0x0c, 0x48, 
  0xa3, 0x0d, 0x46, 0x0d, 0xfb, 0x0b, 0x0d, 0x46, 0x0d, 0xfb, 0x13, 0x09, 0xa0, 0x0a, 0x43, 0x09, 
  0x50, 0xa3, 0x46, 0x0f, 0xfb, 0x1b, 0x0f, 0x3e, 0x0f, 0xfb, 0x13, 0xa8, 0x0a, 0x4b, 0x09, 0x48, 
  0xa3, 0x0d, 0x46, 0x0f, 0xfb, 0x0b, 0x0f, 0x46, 0xfb, 0x1b, 0xa8, 0x0a, 0x53, 0x48, 0xab, 0x0d, 
  0x46, 0x0d, 0xf3, 0x0f, 0x46, 0x0d, 0xfb, 0x13, 0x0a, 0xa8, 0x09, 0x0a, 0x4b, 0x0a, 0x40, 0xb3, 
  0x0d, 0x46, 0x0d, 0xe3, 0x0d, 0x46, 0x0d, 0xfb, 0x1b, 0x0a, 0xc0, 0x09, 0x0a, 0x3b, 0x0c, 0x38, 
  0x0a, 0xb3, 0x0d, 0x46, 0x0d, 0xd3, 0x0d, 0x46, 0x0d, 0xfb, 0x23, 0x09, 0xd0, 0x0a, 0x33, 0x0a, 
  0x38, 0x0a, 0xbb, 0x0f, 0x46, 0x0d, 0xc3, 0x0d, 0x46, 0x0d, 0xfb, 0x2b, 0xe0, 0x3b, 0x38, 0x0a, 
  0xc3, 0x0f, 0x46, 0x0d, 0xb3, 0x0d, 0x46, 0x0d, 0xfb, 0x2b, 0x0a, 0xe0, 0x09, 0x33, 0x0c, 0x30, 
  0x0a, 0xcb, 0x0f, 0x46, 0xab, 0x0d, 0x46, 0x0f, 0xfb, 0x33, 0x0a, 0xe8, 0x33, 0x09, 0x30, 0x0c, 
  0xd3, 0x0f, 0x46, 0xa3, 0x46, 0x0f, 0xfb, 0x3b, 0x0c, 0xe8, 0x33, 0x0a, 0x38, 0xdb, 0x0f, 0x3e, 
  0x0f, 0x93, 0x46, 0x0f, 0xfb, 0x3b, 0x0a, 0xf0, 0x33, 0x0a, 0x38, 0xe3, 0x46, 0x0f, 0x83, 0x0f, 
  0x3e, 0x0f, 0xfb, 0x43, 0x09, 0xf0, 0x33, 0x0a, 0x38, 0x0a, 0xe3, 0x46, 0x7b, 0x0d, 0x46, 0xfb, 
  0x4b, 0xf8, 0x33, 0x0a, 0x38, 0x09, 0xe3, 0x0d, 0x36, 0x8b, 0x0d, 0x36, 0xfb, 0x4b, 0x0a, 0xf8, 
  0x33, 0x0a, 0x40, 0xeb, 0x0d, 0x1e, 0x0f, 0xa3, 0x26, 0x0d, 0xfb, 0x4b, 0xf8, 0x08, 0x33, 0x0a, 
  0x40, 0x0a, 0xeb, 0x0d, 0x0e, 0x0f, 0xb3, 0x0f, 0x0e, 0x0d, 0xfb, 0x4b, 0x0a, 0xf8, 0x08, 0x33, 
  0x0a, 0x40, 0x0a, 0xf3, 0x0d, 0xc3, 0x0d, 0xfb, 0x53, 0xf8, 0x10, 0x33, 0x0a, 0x48, 0xfb, 0xfb, 
  0xfb, 0x1b, 0x09, 0xf8, 0x10, 0x33, 0x0a, 0x48, 0x0a, 0xfb, 0xfb, 0xfb, 0x0b, 0x0a, 0xf8, 0x18, 
  0x33, 0x0a, 0x48, 0x09, 0xfb, 0xfb, 0xfb, 0x0a, 0xf8, 0x20, 0x0a, 0x33, 0x32, 0x09, 0x18, 0x0a, 
  0xfb, 0xfb, 0xeb, 0x0a, 0xf8, 0x28, 0x09, 0x63, 0x0a, 0x18, 0x09, 0xfb, 0xfb, 0xe3, 0x0a, 0xf8, 
  0x38, 0x6b, 0x0c, 0x18, 0xfb, 0xfb, 0xdb, 0x0a, 0xf8, 0x40, 0x09, 0x63, 0x0a, 0x18, 0x09, 0xfb, 
  0xfb, 0xcb, 0x0a, 0xf8, 0x50, 0x09, 0x63, 0x0c, 0x18, 0x0a, 0xfb, 0xfb, 0xb3, 0x0a, 0x0c, 0xf8, 
  0x60, 0x09, 0x5b, 0x0a, 0x18, 0x0c, 0xfb, 0xfb, 0xa3, 0x0a, 0x09, 0xf8, 0x80, 0x09, 0x52, 0x20, 
  0x0a, 0xfb, 0xfb, 0x83, 0x0a, 0x09, 0xf8, 0xf8, 0x20, 0xfb, 0xfb, 0x6b, 0x0a, 0xf8, 0xf8, 0x40, 
  0x09, 0xfb, 0xfb, 0x63, 0x0c, 0xf8, 0xf8, 0x48, 0x0a, 0xfb, 0xfb, 0x53, 0x09, 0xf8, 0xf8, 0x58, 
  0x0a, 0xfb, 0xfb, 0x43, 0x0a, 0xf8, 0xf8, 0x68, 0x0a, 0xfb, 0xfb, 0x33, 0x0a, 0xf8, 0xf8, 0x78, 
  0xfb, 0xfb, 0x2b, 0x0a, 0xf8, 0xf8, 0x80, 0x0c, 0xfb, 0xfb, 0x1b, 0x0a, 0xf8, 0xf8, 0x90, 0x0c, 
  0xfb, 0xfb, 0x0b, 0x0a, 0xf8, 0xf8, 0xa0, 0x0c, 0xfb, 0xf3, 0x0a, 0xf8, 0xf8, 0xb8, 0x0a, 0xfb, 
  0xdb, 0x0a, 0xf8, 0xf8, 0xc8, 0x0a, 0xfb, 0xcb, 0x0a, 0xf8, 0xf8, 0xd8, 0x09, 0xfb, 0xbb, 0x09, 
  0xf8, 0xf8, 0xe8, 0x0c, 0x0a, 0xfb, 0x9b, 0x0a, 0xf8, 0xf8, 0xf8, 0x10, 0x09, 0xfb, 0x8b, 0x09, 
  0xf8, 0xf8, 0xf8, 0x18, 0x09, 0x0a, 0xfb, 0x7b, 0x0a, 0x09, 0xf8, 0xf8, 0xf8, 0x10, 0x0a, 0xfb, 
  0x9b, 0x0a, 0xf8, 0xf8, 0xf8, 0x0a, 0xfb, 0xab, 0x0a, 0xf8, 0xf8, 0xe8, 0x0a, 0xfb, 0xbb, 0x09, 
  0xf8, 0xf8, 0xe0, 0xfb, 0xc3, 0x0a, 0xf8, 0xf8, 0xe0, 0xfb, 0xcb, 0xf8, 0xf8, 0xe0, 0xfb, 0xcb, 
  0xf8, 0xf8, 0xe0, 0xfb, 0xcb, 0xf8, 0xf8, 0xe0, 0xfb, 0xc3, 0x0a, 0xf8, 0xf8, 0xe0, 0x0a, 0xfb, 
  0xbb, 0x09, 0xf8, 0xf8, 0xe8, 0x0a, 0xfb, 0xab, 0x0a, 0xf8, 0xf8, 0xf8, 0x0a, 0xfb, 0x9b, 0x0a, 
  0xf8, 0xf8, 0xf8, 0x10, 0x09, 0x0a, 0xfb, 0x7b, 0x0a, 0x09, 0xf8, 0xc0
};

static const uint16_t kettleColors[] = { 0x0000, 0x00e8, 0x01ae, 0x02b5, 0x0064, 0x7cb8, 0xffff, 0xce9b };

struct imgInfo kettleInfo = {
  146,
  117,
  54,
  61,
  8,
  kettleColors,
  1244,
  kettleRle
};

static const uint8_t revertRle[] = {
  0xfc, 0xfc, 0x2c, 0x15, 0xb4, 0x09, 0x06, 0x27, 0x06, 0x05, 0x9c, 0x05, 0x43, 0x06, 0x05, 0x88, 
  0x05, 0x53, 0x06, 0x05, 0x78, 0x05, 0x06, 0x5f, 0x06, 0x05, 0x6c, 0x05, 0x2b, 0x0a, 0x0d, 0x0a, 
  0x2b, 0x05, 0x64, 0x06, 0x1f, 0x06, 0x09, 0x24, 0x09, 0x06, 0x1f, 0x05, 0x5c, 0x06, 0x1f, 0x05, 
  0x3c, 0x05, 0x1f, 0x06, 0x54, 0x05, 0x1b, 0x06, 0x4c, 0x05, 0x1b, 0x05, 0x4c, 0x05, 0x1b, 0x05, 
  0x54, 0x05, 0x1b, 0x05, 0x48, 0x1b, 0x05, 0x5c, 0x05, 0x1b, 0x44, 0x06, 0x17, 0x05, 0x64, 0x05, 
  0x17, 0x06, 0x3c, 0x05, 0x17, 0x05, 0x6c, 0x05, 0x17, 0x3c, 0x06, 0x13, 0x06, 0x30, 0x0f, 0x06, 
  0x34, 0x06, 0x13, 0x06, 0x34, 0x05, 0x17, 0x34, 0x0f, 0x06, 0x38, 0x17, 0x34, 0x05, 0x13, 0x06, 
  0x34, 0x0f, 0x06, 0x38, 0x06, 0x13, 0x05, 0x30, 0x06, 0x13, 0x38, 0x0f, 0x06, 0x3c, 0x13, 0x06, 
  0x30, 0x13, 0x06, 0x38, 0x0f, 0x06, 0x3c, 0x06, 0x13, 0x2c, 0x05, 0x13, 0x05, 0x38, 0x0f, 0x06, 
  0x3c, 0x05, 0x13, 0x05, 0x28, 0x06, 0x13, 0x05, 0x38, 0x0f, 0x06, 0x3c, 0x05, 0x13, 0x05, 0x28, 
  0x06, 0x13, 0x3c, 0x0f, 0x06, 0x40, 0x13, 0x06, 0x28, 0x06, 0x13, 0x3c, 0x0f, 0x06, 0x40, 0x13, 
  0x06, 0x28, 0x17, 0x3c, 0x0f, 0x06, 0x40, 0x13, 0x06, 0x0c, 0x06, 0x47, 0x06, 0x20, 0x0f, 0x06, 
  0x40, 0x13, 0x06, 0x10, 0x06, 0x3f, 0x06, 0x24, 0x13, 0x06, 0x05, 0x38, 0x13, 0x06, 0x14, 0x06, 
  0x37, 0x06, 0x28, 0x06, 0x17, 0x06, 0x34, 0x13, 0x06, 0x18, 0x06, 0x2f, 0x06, 0x30, 0x05, 0x06, 
  0x17, 0x05, 0x28, 0x05, 0x13, 0x05, 0x1c, 0x06, 0x27, 0x06, 0x3c, 0x05, 0x17, 0x06, 0x05, 0x20, 
  0x05, 0x13, 0x05, 0x20, 0x06, 0x1f, 0x06, 0x48, 0x06, 0x17, 0x06, 0x1c, 0x06, 0x13, 0x28, 0x06, 
  0x17, 0x06, 0x50, 0x05, 0x06, 0x13, 0x1c, 0x13, 0x06, 0x2c, 0x06, 0x0f, 0x06, 0x5c, 0x05, 0x0b, 
  0x05, 0x18, 0x06, 0x13, 0x05, 0x30, 0x06, 0x07, 0x06, 0x68, 0x06, 0x1c, 0x17, 0x38, 0x06, 0x88, 
  0x06, 0x13, 0x06, 0xc0, 0x05, 0x17, 0xc0, 0x05, 0x17, 0x06, 0x5c, 0x05, 0x5c, 0x05, 0x1b, 0x5c, 
  0x06, 0x07, 0x05, 0x54, 0x05, 0x1b, 0x05, 0x58, 0x06, 0x0f, 0x06, 0x4c, 0x05, 0x1b, 0x05, 0x58, 
  0x06, 0x1b, 0x05, 0x3c, 0x05, 0x1f, 0x06, 0x5c, 0x05, 0x23, 0x09, 0x24, 0x09, 0x06, 0x1f, 0x05, 
  0x64, 0x05, 0x2b, 0x0a, 0x0d, 0x0a, 0x2b, 0x05, 0x6c, 0x05, 0x06, 0x5f, 0x06, 0x05, 0x78, 0x05, 
  0x53, 0x06, 0x05, 0x88, 0x05, 0x06, 0x3f, 0x06, 0x05, 0x9c, 0x05, 0x06, 0x27, 0x06, 0x05, 0xb8, 
  0x15, 0xfc, 0xfc, 0x1c
};

static const uint16_t revertColors[] = { 0x0000, 0x58c2, 0x9944, 0xf1e6 };

struct imgInfo revertInfo = {
  55,
  50,
  20,
  20,
  4,
  revertColors,
  372,
  revertRle
};

static const uint8_t rescueRle[] = {
  0x44, 0x05, 0x06, 0x05, 0x50, 0x05, 0x06, 0x05, 0x70, 0x13, 0x06, 0x48, 0x06, 0x13, 0x64, 0x05, 
  0x1b, 0x06, 0x40, 0x06, 0x1b, 0x5c, 0x05, 0x23, 0x06, 0x38, 0x06, 0x23, 0x54, 0x05, 0x13, 0x06, 
  0x05, 0x13, 0x06, 0x30, 0x06, 0x2b, 0x4c, 0x05, 0x13, 0x06, 0x08, 0x05, 0x13, 0x06, 0x28, 0x06, 
  0x33, 0x44, 0x05, 0x13, 0x06, 0x10, 0x05, 0x13, 0x06, 0x20, 0x06, 0x3b, 0x3c, 0x05, 0x13, 0x06, 
  0x18, 0x05, 0x13, 0x06, 0x18, 0x06, 0x43, 0x34, 0x05, 0x13, 0x06, 0x20, 0x05, 0x13, 0x06, 0x10, 
  0x06, 0x4b, 0x2c, 0x05, 0x13, 0x06, 0x28, 0x05, 0x13, 0x06, 0x08, 0x06, 0x53, 0x24, 0x05, 0x13, 
  0x06, 0x30, 0x05, 0x13, 0x0a, 0x5b, 0x1c, 0x05, 0x13, 0x06, 0x38, 0x05, 0x73, 0x18, 0x06, 0x0f, 
  0x06, 0x40, 0x05, 0x6f, 0x05, 0x14, 0x13, 0x05, 0x44, 0x06, 0x6b, 0x06, 0x14, 0x05, 0x13, 0x05, 
  0x3c, 0x06, 0x6f, 0x05, 0x18, 0x06, 0x13, 0x05, 0x34, 0x06, 0x6f, 0x06, 0x20, 0x06, 0x13, 0x05, 
  0x2c, 0x06, 0x6f, 0x06, 0x28, 0x06, 0x13, 0x05, 0x24, 0x06, 0x17, 0x09, 0x53, 0x06, 0x30, 0x06, 
  0x13, 0x05, 0x1c, 0x06, 0x17, 0x10, 0x4b, 0x06, 0x38, 0x06, 0x13, 0x05, 0x14, 0x06, 0x17, 0x06, 
  0x10, 0x06, 0x43, 0x06, 0x40, 0x06, 0x13, 0x05, 0x0c, 0x06, 0x1b, 0x06, 0x10, 0x06, 0x3f, 0x06, 
  0x48, 0x06, 0x13, 0x05, 0x04, 0x06, 0x23, 0x10, 0x3f, 0x06, 0x50, 0x06, 0x13, 0x06, 0x17, 0x0a, 
  0x0b, 0x06, 0x09, 0x06, 0x0b, 0x0a, 0x2b, 0x06, 0x58, 0x06, 0x23, 0x10, 0x06, 0x13, 0x06, 0x10, 
  0x23, 0x06, 0x60, 0x06, 0x1b, 0x05, 0x10, 0x05, 0x13, 0x05, 0x10, 0x05, 0x1b, 0x06, 0x64, 0x06, 
  0x1b, 0x05, 0x10, 0x05, 0x13, 0x05, 0x10, 0x05, 0x1b, 0x06, 0x60, 0x06, 0x23, 0x10, 0x06, 0x13, 
  0x06, 0x10, 0x23, 0x06, 0x58, 0x06, 0x2b, 0x0a, 0x0b, 0x06, 0x09, 0x06, 0x0b, 0x0a, 0x17, 0x06, 
  0x13, 0x06, 0x50, 0x06, 0x3f, 0x10, 0x23, 0x06, 0x04, 0x05, 0x13, 0x06, 0x48, 0x06, 0x3f, 0x06, 
  0x10, 0x06, 0x1b, 0x06, 0x0c, 0x05, 0x13, 0x06, 0x40, 0x06, 0x43, 0x06, 0x10, 0x06, 0x17, 0x06, 
  0x14, 0x05, 0x13, 0x06, 0x38, 0x06, 0x4b, 0x10, 0x17, 0x06, 0x1c, 0x05, 0x13, 0x06, 0x30, 0x06, 
  0x53, 0x09, 0x17, 0x06, 0x24, 0x05, 0x13, 0x06, 0x28, 0x06, 0x6f, 0x06, 0x2c, 0x05, 0x13, 0x06, 
  0x20, 0x06, 0x6f, 0x06, 0x34, 0x05, 0x13, 0x06, 0x18, 0x05, 0x6f, 0x06, 0x3c, 0x05, 0x13, 0x05, 
  0x14, 0x06, 0x6b, 0x06, 0x44, 0x05, 0x0f, 0x06, 0x14, 0x06, 0x6f, 0x44, 0x06, 0x0f, 0x06, 0x14, 
  0x05, 0x73, 0x3c, 0x06, 0x13, 0x1c, 0x05, 0x5b, 0x0a, 0x13, 0x34, 0x06, 0x13, 0x24, 0x05, 0x53, 
  0x06, 0x08, 0x06, 0x13, 0x2c, 0x06, 0x13, 0x2c, 0x05, 0x4b, 0x06, 0x10, 0x06, 0x13, 0x24, 0x06, 
  0x13, 0x05, 0x30, 0x05, 0x43, 0x06, 0x18, 0x06, 0x13, 0x1c, 0x06, 0x13, 0x05, 0x38, 0x05, 0x3b, 
  0x06, 0x20, 0x06, 0x13, 0x14, 0x06, 0x13, 0x05, 0x40, 0x05, 0x33, 0x06, 0x28, 0x06, 0x13, 0x0c, 
  0x06, 0x13, 0x05, 0x48, 0x05, 0x2b, 0x06, 0x30, 0x06, 0x13, 0x05, 0x06, 0x13, 0x05, 0x50, 0x05, 
  0x23, 0x06, 0x38, 0x06, 0x23, 0x05, 0x58, 0x05, 0x1b, 0x06, 0x40, 0x06, 0x1b, 0x05, 0x60, 0x05, 
  0x13, 0x06, 0x48, 0x06, 0x13, 0x05, 0x68, 0x05, 0x0a, 0x05, 0x50, 0x05, 0x07, 0x06, 0x05, 0x2c
};

static const uint16_t rescueColors[] = { 0x0000, 0x50a2, 0x9944, 0xf1e6 };

struct imgInfo rescueInfo = {
  55,
  50,
  20,
  20,
  4,
  rescueColors,
  480,
  rescueRle
};

#endif
