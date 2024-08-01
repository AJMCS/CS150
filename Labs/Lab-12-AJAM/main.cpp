#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;

    string input = " ";
    int value = 0;
    int sum = 0;

    cout << "Please enter the name of the file you would like to open.\n";
    cin >> input;

    fin.open(input);
    cout << endl;

    if(!fin.is_open())
    {
        cout << "The file you tried to open does not exist.\n";
    }else
    {
        while(!fin.eof())
            {
                fin >> value;
                
                cout << "Read " << value << " from file.\n\n";
                
                sum += value;
            }
        
        fin.close();
        cout << "The total sum is: " << sum << ".\n";
    }

    
    
}