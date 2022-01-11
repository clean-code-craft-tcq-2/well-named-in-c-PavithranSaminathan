#include "TestColorsPair.h"

void PrintAllPairs()
{
    int LPairNumber;
    ColorPair LColorPair;
    char *buffer;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for (LPairNumber=1;(int)MAX_PAIR >= LPairNumber;LPairNumber++)
    {
        printf("\n %d",LPairNumber);
        sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],
                            MinorColorNames[colorPair->minorColor]);
        LColorPair = GetColorFromPairNumber(LPairNumber);
        ColorPairToString(&LColorPair, colorPairNames);
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
