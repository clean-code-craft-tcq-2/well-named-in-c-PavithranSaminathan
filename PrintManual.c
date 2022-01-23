/*
* Header Includes 
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
        
        //This function will test each pair againt pair number befor print on console
        Test_Number_To_ColorPair(LPairNumber,&LColorPair);
        
        printf(" %s",colorPairNames);
    }
}

void Test_Number_To_ColorPair(int PairNumber , ColorPair AColorPair)
{
    
}

