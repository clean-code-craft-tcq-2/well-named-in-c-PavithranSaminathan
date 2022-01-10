#ifndef TestColorsPair_cfg_H
#define TestColorsPair_cfg_H

const int MAX_COLORPAIR_NAME_CHARS = 16;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET , MAX_MAJOR_COLOR};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, MAX_MINOR_COLOR};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

#endif
