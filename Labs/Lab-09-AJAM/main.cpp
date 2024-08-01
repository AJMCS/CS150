#include <iostream>

using namespace std;

int main()
{
    char flag = ' ';
    int input = 0;
    int evenCounter = 0;
    int oddCounter = 0;

    do
    {
        cout << "\nEnter an integer value:\n" << endl;
        cin >> input;

        if (input % 2 == 0) {
          cout << input << " is even.\n" << endl;
          evenCounter++;

        } else if (input % 2 == 1 && input != -1) {
          cout << input << " is odd.\n" << endl;
          oddCounter++;
        }

        cout << "Would you like to enter another integer? (y/n)\n";
        cin >> flag;
        flag = tolower(flag);
        
    }while(flag == 'y');

        cout << "\nEven numbers: " << evenCounter << endl << endl;
        cout << "Odd numbers: "  << oddCounter << endl;

}