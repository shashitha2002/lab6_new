#include "circle.h"
#include <iostream>

using namespace std;

int main()
{
    circle r;
    float main_r;

    cout << "Enter radius";
    cin >> main_r;

    r.setRadius(main_r);

    cout << r.calArea();
}
