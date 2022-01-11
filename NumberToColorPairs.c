/*!
 * \file         NumberToColorPairs.c
 * \brief        This file contains functions definition to test color pair against pair number
 */
#include "TestColorsPair.h"
#include <assert.h>

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int NumberOfMajorColors_i = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int NumberOfMinorColors_i = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

/*------------------------------------------------------------------------------
 *  FUNCTION:   void ColorPairToString(const ColorPair* colorPair, char* buffer) 
 */
/*! \brief      To store major and minor color names in buffer string */

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}

/*------------------------------------------------------------------------------
 *  FUNCTION:   GetColorFromPairNumber(int pairNumber)
 */
/*! \brief      To store major and minor color names in buffer string */

ColorPair GetColorFromPairNumber(int pairNumber_i) 
{
    ColorPair LcolorPair;
    int LzeroBasedPairNumber = pairNumber_i - 1;
    LcolorPair.majorColor = (enum MajorColor)(LzeroBasedPairNumber / NumberOfMajorColors_i);
    LcolorPair.minorColor = (enum MinorColor)(LzeroBasedPairNumber % NumberOfMinorColors_i);
    return LcolorPair;
}

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
