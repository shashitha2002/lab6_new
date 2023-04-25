#include "circle.h"
#include "rectangleX.h"
#include "square.h"
#include <iostream>


using namespace std;

int main()
{
    circle r;
    rectangle t;
    square sqr;

    float tot = 18 * 10;
    float Area = 0;

    float main_l;
    float main_w;
    float main_r;
    float main_s_length;

    cout << "Enter radius : ";
    cin >> main_r;

    cout << "Enter width : ";
    cin >> main_w;

    cout << "Enter length : ";
    cin >> main_l;

    cout <<"Enter square length : ";
    cin >> main_s_length;

    r.setRadius(main_r);
    t.setLength(main_l);
    t.setWidth(main_w);
    sqr.setlength(main_s_length);

    Area = tot - (r.calArea() + t.calArea() + sqr.calArea());

    cout << "Area = " <<Area <<endl;

    return 0;
}
