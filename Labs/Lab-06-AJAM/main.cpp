#include <iostream>

using namespace std;

int main() 
{
    //Instantiate the variable 
    int num = 0;

    //Ask user for a number between 1 and 10
    cout << "Please enter a number between 1 and 10\n" << endl;
    cin >> num;

    //Make a switch statement
    //Have one case statement for each relavant value for the user prompt
    //Default
    switch(num)
    {
        case 1:

            cout << "One\n";
            break;

        case 2:

            cout<< "Two\n";
            break;

        case 3:

            cout << "Three\n";
            break;

        case 4:

            cout << "Four\n";
            break;

        case 5:

            cout << "Five\n";
            break;

        case 6:

            cout << "Six\n";
            break;

        case 7:

            cout << "Seven\n";
            break;

        case 8:

            cout << "Eight\n";
            break;

        case 9:

            cout << "Nine\n";
            break;

        case 10:

            cout << "Ten\n";
            break;

        default:

        cout << "The value you have entered is not within the required range.";
    }



}