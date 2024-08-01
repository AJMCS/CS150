#include <iostream>
#include <cmath>

using namespace std;

void metrics(double num1, double num2, double num3, double num4, double &minimumValue, double &maximumValue, double &averageValue)
{
    
    minimumValue = num1;
    maximumValue = num1;

    (minimumValue < num2) ? : minimumValue = num2;
    (minimumValue < num3) ? : minimumValue = num3;
    (minimumValue < num4) ? : minimumValue = num4;

    (maximumValue > num2) ? : maximumValue = num2;
    (maximumValue > num3) ? : maximumValue = num3;
    (maximumValue > num4) ? : maximumValue = num4;
    
    
    averageValue = (num1 + num2 + num3 + num4) / 4.0;
}

int main()
{
    double minimumValue = 0;
    double maximumValue = 0;
    double averageValue = 0;
    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    double num4 = 0;

    cout << "Number 1: ";
    cin >> num1;
    cout << endl;
    
    cout << "Number 2: ";
    cin >> num2;
    cout << endl;
    
    cout << "Number 3: ";
    cin >> num3;
    cout << endl;

    cout << "Number 4: ";
    cin >> num4;
    cout << endl;

    
    metrics(num1, num2, num3, num4, minimumValue, maximumValue, averageValue);

    
    cout << endl << "**************" << endl << endl;

    
    cout << "Minimum: " << minimumValue << endl << endl;
    cout << "Maximum: " << maximumValue << endl << endl;
    cout << "Average: " << averageValue << endl << endl;
}