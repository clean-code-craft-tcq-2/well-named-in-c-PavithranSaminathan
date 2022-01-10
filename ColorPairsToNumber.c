#include "TestColorsPair.h"
#include <assert.h>

NumberOfMinorColors_i = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

static int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * NumberOfMinorColors_i +
            colorPair->minorColor + 1;
}

void TestPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
