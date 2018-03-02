//Jordan Parks
//
#include "fonts.h"



void showName()
{
    Rect r;

    r.bot = 120;
    r.left = 10;
    r.center = 0;
    ggprint8b(&r, 16, 0x00fff000, "Jordan");
} 
