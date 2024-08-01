#include <iostream>

using namespace std;

int main()
{
    //Used data type double so we don't have to deal with truncation.
    double a;
    double b;

    //Prompt the user to input the first integer.
    cout << "Please input the first integer:" << endl;
    cin >> a;
    cout << endl;

    //Prompt the user to enter the second integer.
    cout << "Please input the second integer:" << endl;
    cin >> b;
    cout << endl;

    //Calculate the each arithmetic operator and print it to the console.
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

  return 0;
}