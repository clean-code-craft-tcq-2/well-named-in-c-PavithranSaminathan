#ifndef ColorPair_H
#define ColorPair_H

#include <stdio.h>
#include "TestColorsPair_cf.h"

int NumberOfMajorColors_i;
int NumberOfMinorColors_i;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;


extern void TestPairToNumber(enum MajorColor major,enum MinorColor minor,
                                                   int expectedPairNumber);

extern void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,
                                      enum MinorColor expectedMinor)
#endif
