#ifndef CIRCLE_H
#define CIRCLE_H

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

#endif