#include "TestColorsPair.h"

void PrintAllPairs()
{
    int LPairNumber;
    ColorPair LColorPair;
    for (LPairNumber=0;MAX_PAIR>LPairNumber;LPairNumber++)
    {
        sprintf("\n %d",LPairNumber);
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
