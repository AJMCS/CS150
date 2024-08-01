#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int input = 0;
    ofstream fout("triangle.txt");
    

    
    do
    {
        cout << "Please enter the number of stars for you triangle.\n";
        cin >> input;
        cout << endl << endl;

        if(input >50 || input < 1)
        {
            cout << "Sorry, your entry is not within the bound of this program.\n\n\n Please enter a value for the height between 1 and 50.\n";
        }
        
    }while(input > 50 || input < 1);
    

    for(int i=1; i <= input; i++)
        {
            for(int j=1; j <= i; j++)
                {
                    fout << "*";
                }
            fout << endl;
        }

    for(int i = 1; i <= input; i++)
        {
            for(int j = input; j > i; j--)
                {
                    fout << "*";
                }
            fout << endl;
        }

    fout.close();
}