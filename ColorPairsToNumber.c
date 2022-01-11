/*!
 * \file         ColorPairsToNumber.c
 * \brief        This file contains functions definition to test Pair number to color 
 */

#include "TestColorsPair.h"
#include <assert.h>

/*------------------------------------------------------------------------------
 *  FUNCTION:   static int GetPairNumberFromColor(const ColorPair* colorPair) 
 */
/*! \brief      To read pair number from configured paired colors */
static int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * NumberOfMinorColors_i +
            colorPair->minorColor + 1;
}

/*------------------------------------------------------------------------------
 *  FUNCTION:   TestPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
 */
/*! \brief      To execute test between real and expected pair number */

void TestPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
