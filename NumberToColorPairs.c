#include "TestColorsPair.h"
#include <assert.h>

int NumberOfMajorColors_i = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int NumberOfMinorColors_i = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],
                            MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / NumberOfMajorColors_i);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % NumberOfMinorColors_i);
    return colorPair;
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
