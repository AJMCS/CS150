#include <iostream>
#include <iomanip>

using namespace std;


const double PI = 3.14159;


class Circle
{
private:
double radius;


public:
Circle();
Circle(double radius);
void setRadius(double radius);
double getRadius();
double calcArea();
};


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


int main()
{
    double tempRadius = 0;
    Circle c1, c2(4), c3(-1);

    cout << "empty constructor: " << c1.getRadius() << endl;
    cout << "constructor with radius parameter (valid entry): " << c2.getRadius() << endl;
    cout << "constructor with radius parameter (invalid entry): " << c3.getRadius() << endl << endl;


    c2.setRadius(-4);
    cout << "set radius to -4 (invalid entry): " << c2.getRadius() << endl;
    


    cout << "Please enter the radius for circle 1: " << endl;
    cin >> tempRadius;
    c1.setRadius(tempRadius);
    

    cout << "Please enter the radius for circle 2: " << endl;
    cin >> tempRadius;
    c2.setRadius(tempRadius);

    cout << setprecision(4) <<  "The radius of circle 1 is " << c1.getRadius() << " and the area is " << c1.calcArea() << ".\n\n";

    cout << setprecision(4) << "The radius of circle 2 is " << c2.getRadius() << " and the area is " << c2.calcArea() << ".\n";

}