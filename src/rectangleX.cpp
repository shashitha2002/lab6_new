#include "rectangleX.h"
#include<iostream>

using namespace std;

void rectangle::setLength(float l)
{
    length = l;
}

void rectangle::setWidth(float w)
{
    width = w;
}

float rectangle::calArea()
{
    return length * width;
}



