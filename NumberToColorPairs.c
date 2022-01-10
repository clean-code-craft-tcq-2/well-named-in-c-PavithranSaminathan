#include "TestColorsPair.h"
#include <assert.h>

NumberOfMajorColors_i = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
NumberOfMinorColors_i = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

static ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / NumberOfMinorColors_i);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % NumberOfMinorColors_i);
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
