/*!
 * \file         TestColorsPair.c
 * \brief        Main sourec file to call test function and print user manual
 */
 #include "TestColorsPair.h"

/*------------------------------------------------------------------------------
 *  FUNCTION:   void PrintAllPairs()
 */
/*! \brief      Print all color pairs against pair number */
void PrintAllPairs()
{
    int LPairNumber;
    ColorPair LColorPair;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    printf("user manual color pairs");
    for (LPairNumber=1;(int)MAX_PAIR >= LPairNumber;LPairNumber++)
    {
        printf("\n %d",LPairNumber);
        LColorPair = GetColorFromPairNumber(LPairNumber);
        ColorPairToString(&LColorPair, colorPairNames);
        printf(" %s",colorPairNames);
    }
}
/*------------------------------------------------------------------------------
 *  FUNCTION:   int main()
 */
/*! \brief      Main fnction to call all test cases and print color pairs */
int main() {
    TestNumberToPair(4, WHITE, BROWN);
    TestNumberToPair(5, WHITE, SLATE);
    TestPairToNumber(BLACK, ORANGE, 12);
    TestPairToNumber(VIOLET, SLATE, 25);
    PrintAllPairs();
    return 0;
}
