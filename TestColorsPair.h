#ifndef TestColorsPair_H
#define TestColorsPair_H

#include <stdio.h>
#include "TestColorsPair_cfg.h"

#define MAX_PAIR    16U

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;



const int MAX_COLORPAIR_NAME_CHARS =16U;

const char* MajorColorNames[];

const char* MinorColorNames[];

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE };

extern int NumberOfMajorColors_i;
extern int NumberOfMinorColors_i;

extern void TestPairToNumber(enum MajorColor major,enum MinorColor minor,
                                                   int expectedPairNumber);

extern void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,
                                             enum MinorColor expectedMinor);
extern ColorPair GetColorFromPairNumber(int LPairNumber);

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
#endif
