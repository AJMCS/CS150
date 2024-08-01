#include <iostream>

using namespace std;

int main() {
  int input = 0;
  int oddCounter = 0;
  int evenCounter = 0;

  while (input >= 0) {
    cout << "Please enter a positive number below, or -1 to quit." << endl;
    cin >> input;

    if (input % 2 == 0) {
      cout << input << " is even." << endl;
      evenCounter++;

    } else if (input != -1) {
      cout << input << " is odd." << endl;
      oddCounter++;
    }
  }

  if (evenCounter > 0 || oddCounter > 0) {
    cout << "Even numbers: " << evenCounter << endl;
    cout << "Odd numbers: "  <<oddCounter << endl;

  } else {
    cout << "No numbers were entered." << endl;
  }
}
