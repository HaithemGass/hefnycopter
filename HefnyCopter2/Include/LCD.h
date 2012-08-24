/*
 * lcd.h
 *
 * Created: 27.07.2012 13:13:11
 *  Author: OliverS
 *
 * $Id: lcd.h 25 2012-08-15 16:18:33Z olischulz24@googlemail.com $
 */ 


#ifndef LCD_H_
#define LCD_H_

#include "fonts.h"
#include "glyphs.h"
#include <avr/pgmspace.h>

void LCD_Init();
void LCD_Clear();
void LCD_SetPos(uint8_t line, uint8_t column);
void lcdWriteChar(char c);
void LCD_WriteString(char *s);
void LCD_WriteString_P(PGM_P s);
void lcdReverse(uint8_t reversed);
void lcdSetContrast(uint8_t contrast);
void lcdSetPixel(uint8_t x, uint8_t y, uint8_t on);
void lcdLine(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
void LCD_Enable();
void LCD_Disable();
void lcdSelectFont(const fontdescriptor_t *font);
void lcdXY(uint8_t x, uint8_t y);
void lcdWriteGlyph_P(const glyph_t *glyph, uint8_t mode);

#define ROP_COPY	0
#define ROP_PAINT	1
#define ROP_INVERT	2

#endif /* LCD_H_ */