#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int rows = 4;
    int columns = 7;
    int data = 0;
    string day = "";

    int vanSum = 0;
    int strawSum = 0;
    int chocSum = 0;
    int total = 0;
    
    int analytics[rows][columns];
    
    for(int i = 0; i < columns; i++)
        {
            
            switch(i)
                {
                    case 0:
                    day = "Sunday";
                    break;
                    
                    case 1:
                    day = "Monday";
                    break;
                    
                    case 2:
                    day = "Tueday";
                    break;
                    
                    case 3:
                    day = "Wednesday";
                    break;
                    
                    case 4:
                    day = "Thursday";
                    break;
                    
                    case 5:
                    day = "Friday";
                    break;
                    
                    case 6:
                    day = "Saturday";
                    break;
                }   

            cout << "For " << day << ":\n How many vanilla sold?" << endl;
            cin >> data;
            analytics[0][i] = data;
            vanSum += data;

            cout << "How many strawberry sold?" << endl;
            cin >> data;
            analytics[1][i] = data;
            strawSum += data;

            cout << "How many chocolate sold?" << endl;
            cin >> data;
            analytics[2][i] = data; 
            chocSum += data;
        }

    cout << "                  ";

    for(int k = 0; k < columns; k++)
    {
        

        switch(k)
            {
                case 0:
                day = "Sunday";
                break;

                case 1:
                day = "Monday";
                break;

                case 2:
                day = "Tuesday";
                break;

                case 3:
                day = "Wednesday";
                break;

                case 4:
                day = "Thursday";
                break;

                case 5:
                day = "Friday";
                break;

                case 6:
                day = "Saturday";
                break;
            }
        
        cout << setw(11) << day;
    }
        
        

    cout << endl;
    cout << "                -----------------------------------------------------------------------------";
    cout << endl;

    for (int i = 0; i < rows; i++) 
    {

        switch(i)
            {
                case 0:
                day = "Vanilla";
                break;

                case 1:
                day = "Strawberry";
                break;

                case 2:
                day = "Chocolate";
                break;

                case 3:
                day = "Totals";
            }

        cout << setw(12) << day << "  |";
        

        for (int j = 0; j < columns; j++) 
        {
            cout << setw(11) << analytics[i][j];
        }

        cout << endl << endl;
    }

    cout << endl << endl;

    cout << "Total Vanilla sold: " << vanSum << endl;
    cout << "Total Strawberry sold: " << strawSum << endl;
    cout << "Total Chocolate sold: " << chocSum << endl;

    cout << "Grand Total sold: " << vanSum + strawSum + chocSum << endl;
    
    
}