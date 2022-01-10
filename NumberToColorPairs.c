#include "TestColorPairs.h"
#include <assert.h>

static ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

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
