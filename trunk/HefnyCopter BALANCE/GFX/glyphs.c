/*
 * glyphs.c
 *
 * Created: 14.08.2012 19:40:28
 *  Author: OliverS
 *
 * $Id: glyphs.c 27 2012-08-15 18:18:23Z olischulz24@googlemail.com $
 */ 

#include "../Include/Glyphs.h"

const glyph_t glyArrowUp   PROGMEM = { 8, 8, {0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x3C, 0x38, 0x30} };
const glyph_t glyArrowDown PROGMEM = { 8, 8, {0x06, 0x0E, 0x1E, 0x3E, 0x3E, 0x1E, 0x0E, 0x06} };
const glyph_t glyBall      PROGMEM = { 9, 9, {0x38, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFE, 0x00, 0xFE, 0x00, 0x38, 0x00} };
const glyph_t glyDirCW     PROGMEM = { 9, 3, {0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x07, 0x02} };
const glyph_t glyDirCCW    PROGMEM = { 5, 3, {0x02, 0x07, 0x02, 0x02, 0x02} };

	