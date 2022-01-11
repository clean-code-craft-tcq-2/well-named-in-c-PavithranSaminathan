#include "TestColorsPair.h"
#include <assert.h>

static void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],
                            MinorColorNames[colorPair->minorColor]);
}


void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,
                                      enum MinorColor expectedMinor)
{
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
