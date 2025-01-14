/*
 * EEZ Modular Firmware
 * Copyright (C) 2015-present, Envox d.o.o.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

#include <agg2d.h>
#include <agg_rendering_buffer.h>

#if defined(EEZ_PLATFORM_STM32)
	typedef uint16_t *VideoBuffer;
#endif
#if defined(EEZ_PLATFORM_SIMULATOR) || defined(__EMSCRIPTEN__)
	typedef uint32_t *VideoBuffer;
#endif

#include <eez/gui/animation.h>
#include <eez/gui/font.h>
#include <eez/gui/geometry.h>
#include <eez/gui/image.h>

static const int CURSOR_WIDTH = 2;

namespace eez {
namespace gui {
namespace display {

#define TRANSPARENT_COLOR_INDEX 0xFFFF

#define COLOR_BLACK 0x0000
#define COLOR_WHITE 0xFFFF
#define COLOR_RED 0xF800
#define COLOR_GREEN 0x0400
#define COLOR_BLUE 0x001F

// C: rrrrrggggggbbbbb
#define RGB_TO_COLOR(R, G, B) (uint16_t((R)&0xF8) << 8) | (uint16_t((G)&0xFC) << 3) | (((B)&0xF8) >> 3)

#define COLOR_TO_R(C) (uint8_t(((C) >> 11) << 3))
#define COLOR_TO_G(C) (uint8_t((((C) >> 5) << 2) & 0xFF))
#define COLOR_TO_B(C) (uint8_t(((C) << 3) & 0xFF))

extern VideoBuffer g_renderBuffer;

void init();

void turnOn();
void turnOff();
bool isOn();

void onThemeChanged();
void onLuminocityChanged();
void updateBrightness();

void update();

void animate(Buffer startBuffer, void (*callback)(float t, VideoBuffer bufferOld, VideoBuffer bufferNew, VideoBuffer bufferDst), float duration = -1);

void beginRendering();
int beginBufferRendering();
void endBufferRendering(int bufferIndex, int x, int y, int width, int height, bool withShadow, uint8_t opacity, int xOffset, int yOffset, gui::Rect *backdrop);
void endRendering();

VideoBuffer getBufferPointer();

const uint8_t *takeScreenshot();
void releaseScreenshot();

#ifdef GUI_CALC_FPS
extern bool g_calcFpsEnabled;
#if defined(STYLE_ID_FPS_GRAPH)
extern bool g_drawFpsGraphEnabled;
#endif
extern uint32_t g_fpsAvg;
void drawFpsGraph(int x, int y, int w, int h, const Style *style);
#endif


uint32_t color16to32(uint16_t color, uint8_t opacity = 255);
uint16_t color32to16(uint32_t color);
uint32_t blendColor(uint32_t fgColor, uint32_t bgColor);

inline int getDisplayWidth() { return DISPLAY_WIDTH; }
inline int getDisplayHeight() { return DISPLAY_HEIGHT;  }

uint16_t getColor16FromIndex(uint16_t color);

void setColor(uint8_t r, uint8_t g, uint8_t b);
void setColor16(uint16_t color16);
void setColor(uint16_t color, bool ignoreLuminocity = false);
uint16_t getColor();

void setBackColor(uint8_t r, uint8_t g, uint8_t b);
void setBackColor(uint16_t color, bool ignoreLuminocity = false);
uint16_t getBackColor();

uint8_t setOpacity(uint8_t opacity);
uint8_t getOpacity();

// these are the basic drawing operations
void startPixelsDraw();
void drawPixel(int x, int y);
void drawPixel(int x, int y, uint8_t opacity);
void endPixelsDraw();
void fillRect(int x1, int y1, int x2, int y2);
void bitBlt(int x1, int y1, int x2, int y2, int x, int y);
void drawBitmap(Image *image, int x, int y);

// used by animation
void fillRect(void *dst, int x1, int y1, int x2, int y2);
void bitBlt(void *src, int x1, int y1, int x2, int y2);
void bitBlt(void *src, void *dst, int x1, int y1, int x2, int y2);
void bitBlt(void *src, void *dst, int sx, int sy, int sw, int sh, int dx, int dy, uint8_t opacity); // also used for buffer rendering (see endRendering)

// these are implemented by calling basic drawing operations
void drawHLine(int x, int y, int l);
void drawVLine(int x, int y, int l);
void drawRect(int x1, int y1, int x2, int y2);
void drawFocusFrame(int x, int y, int w, int h);

// AGG based drawing
struct AggDrawing {
    agg::rendering_buffer rbuf;
	Agg2D graphics;
};

void aggInit(AggDrawing& aggDrawing);

void drawRoundedRect(
	AggDrawing &aggDrawing,
	double x1, double y1, double x2, double y2,
	double lineWidth,
	double rtlx, double rtly, double rtrx, double rtry,
	double rbrx, double rbry, double rblx, double rbly
);

void fillRoundedRect(
	AggDrawing &aggDrawing,
	double x1, double y1, double x2, double y2,
	double lineWidth,
	double rtlx, double rtly, double rtrx, double rtry,
	double rbrx, double rbry, double rblx, double rbly,
	bool drawLine, bool fill,
	double clip_x1 = -1, double clip_y1 = -1, double clip_x2 = -1, double clip_y2 = -1
);

void fillRoundedRect(
	AggDrawing &aggDrawing,
	double x1, double y1, double x2, double y2,
	double lineWidth,
	double r,
	bool drawLine, bool fill,
	double clip_x1 = -1, double clip_y1 = -1, double clip_x2 = -1, double clip_y2 = -1
);

void drawStr(const char *text, int textLength, int x, int y, int clip_x1, int clip_y1, int clip_x2, int clip_y2, gui::font::Font &font, int cursorPosition);
int getCharIndexAtPosition(int xPos, const char *text, int textLength, int x, int y, int clip_x1, int clip_y1, int clip_x2,int clip_y2, gui::font::Font &font);
int getCursorXPosition(int cursorPosition, const char *text, int textLength, int x, int y, int clip_x1, int clip_y1, int clip_x2,int clip_y2, gui::font::Font &font);
int8_t measureGlyph(int32_t encoding, gui::font::Font &font);
int measureStr(const char *text, int textLength, gui::font::Font &font, int max_width = 0);

} // namespace display
} // namespace gui
} // namespace eez
