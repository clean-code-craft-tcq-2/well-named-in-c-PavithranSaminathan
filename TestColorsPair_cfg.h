#ifndef TestColorsPair_cfg_H
#define TestColorsPair_cfg_H

#define MAX_PAIR    16U
const int MAX_COLORPAIR_NAME_CHARS = 16;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE };

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

#endif
