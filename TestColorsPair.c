#include "TestColorsPair.h"

int NumberOfMajorColors_i = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int NumberOfMinorColors_i = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / NumberOfMinorColors_i);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % NumberOfMinorColors_i);
    return colorPair;
}

void PrintAllPairs()
{
    int LPairNumber;
    ColorPair LColorPair;
    for (LPairNumber=1;(int)MAX_PAIR >= LPairNumber;LPairNumber++)
    {
        printf("\n %d",LPairNumber);
        LColorPair = GetColorFromPairNumber(LPairNumber);
        ColorPairToString(&colorPair, colorPairNames);
    }
}

int main() {
    TestNumberToPair(4, WHITE, BROWN);
    TestNumberToPair(5, WHITE, SLATE);
    TestPairToNumber(BLACK, ORANGE, 12);
    TestPairToNumber(VIOLET, SLATE, 25);
    PrintAllPairs();
    return 0;
}
