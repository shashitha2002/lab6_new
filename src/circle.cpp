#include "circle.h"
#include<iostream>

using namespace std;

void circle::setRadius(float r)
{
    radius = r;
}

float circle::calArea()
{
    return 3.14 * radius *radius;
}
