#include "circle.h"
#include <iostream>

using namespace std;


const double PI = 3.14159;

Circle::Circle()
{
    radius = 0;
}


Circle::Circle(double passedRadius)
{
    radius = 0;
    setRadius(passedRadius);
}


void Circle::setRadius(double passedRadius)
{
    if(passedRadius >= 0)
    {
        radius = passedRadius;
    }
    else
    {
        cout << "Radius must be greater than or equal to zero.\n(If initialized, radius = 0.\nIf attempted to set radius to new value, radius = old value\n\n";
    }
}


double Circle::getRadius()
{
    return radius;
}


double Circle::calcArea()
{
    return PI * radius * radius;
}