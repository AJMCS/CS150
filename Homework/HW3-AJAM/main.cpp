#include <iostream>


using namespace std;


void addition(double arr[], double operand);
void subtraction(double arr[], double operand);
void multiplication(double arr[], double operand);
void division(double arr[], double operand);
void print(const double arr[]);
void menuDisplay();
const int size = 5;



int main() {
  double operand = 0;
  char choice = ' ';
  bool flag = true;
  double array[size];

  cout << "Please add 5 numbers to the array." << endl;
    
  for (int i = 0; i < size; i++) 
  {
    cin >> array[i];
  }

    
  do {
    menuDisplay();
    cin >> choice;

      if(choice != '+' && choice != '-' && choice != '*' && choice != '/')
      {
          cout << "\nInvalid selection: Please try again.\n" << endl << endl;
      }else
      {


    switch (choice) {

    case '+':
    cout << "What is the operand?" << endl;
    cin >> operand;
    addition(array, operand);

    cout << "Updated array: ";
    print(array);
    cout << endl << endl;
    break;

    case '-':
    cout << "What is the operand?" << endl;
    cin >> operand;
    subtraction(array, operand);

    cout << "Updated array: ";
    print(array);
    cout << endl << endl;
    break;

    case '*':
    cout << "What is the operand?" << endl;
    cin >> operand;
    multiplication(array, operand);

    cout << "Updated array: ";
    print(array);
    cout << endl << endl;
    break;

    case '/':
    cout << "What is the operand?" << endl;
    cin >> operand;
    division(array, operand);

    cout << "Updated array: ";
    print(array);
    cout << endl << endl;
    break;
    }


    cout << "would you like to perform another operation? (y/n)" << endl;

          
    do 
    {
        cin >> choice;
        choice = tolower(choice);

        if (choice != 'y' && choice != 'n') 
        {
            cout << "Invalid entry: Please try again." << endl;
        } else 
        {
            flag = false;
        }

    } while (flag);

    flag = (choice == 'n') ? false : true;
    }

  } while (flag);
}

void addition(double arr[], double operand) {
  for (int i = 0; i < size; i++) {
    arr[i] += operand;
  }
}

void subtraction(double arr[], double operand) {
  for (int i = 0; i < size; i++) {
    arr[i] -= operand;
  }
}

void multiplication(double arr[], double operand) {
  for (int i = 0; i < size; i++) {
    arr[i] *= operand;
  }
}

void division(double arr[], double operand) {
  for (int i = 0; i < size; i++) {
    arr[i] /= operand;
  }
}

void print(const double arr[]) {
  cout << "\n[\n";

  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      cout << arr[i] << endl;
    } else {
      cout << arr[i] << ",\n";
    }
  }
  cout << "]" << endl;
}

void menuDisplay() {

  cout << "------- Menu Display -------" << endl << endl;
  cout << "Addition: type \"+\"" << endl;
  cout << "subtraction: type \"-\"" << endl;
  cout << "Multiplication: type \"*\"" << endl;
  cout << "Division: type \"/\"" << endl << endl;
  cout << "Please make your selection: " << endl;
}