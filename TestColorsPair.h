#ifndef TestColorsPair_H
#define TestColorsPair_H

#include <stdio.h>
#include "TestColorsPair_cfg.h"


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int NumberOfMajorColors_i;
extern int NumberOfMinorColors_i;

extern void TestPairToNumber(enum MajorColor major,enum MinorColor minor,
                                                   int expectedPairNumber);

extern void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,
                                             enum MinorColor expectedMinor);
extern ColorPair GetColorFromPairNumber(int LPairNumber);

void ColorPairToString(const ColorPair* colorPair, char* buffer);
#endif
