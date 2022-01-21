/*!
 * \file         TestNumberToColorPairs.c
 * \brief        This file contains functions definition to test color pair against pair number
 */
#include "TestColorsPair.h"
#include <assert.h>

/*------------------------------------------------------------------------------
 *  FUNCTION:   TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,enum MinorColor expectedMinor)
 */
/*! \brief      To test major and minor color name against pair number.*/

void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,enum MinorColor expectedMinor)
{
    char LcolorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPair LcolorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&LcolorPair, LcolorPairNames);
    printf("Got pair %s\n", LcolorPairNames);
    assert(LcolorPair.majorColor == expectedMajor);
    assert(LcolorPair.minorColor == expectedMinor);
}
