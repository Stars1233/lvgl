/*******************************************************************************
 * Size: 8 px
 * Bpp: 8
 * Opts: --bpp 8 --size 8 --no-compress --font Roboto-Medium.ttf --range 32-127,176,8226 --format lvgl -o font_lv_demo_high_res_roboto_medium_8.c
 ******************************************************************************/

#include "../../../lvgl.h"

#if LV_USE_DEMO_HIGH_RES

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x66, 0x94, 0x60, 0x8e, 0x5b, 0x87, 0x3f, 0x5f,
    0x46, 0x74,

    /* U+0022 "\"" */
    0x9c, 0x7c, 0x3c, 0x86, 0x61, 0x23,

    /* U+0023 "#" */
    0x0, 0x1c, 0x8a, 0x92, 0x16, 0x30, 0xbf, 0xaf,
    0xda, 0x6c, 0x0, 0x82, 0x27, 0xa5, 0x0, 0x5a,
    0xd6, 0xa3, 0xc9, 0x3f, 0x0, 0xa7, 0x5d, 0x4b,
    0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0x50, 0x0, 0x0, 0x5, 0x86, 0xe0,
    0x55, 0x0, 0x53, 0xb4, 0x17, 0xe2, 0xc, 0x1e,
    0xd3, 0x6e, 0xf, 0x0, 0x9, 0x13, 0x69, 0xdb,
    0x8, 0x7b, 0xa3, 0x35, 0xe8, 0x14, 0x9, 0x74,
    0xd3, 0x44, 0x0, 0x0, 0x0, 0x2f, 0x0, 0x0,

    /* U+0025 "%" */
    0x6b, 0x89, 0x8b, 0xc, 0x31, 0x0, 0x46, 0x83,
    0x63, 0x8b, 0x13, 0x0, 0x0, 0x0, 0x64, 0xa1,
    0x99, 0x26, 0x0, 0x2e, 0x7a, 0xac, 0x29, 0x81,
    0x0, 0x39, 0x3, 0x89, 0xa6, 0x43,

    /* U+0026 "&" */
    0xa, 0xc0, 0xc6, 0x6c, 0x0, 0x0, 0x17, 0xd1,
    0x73, 0x78, 0x0, 0x0, 0x22, 0xcb, 0xd4, 0x1c,
    0x5a, 0x0, 0x96, 0x60, 0x68, 0xe0, 0x82, 0x0,
    0x3e, 0xc5, 0xa8, 0xca, 0x9b, 0x0,

    /* U+0027 "'" */
    0xac, 0x8, 0x8d, 0x0,

    /* U+0028 "(" */
    0x0, 0x32, 0x63, 0x3, 0xb8, 0x8, 0x49, 0x88,
    0x0, 0x71, 0x63, 0x0, 0x69, 0x67, 0x0, 0x37,
    0x96, 0x0, 0x0, 0xab, 0x1c, 0x0, 0x14, 0x4d,

    /* U+0029 ")" */
    0x7e, 0x16, 0x0, 0x26, 0xa3, 0x0, 0x0, 0xbf,
    0x17, 0x0, 0x9b, 0x46, 0x0, 0xa0, 0x38, 0x0,
    0xc5, 0xe, 0x43, 0x86, 0x0, 0x5d, 0x4, 0x0,

    /* U+002A "*" */
    0xb, 0x8a, 0x1d, 0x6, 0x75, 0xdd, 0xaf, 0x35,
    0x3d, 0x8b, 0xa8, 0x0, 0x1, 0x2, 0x5, 0x0,

    /* U+002B "+" */
    0x0, 0x32, 0x94, 0x0, 0x0, 0x0, 0x3c, 0xb0,
    0x0, 0x0, 0x98, 0xdb, 0xf1, 0xd0, 0x23, 0x0,
    0x3c, 0xb0, 0x0, 0x0,

    /* U+002C "," */
    0x7e, 0x57, 0x9c, 0x19, 0x0, 0x0,

    /* U+002D "-" */
    0x81, 0xb4, 0x3b,

    /* U+002E "." */
    0x4f, 0x76,

    /* U+002F "/" */
    0x0, 0x7, 0xb7, 0x0, 0x5d, 0x62, 0x0, 0xb4,
    0xa, 0x2c, 0x90, 0x0, 0x94, 0x29, 0x0, 0x5e,
    0x0, 0x0,

    /* U+0030 "0" */
    0x21, 0xc3, 0xbd, 0x86, 0x0, 0x83, 0x6e, 0x0,
    0xe1, 0xf, 0x97, 0x5c, 0x0, 0xd0, 0x23, 0x82,
    0x70, 0x0, 0xe1, 0xf, 0x1f, 0xc3, 0xbe, 0x86,
    0x0,

    /* U+0031 "1" */
    0x1d, 0x8d, 0xe0, 0x20, 0x2b, 0xf4, 0x0, 0x0,
    0xf4, 0x0, 0x0, 0xf4, 0x0, 0x0, 0xf4,

    /* U+0032 "2" */
    0x32, 0xc3, 0xc8, 0x95, 0x0, 0x5b, 0x39, 0x8,
    0xed, 0x0, 0x0, 0x0, 0x8e, 0x78, 0x0, 0x2,
    0x98, 0x7d, 0x0, 0x0, 0x7e, 0xee, 0xb4, 0xb4,
    0x2d,

    /* U+0033 "3" */
    0x36, 0xc5, 0xc6, 0x89, 0x0, 0x37, 0x27, 0x12,
    0xe8, 0x0, 0x0, 0x52, 0xda, 0x81, 0x0, 0x3b,
    0x21, 0x4, 0xe6, 0x5, 0x46, 0xcb, 0xc2, 0x93,
    0x0,

    /* U+0034 "4" */
    0x0, 0x1, 0xb5, 0xa4, 0x0, 0x0, 0x73, 0xb9,
    0xa4, 0x0, 0x35, 0xa9, 0x50, 0xa4, 0x0, 0xa0,
    0xba, 0xc9, 0xe3, 0x3c, 0x0, 0x0, 0x50, 0xa4,
    0x0,

    /* U+0035 "5" */
    0x17, 0xf1, 0xc4, 0xc4, 0x9, 0x3b, 0xe2, 0xba,
    0x7e, 0x0, 0x8, 0x1c, 0x5, 0xda, 0x22, 0x43,
    0x59, 0x0, 0xd7, 0x29, 0x16, 0xbf, 0xbf, 0x99,
    0x0,

    /* U+0036 "6" */
    0x0, 0x70, 0xb6, 0x45, 0x0, 0x43, 0xe1, 0xbe,
    0x7d, 0x0, 0x80, 0x84, 0x4, 0xe1, 0x1f, 0x75,
    0x89, 0x0, 0xd7, 0x23, 0x12, 0xbc, 0xc1, 0x8f,
    0x0,

    /* U+0037 "7" */
    0x87, 0xb8, 0xb8, 0xf5, 0x28, 0x0, 0x0, 0x33,
    0xb4, 0x0, 0x0, 0x0, 0xba, 0x35, 0x0, 0x0,
    0x43, 0xb2, 0x0, 0x0, 0x0, 0xca, 0x31, 0x0,
    0x0,

    /* U+0038 "8" */
    0x25, 0xcb, 0xc7, 0x90, 0x0, 0x64, 0x95, 0xd,
    0xed, 0x0, 0x18, 0xe8, 0xdc, 0x8e, 0x0, 0x82,
    0x7a, 0x2, 0xe9, 0xf, 0x37, 0xca, 0xc1, 0xa3,
    0x1,

    /* U+0039 "9" */
    0x35, 0xc5, 0xc3, 0x6a, 0x0, 0x95, 0x6b, 0x4,
    0xe6, 0x4, 0x2d, 0xbc, 0x9f, 0xf6, 0xa, 0x0,
    0x0, 0x3a, 0xd1, 0x0, 0x0, 0x95, 0xbc, 0x2e,
    0x0,

    /* U+003A ":" */
    0x54, 0x71, 0x0, 0x0, 0x0, 0x0, 0x53, 0x71,

    /* U+003B ";" */
    0x6a, 0x5e, 0x0, 0x0, 0x3, 0x3, 0x6f, 0x69,
    0x8d, 0x21,

    /* U+003C "<" */
    0x0, 0x29, 0x93, 0x71, 0x98, 0xc7, 0x42, 0x2,
    0x27, 0x91, 0xc4, 0x49, 0x0, 0x0, 0xb, 0x27,

    /* U+003D "=" */
    0x50, 0xb8, 0xb8, 0xac, 0x0, 0x0, 0x0, 0x0,
    0x50, 0xb8, 0xb8, 0xac,

    /* U+003E ">" */
    0x6d, 0x98, 0x31, 0x0, 0x0, 0x38, 0xb6, 0xb6,
    0x46, 0xc2, 0x9a, 0x32, 0x27, 0xd, 0x0, 0x0,

    /* U+003F "?" */
    0x5e, 0xcf, 0xd3, 0x43, 0x3a, 0x14, 0x7a, 0x80,
    0x0, 0x40, 0xbc, 0xc, 0x0, 0x46, 0x28, 0x0,
    0x0, 0x85, 0x3a, 0x0,

    /* U+0040 "@" */
    0x0, 0x3a, 0x97, 0x88, 0x8e, 0x80, 0x5, 0x23,
    0xa0, 0x1a, 0x98, 0x93, 0x39, 0x76, 0x7e, 0x30,
    0xa2, 0x1c, 0xb0, 0x0, 0x9f, 0x90, 0x1b, 0xc6,
    0x0, 0xb3, 0x1, 0xa3, 0x4f, 0x72, 0x9b, 0x8a,
    0xb3, 0x94, 0x43, 0x0, 0x71, 0x96, 0x8a, 0x6b,
    0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0xd, 0xf1, 0x52, 0x0, 0x0, 0x0, 0x6d,
    0xa7, 0xc0, 0x0, 0x0, 0x1, 0xd5, 0x1b, 0xc5,
    0x30, 0x0, 0x48, 0xea, 0xb8, 0xd3, 0x9e, 0x0,
    0xb5, 0x4c, 0x0, 0x9, 0xe6, 0x14,

    /* U+0042 "B" */
    0x6c, 0xe4, 0xbf, 0xcb, 0x29, 0x6c, 0x90, 0x0,
    0x95, 0x6b, 0x6c, 0xd9, 0xb1, 0xe7, 0x21, 0x6c,
    0x90, 0x0, 0x6f, 0x8f, 0x6c, 0xe2, 0xbd, 0xd1,
    0x3f,

    /* U+0043 "C" */
    0x6, 0xa3, 0xc2, 0xc6, 0x4a, 0x72, 0x95, 0x0,
    0x22, 0x93, 0x95, 0x66, 0x0, 0x0, 0x0, 0x75,
    0x92, 0x0, 0x22, 0x8f, 0x7, 0xa6, 0xc4, 0xc8,
    0x48,

    /* U+0044 "D" */
    0x6c, 0xe4, 0xc3, 0xb3, 0x17, 0x6c, 0x90, 0x0,
    0x6b, 0xa2, 0x6c, 0x90, 0x0, 0x31, 0xcf, 0x6c,
    0x90, 0x0, 0x6b, 0xa5, 0x6c, 0xe2, 0xc1, 0xb5,
    0x18,

    /* U+0045 "E" */
    0x6c, 0xe4, 0xc0, 0xc0, 0x33, 0x6c, 0x90, 0x0,
    0x0, 0x0, 0x6c, 0xe0, 0xb8, 0xa6, 0x0, 0x6c,
    0x90, 0x0, 0x0, 0x0, 0x6c, 0xe2, 0xbc, 0xbc,
    0x37,

    /* U+0046 "F" */
    0x6c, 0xe4, 0xc0, 0xc0, 0x24, 0x6c, 0x90, 0x0,
    0x0, 0x0, 0x6c, 0xe0, 0xb8, 0x9e, 0x0, 0x6c,
    0x90, 0x0, 0x0, 0x0, 0x6c, 0x90, 0x0, 0x0,
    0x0,

    /* U+0047 "G" */
    0x8, 0xa8, 0xc0, 0xcc, 0x5d, 0x6b, 0x9b, 0x0,
    0x15, 0x60, 0x90, 0x6b, 0x26, 0xb1, 0xca, 0x6d,
    0xa2, 0x0, 0xc, 0xf0, 0x4, 0x98, 0xc6, 0xc2,
    0x83,

    /* U+0048 "H" */
    0x6c, 0x90, 0x0, 0x0, 0xe4, 0x18, 0x6c, 0x90,
    0x0, 0x0, 0xe4, 0x18, 0x6c, 0xe0, 0xb8, 0xb8,
    0xf8, 0x18, 0x6c, 0x90, 0x0, 0x0, 0xe4, 0x18,
    0x6c, 0x90, 0x0, 0x0, 0xe4, 0x18,

    /* U+0049 "I" */
    0x5c, 0xa0, 0x5c, 0xa0, 0x5c, 0xa0, 0x5c, 0xa0,
    0x5c, 0xa0,

    /* U+004A "J" */
    0x0, 0x0, 0x18, 0xe4, 0x0, 0x0, 0x18, 0xe4,
    0x0, 0x0, 0x18, 0xe4, 0x66, 0x21, 0x28, 0xdc,
    0x5d, 0xd0, 0xd3, 0x64,

    /* U+004B "K" */
    0x6c, 0x90, 0x4, 0xae, 0x7d, 0x0, 0x6c, 0x91,
    0xa4, 0x8a, 0x0, 0x0, 0x6c, 0xf2, 0xf0, 0x26,
    0x0, 0x0, 0x6c, 0xa9, 0x40, 0xd2, 0xd, 0x0,
    0x6c, 0x90, 0x0, 0x77, 0xaf, 0x1,

    /* U+004C "L" */
    0x6c, 0x90, 0x0, 0x0, 0x0, 0x6c, 0x90, 0x0,
    0x0, 0x0, 0x6c, 0x90, 0x0, 0x0, 0x0, 0x6c,
    0x90, 0x0, 0x0, 0x0, 0x6c, 0xe2, 0xbc, 0xbc,
    0x1d,

    /* U+004D "M" */
    0x6c, 0xf9, 0x18, 0x0, 0x18, 0xfa, 0x6c, 0x6c,
    0xdc, 0x80, 0x0, 0x81, 0xda, 0x6c, 0x6c, 0x8e,
    0xd2, 0xc, 0xd0, 0x8e, 0x6c, 0x6c, 0x8f, 0x83,
    0xb5, 0x7f, 0x8f, 0x6c, 0x6c, 0x90, 0x19, 0xf3,
    0x16, 0x90, 0x6c,

    /* U+004E "N" */
    0x6c, 0xdd, 0xd, 0x0, 0xe4, 0x18, 0x6c, 0xe4,
    0xa2, 0x0, 0xe4, 0x18, 0x6c, 0x90, 0xaf, 0x59,
    0xe4, 0x18, 0x6c, 0x90, 0x13, 0xd5, 0xf2, 0x18,
    0x6c, 0x90, 0x0, 0x42, 0xfd, 0x18,

    /* U+004F "O" */
    0x8, 0xa6, 0xc8, 0xcc, 0x4c, 0x0, 0x6f, 0x9b,
    0x0, 0x1c, 0xe9, 0x5, 0x94, 0x68, 0x0, 0x0,
    0xe4, 0x1b, 0x6e, 0x9e, 0x0, 0x1c, 0xeb, 0x6,
    0x4, 0x9e, 0xcc, 0xcf, 0x4e, 0x0,

    /* U+0050 "P" */
    0x6c, 0xe4, 0xc0, 0xd0, 0x54, 0x6c, 0x90, 0x0,
    0x42, 0xc4, 0x6c, 0xe4, 0xc0, 0xc2, 0x45, 0x6c,
    0x90, 0x0, 0x0, 0x0, 0x6c, 0x90, 0x0, 0x0,
    0x0,

    /* U+0051 "Q" */
    0x9, 0xa8, 0xc7, 0xcd, 0x4a, 0x0, 0x75, 0x96,
    0x0, 0x1f, 0xe9, 0x3, 0x9c, 0x60, 0x0, 0x0,
    0xe8, 0x12, 0x76, 0x95, 0x0, 0x1f, 0xe1, 0x0,
    0x6, 0xa3, 0xcb, 0xec, 0x66, 0x0, 0x0, 0x0,
    0x0, 0x2b, 0x99, 0x2,

    /* U+0052 "R" */
    0x6c, 0xe4, 0xbf, 0xcc, 0x3d, 0x6c, 0x90, 0x0,
    0x75, 0x95, 0x6c, 0xe0, 0xc7, 0xd6, 0x1c, 0x6c,
    0x90, 0xf, 0xe2, 0x19, 0x6c, 0x90, 0x0, 0x74,
    0x9a,

    /* U+0053 "S" */
    0x28, 0xc5, 0xbc, 0xb8, 0x1d, 0x70, 0x97, 0x0,
    0x45, 0x3f, 0x6, 0x7e, 0xb6, 0x88, 0x9, 0x60,
    0x36, 0x0, 0x93, 0x76, 0x2f, 0xbd, 0xb9, 0xc8,
    0x2e,

    /* U+0054 "T" */
    0x9f, 0xc4, 0xfb, 0xc0, 0x84, 0x0, 0x10, 0xec,
    0x0, 0x0, 0x0, 0x10, 0xec, 0x0, 0x0, 0x0,
    0x10, 0xec, 0x0, 0x0, 0x0, 0x10, 0xec, 0x0,
    0x0,

    /* U+0055 "U" */
    0x84, 0x78, 0x0, 0x40, 0xbc, 0x84, 0x78, 0x0,
    0x40, 0xbc, 0x84, 0x78, 0x0, 0x40, 0xbc, 0x77,
    0x89, 0x0, 0x52, 0xae, 0x16, 0xbb, 0xbc, 0xc6,
    0x35,

    /* U+0056 "V" */
    0xb9, 0x53, 0x0, 0x25, 0xe3, 0x3, 0x51, 0xac,
    0x0, 0x80, 0x7e, 0x0, 0x3, 0xdb, 0xd, 0xd4,
    0x1a, 0x0, 0x0, 0x81, 0x90, 0xac, 0x0, 0x0,
    0x0, 0x1c, 0xfa, 0x44, 0x0, 0x0,

    /* U+0057 "W" */
    0xaf, 0x49, 0xa, 0xf6, 0x1a, 0x31, 0xc1, 0x6b,
    0x85, 0x4c, 0xdf, 0x5f, 0x69, 0x7e, 0x28, 0xc1,
    0x97, 0x50, 0xa3, 0xa1, 0x3b, 0x0, 0xdb, 0xca,
    0x1, 0xb6, 0xcd, 0x5, 0x0, 0xa2, 0x9a, 0x0,
    0x82, 0xb5, 0x0,

    /* U+0058 "X" */
    0x74, 0xa7, 0x0, 0x95, 0x86, 0x2, 0xc0, 0x7e,
    0xcd, 0x6, 0x0, 0x40, 0xff, 0x54, 0x0, 0x3,
    0xc6, 0x8c, 0xd2, 0x7, 0x7e, 0xa5, 0x0, 0x92,
    0x8e,

    /* U+0059 "Y" */
    0xab, 0x62, 0x0, 0x84, 0x8a, 0x1c, 0xd5, 0x1d,
    0xd7, 0xc, 0x0, 0x76, 0xde, 0x55, 0x0, 0x0,
    0x11, 0xf1, 0x0, 0x0, 0x0, 0x10, 0xf0, 0x0,
    0x0,

    /* U+005A "Z" */
    0x81, 0xc0, 0xc0, 0xf6, 0x62, 0x0, 0x0, 0x5a,
    0xb7, 0x2, 0x0, 0x31, 0xd2, 0x11, 0x0, 0x14,
    0xd5, 0x2c, 0x0, 0x0, 0x9f, 0xe6, 0xbc, 0xbc,
    0x66,

    /* U+005B "[" */
    0x68, 0xc2, 0x13, 0x7c, 0x78, 0x0, 0x7c, 0x78,
    0x0, 0x7c, 0x78, 0x0, 0x7c, 0x78, 0x0, 0x7c,
    0x78, 0x0, 0x7c, 0x78, 0x0, 0x68, 0xc2, 0x13,

    /* U+005C "\\" */
    0xb5, 0x3a, 0x0, 0x0, 0x46, 0xa9, 0x0, 0x0,
    0x1, 0xd2, 0x1c, 0x0, 0x0, 0x69, 0x86, 0x0,
    0x0, 0xb, 0xdb, 0x8, 0x0, 0x0, 0x54, 0x24,

    /* U+005D "]" */
    0xb3, 0x8d, 0x4c, 0xa8, 0x4c, 0xa8, 0x4c, 0xa8,
    0x4c, 0xa8, 0x4c, 0xa8, 0x4c, 0xa8, 0xb3, 0x8d,

    /* U+005E "^" */
    0x0, 0x5f, 0x14, 0x0, 0x1d, 0xca, 0x82, 0x0,
    0x90, 0x38, 0xba, 0xb,

    /* U+005F "_" */
    0xad, 0xb0, 0xb0, 0x68,

    /* U+0060 "`" */
    0x50, 0x9f, 0x0,

    /* U+0061 "a" */
    0x3f, 0xbb, 0xbd, 0x6a, 0x1f, 0x95, 0x98, 0xd0,
    0x95, 0x60, 0x2a, 0xd4, 0x4c, 0xd5, 0xb2, 0xe5,

    /* U+0062 "b" */
    0x84, 0x70, 0x0, 0x0, 0x0, 0x84, 0xce, 0xc4,
    0x9c, 0x0, 0x84, 0x75, 0x0, 0xd6, 0x21, 0x84,
    0x75, 0x0, 0xd6, 0x21, 0x84, 0xc4, 0xc1, 0x9c,
    0x0,

    /* U+0063 "c" */
    0x28, 0xc2, 0xca, 0x76, 0x9b, 0x58, 0x6, 0x67,
    0x9b, 0x56, 0x4, 0x50, 0x28, 0xc0, 0xbf, 0x6e,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0xf0, 0x4, 0x2e, 0xd2, 0xb2,
    0xf9, 0x4, 0x9c, 0x5f, 0x2, 0xf2, 0x4, 0x9c,
    0x5d, 0x0, 0xf1, 0x4, 0x2e, 0xc5, 0xa2, 0xf3,
    0x4,

    /* U+0065 "e" */
    0x1d, 0xb2, 0xbe, 0x8e, 0x0, 0x8f, 0xc0, 0xa0,
    0xcb, 0x4, 0x97, 0x76, 0x0, 0x21, 0x0, 0x23,
    0xc6, 0xb8, 0x95, 0x0,

    /* U+0066 "f" */
    0x14, 0xd2, 0x96, 0x9a, 0xeb, 0x69, 0x2c, 0xc4,
    0x0, 0x2c, 0xc4, 0x0, 0x2c, 0xc4, 0x0,

    /* U+0067 "g" */
    0x2c, 0xd0, 0xb4, 0xed, 0xc, 0x99, 0x5e, 0x0,
    0xeb, 0xc, 0x98, 0x64, 0x0, 0xea, 0xc, 0x2b,
    0xcf, 0xaf, 0xf6, 0x7, 0x20, 0xab, 0xbe, 0x86,
    0x0,

    /* U+0068 "h" */
    0x88, 0x6c, 0x0, 0x0, 0x88, 0xc6, 0xc9, 0x9d,
    0x88, 0x71, 0x7, 0xf2, 0x88, 0x6c, 0x0, 0xf4,
    0x88, 0x6c, 0x0, 0xf4,

    /* U+0069 "i" */
    0x58, 0x63, 0x74, 0x80, 0x74, 0x80, 0x74, 0x80,
    0x74, 0x80,

    /* U+006A "j" */
    0x0, 0x62, 0x58, 0x0, 0x78, 0x7c, 0x0, 0x78,
    0x7c, 0x0, 0x78, 0x7c, 0x0, 0x79, 0x7b, 0x34,
    0xd8, 0x43,

    /* U+006B "k" */
    0x84, 0x70, 0x0, 0x0, 0x0, 0x84, 0x70, 0x90,
    0x92, 0x0, 0x84, 0xd8, 0xb7, 0x1, 0x0, 0x84,
    0xb1, 0xd8, 0x24, 0x0, 0x84, 0x70, 0x43, 0xcd,
    0x8,

    /* U+006C "l" */
    0x74, 0x80, 0x74, 0x80, 0x74, 0x80, 0x74, 0x80,
    0x74, 0x80,

    /* U+006D "m" */
    0x84, 0xc4, 0xc9, 0xad, 0xaf, 0xdc, 0x31, 0x84,
    0x73, 0x8, 0xf7, 0x5, 0x81, 0x74, 0x84, 0x70,
    0x0, 0xf4, 0x0, 0x78, 0x78, 0x84, 0x70, 0x0,
    0xf4, 0x0, 0x78, 0x78,

    /* U+006E "n" */
    0x88, 0xc2, 0xc9, 0xa0, 0x88, 0x71, 0x6, 0xf2,
    0x88, 0x6c, 0x0, 0xf4, 0x88, 0x6c, 0x0, 0xf4,

    /* U+006F "o" */
    0x21, 0xbc, 0xc0, 0x89, 0x0, 0x94, 0x5e, 0x0,
    0xce, 0x26, 0x99, 0x5c, 0x0, 0xce, 0x20, 0x24,
    0xbf, 0xb9, 0x89, 0x0,

    /* U+0070 "p" */
    0x84, 0xc5, 0xb5, 0x9b, 0x0, 0x84, 0x71, 0x0,
    0xd5, 0x1d, 0x84, 0x73, 0x0, 0xda, 0x1d, 0x84,
    0xcc, 0xc0, 0x99, 0x0, 0x84, 0x70, 0x0, 0x0,
    0x0,

    /* U+0071 "q" */
    0x2f, 0xd0, 0xae, 0xf0, 0x4, 0x9d, 0x5c, 0x1,
    0xf1, 0x4, 0x9b, 0x64, 0x0, 0xf1, 0x4, 0x2e,
    0xce, 0xac, 0xf9, 0x4, 0x0, 0x0, 0x0, 0xf0,
    0x4,

    /* U+0072 "r" */
    0x0, 0x0, 0x0, 0x84, 0xd4, 0x8d, 0x84, 0x77,
    0x0, 0x84, 0x70, 0x0, 0x84, 0x70, 0x0,

    /* U+0073 "s" */
    0x3e, 0xc5, 0xc5, 0x62, 0x64, 0xb2, 0x4e, 0x30,
    0x31, 0x44, 0x8e, 0xa3, 0x46, 0xc0, 0xc0, 0x6e,

    /* U+0074 "t" */
    0x44, 0xac, 0x0, 0xba, 0xe3, 0x46, 0x44, 0xac,
    0x0, 0x43, 0xac, 0x0, 0x1d, 0xdd, 0x51,

    /* U+0075 "u" */
    0x88, 0x6c, 0x0, 0xf4, 0x88, 0x6c, 0x0, 0xf4,
    0x84, 0x73, 0x3, 0xf4, 0x3b, 0xda, 0xad, 0xf0,

    /* U+0076 "v" */
    0xba, 0x3c, 0x49, 0xac, 0x5c, 0x8f, 0x9a, 0x4e,
    0xa, 0xd4, 0xd3, 0x5, 0x0, 0x9f, 0x92, 0x0,

    /* U+0077 "w" */
    0xbc, 0x2e, 0x8d, 0x7c, 0x40, 0xa6, 0x72, 0x6d,
    0xbe, 0xc0, 0x80, 0x5c, 0x28, 0xd8, 0x8b, 0xa2,
    0xd9, 0x14, 0x0, 0xdc, 0x39, 0x4e, 0xc8, 0x0,

    /* U+0078 "x" */
    0x81, 0x84, 0x81, 0x88, 0x6, 0xcd, 0xd2, 0x8,
    0x9, 0xd1, 0xd3, 0xc, 0x8c, 0x7a, 0x73, 0x94,

    /* U+0079 "y" */
    0xbe, 0x3e, 0x56, 0xa2, 0x51, 0x94, 0xa8, 0x39,
    0x3, 0xca, 0xc3, 0x0, 0x0, 0x96, 0x67, 0x0,
    0x72, 0xb7, 0x9, 0x0,

    /* U+007A "z" */
    0x75, 0xb8, 0xe6, 0x98, 0x0, 0x30, 0xd2, 0x11,
    0x12, 0xd3, 0x2d, 0x0, 0x9a, 0xe2, 0xb4, 0x87,

    /* U+007B "{" */
    0x0, 0x0, 0x0, 0x0, 0x8b, 0x53, 0x4, 0xe6,
    0x0, 0x18, 0xd2, 0x0, 0xb1, 0x78, 0x0, 0x17,
    0xd2, 0x0, 0x4, 0xe6, 0x0, 0x0, 0x86, 0x53,
    0x0, 0x0, 0x0,

    /* U+007C "|" */
    0x50, 0x54, 0x50, 0x54, 0x50, 0x54, 0x50, 0x54,
    0x50, 0x54, 0x50, 0x54, 0x15, 0x16,

    /* U+007D "}" */
    0x0, 0x0, 0x0, 0x97, 0x40, 0x0, 0x3a, 0xac,
    0x0, 0x22, 0xc4, 0x0, 0x0, 0xc6, 0x5d, 0x22,
    0xc3, 0x0, 0x3b, 0xab, 0x0, 0x99, 0x42, 0x0,
    0x0, 0x0, 0x0,

    /* U+007E "~" */
    0x1e, 0xb7, 0x89, 0xa, 0xa6, 0x6a, 0x44, 0x52,
    0xc0, 0x53,

    /* U+00B0 "°" */
    0x37, 0x81, 0x3d, 0x37, 0x80, 0x3e,

    /* U+2022 "•" */
    0x2c, 0x9c, 0x10, 0x4f, 0xe9, 0x23
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 32, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 34, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 42, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 16, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 73, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 81, .adv_w = 94, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 82, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 22, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 145, .adv_w = 45, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 169, .adv_w = 45, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 193, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 209, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 229, .adv_w = 28, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 235, .adv_w = 42, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 238, .adv_w = 36, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 258, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 73, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 34, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 30, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 516, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 72, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 544, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 62, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 115, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 622, .adv_w = 85, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 70, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 91, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 36, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 862, .adv_w = 81, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 69, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 112, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 91, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1037, .adv_w = 88, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1073, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 83, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 113, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1238, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 35, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1337, .adv_w = 54, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1361, .adv_w = 35, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1377, .adv_w = 55, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1389, .adv_w = 58, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1393, .adv_w = 41, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1396, .adv_w = 69, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1412, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1437, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1478, .adv_w = 69, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1498, .adv_w = 45, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1538, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1558, .adv_w = 33, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1568, .adv_w = 32, .box_w = 3, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1586, .adv_w = 67, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1611, .adv_w = 33, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1621, .adv_w = 111, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1665, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1685, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1710, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1735, .adv_w = 45, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1750, .adv_w = 66, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 43, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1797, .adv_w = 63, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1813, .adv_w = 95, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1853, .adv_w = 62, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1873, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1889, .adv_w = 43, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1916, .adv_w = 32, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1930, .adv_w = 43, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1957, .adv_w = 85, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1967, .adv_w = 49, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1973, .adv_w = 45, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x1f72
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 8051, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 82,
    3, 84,
    3, 88,
    8, 3,
    8, 8,
    8, 34,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 82,
    8, 84,
    8, 88,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 78,
    34, 79,
    34, 80,
    34, 81,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    34, 91,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 94,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 72,
    38, 80,
    38, 82,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 85,
    49, 87,
    49, 90,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 83,
    55, 86,
    55, 87,
    55, 90,
    55, 94,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 83,
    56, 86,
    56, 94,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 86,
    57, 87,
    57, 90,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    58, 94,
    58, 97,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 80,
    59, 82,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 43,
    60, 54,
    66, 3,
    66, 8,
    66, 87,
    66, 90,
    67, 3,
    67, 8,
    67, 87,
    67, 89,
    67, 90,
    67, 91,
    68, 3,
    68, 8,
    70, 3,
    70, 8,
    70, 87,
    70, 90,
    71, 3,
    71, 8,
    71, 10,
    71, 62,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 82,
    71, 94,
    73, 3,
    73, 8,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 82,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 87,
    80, 89,
    80, 90,
    80, 91,
    81, 3,
    81, 8,
    81, 87,
    81, 89,
    81, 90,
    81, 91,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 90,
    85, 80,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 43,
    92, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -4, -2, -2, -7, -3, -4, -4, -4,
    -4, -1, -1, -6, -1, -4, -6, 1,
    -2, -2, -7, -3, -4, -4, -4, -4,
    -1, -1, -6, -1, -4, -6, 1, 1,
    2, 1, -18, -18, -18, -18, -15, -7,
    -7, -5, -1, -1, -1, -1, -7, -1,
    -5, -2, -9, -3, -3, -1, -3, -1,
    -1, -3, -2, -3, 1, -2, -1, -3,
    -2, -2, -1, -1, -8, -8, -1, -5,
    -1, -1, -3, -1, 1, -1, -1, -1,
    -1, -1, -1, -1, -1, -2, -1, -2,
    -17, -17, -12, -13, 1, -2, -1, -1,
    -1, -1, -1, -1, -2, -1, -1, -1,
    1, -2, 1, -2, 1, -2, 1, -2,
    -1, -10, -2, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -1, -2, -4, -2,
    -18, -18, 1, -4, -4, -4, -4, -13,
    -1, -13, -6, -17, -1, -8, -3, -8,
    1, -2, 1, -2, 1, -2, 1, -2,
    -8, -8, -1, -5, -1, -1, -3, -1,
    -25, -25, -11, -11, -3, -2, -1, -1,
    -1, -1, -1, -1, -1, 1, 1, 1,
    -2, -2, -1, -2, -3, -1, -3, -4,
    -16, -17, -16, -7, -2, -2, -13, -2,
    -2, -1, 1, 1, 1, 1, -10, -6,
    -6, -6, -6, -6, -6, -13, -6, -6,
    -4, -5, -4, -5, -3, -5, -5, -4,
    -1, 1, -13, -10, -13, -5, -1, -1,
    -1, -1, 1, -3, -3, -3, -3, -3,
    -3, -3, -2, -2, -1, -1, 1, 1,
    -9, -4, -9, -3, 1, 1, -2, -2,
    -2, -2, -2, -2, -2, -1, -1, 1,
    -10, -2, -2, -2, -2, 1, -2, -2,
    -2, -2, -1, -2, -1, -2, -2, -2,
    1, -3, -14, -9, -14, -9, -2, -2,
    -6, -2, -2, -1, 1, -6, 1, 1,
    1, 1, 1, -4, -4, -4, -4, -1,
    -4, -2, -2, -4, -2, -4, -2, -4,
    -1, -2, -1, -1, -1, -2, 1, -3,
    1, -2, -2, -2, -2, -1, -1, -1,
    -1, -1, -1, -1, -2, -2, -2, -1,
    -1, -1, -1, -1, -1, -2, -2, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 1, 1, 1, 1, -1, -1, -1,
    -1, -1, 1, -5, -5, -1, -1, -1,
    -1, -1, -5, -5, -5, -5, -5, -5,
    -1, -1, -1, -1, -2, -2, -1, -1,
    -1, -1, 1, 1, -11, -11, -2, -1,
    -1, -1, 1, -1, -2, -1, 3, 1,
    1, 1, -2, 1, 1, -10, -10, -1,
    -1, -1, -1, 1, -1, -1, -1, -8,
    -8, -1, -1, -1, -1, -2, -1, 1,
    1, -10, -10, -1, -1, -1, -1, 1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 435,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 8,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t font_lv_demo_high_res_roboto_medium_8 = {
#else
lv_font_t font_lv_demo_high_res_roboto_medium_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_USE_DEMO_HIGH_RES*/

