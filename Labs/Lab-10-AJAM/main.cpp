#include <iomanip>
#include <iostream>

using namespace std;

int main() 
{

    cout << "    ";
    
    for(int k = 1; k <= 9; k++)
    {
        cout << setw(5) << k;
    }

    cout << endl;
    cout << "     --------------------------------------------";
    cout << endl;
    
    for (int i = 1; i <= 9; i++) 
    {
        cout << i << "  |";
        
        for (int j = 1; j <= 9; j++) 
        {
        cout << setw(5) << i * j;
        }
        
        cout << endl << endl;
    }
}