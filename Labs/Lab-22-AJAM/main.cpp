#include <iostream>

using namespace std;



class Circle
{
public:
const double PI = 3.14;
double radius;
double calcArea();
};


double Circle::calcArea()
{
    return PI * radius * radius;
}



int main()
{

    Circle c1, c2;

    cout << "Please enter the radius for circle 1: " << endl;
    cin >> c1.radius;
    
    cout << "Please enter the radius for circle 2: " << endl;
    cin >> c2.radius;

    cout << "The radius of circle 1 is " << c1.radius << " and the area is " << c1.calcArea() << ".\n\n";

    cout << "The radius of circle 2 is " << c2.radius << " and the area is " << c2.calcArea() << ".\n";  
    
}