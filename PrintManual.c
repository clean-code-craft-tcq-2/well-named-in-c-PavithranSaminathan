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
