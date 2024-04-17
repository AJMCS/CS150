#include <iostream>;

using namespace std;

int main() 
{
    //Instantiate all needed variables for the correct data types
    char flag = ' ';
    char grade = ' ';

    //Ask the user if they are taking a class
    cout << "Are you taking a class this semester? (y/n)\n";

    cin >> flag;
    flag = tolower(flag);

    //Output to user if they entry they made is valid or not.
    if (flag != 'y' && flag != 'n') 
    {
        cout << "\nYour input is invalid. Please try again and enter either \'y\' or \'n\'\n";
        exit(1);

    //If they are not taking a class, thank the user for using the system and end the program
    } else if (flag == 'n') 
    {
        cout << "\nThank you for using out system!";
        exit(1);

    //Continue with the program.
    }else

    //Ask the user what grade they have in the class.
    //Store that value in the variable 'grade'.
    cout << "Sweet! What is your letter grade in that class?\n";
    cin >> grade;
    grade = toupper(grade);

    //Use a switch statment to execute different code depending on the value of grade as specified int he rubric.
    switch(grade)
        {
            case 'A':
            case 'B':
            cout << "\nGreat Job!\n";
            break;

            case 'C':
            cout << "\nYou're doing alright\n";
            break;

            case 'D':
            case 'F':
            cout << "\nYou can improve\n";
            break;

            //Set default value in case the user enters a value that is not expected.
            default:
            cout << "\nSorry, you typed an unexpected answer. Please try to again with a valid grade letter.\n";
            
        }

}