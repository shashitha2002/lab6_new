#include "square.h"
#include <math.h>
#include <iostream>

void square::setlength(float sl)
{
    s_length = sl;
}

float square::calArea()
{
    return pow(s_length,2);
}
