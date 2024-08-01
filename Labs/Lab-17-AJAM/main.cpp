#include <iomanip>
#include <iostream>

using namespace std;

double dist(double num1, double num2) {
    
    double distance = num1 - num2;
    
    if(distance < 0)
    {
        distance *= -1;
    }
    return distance;
 
}

int main() {

  double num1 = 0;
  double num2 = 0;

  cout << "Enter first number: " << endl;
  cin >> num1;

  cout << "Enter first number: " << endl;
  cin >> num2;

  cout << setprecision(3) << "The distance between " << num1 << " and " << num2
       << " is: " << dist(num1, num2) << "." << endl;
}