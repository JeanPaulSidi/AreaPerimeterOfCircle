#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << endl;
    cout << "*****************************" << endl;
    cout << "      Jean Paul Sidibe       " << endl;
    cout << "*****************************" << endl;

    return 0;
}