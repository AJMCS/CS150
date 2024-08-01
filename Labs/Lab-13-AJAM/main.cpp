#include <iostream>

using namespace std;

int const SIZE = 1000;

int main()
{
    
    double array[SIZE];
    int input;

    for(int i = 0; i < SIZE; i++)
        {
            array[i] = i * 7.5;
        }

    cout << "Please the index of the data you'd like to retrieve. (0 through 999)\n";

    cin >> input;

    if(input > SIZE - 1 || input < 0)
    {
        cout << "Sorry, you entered a number that is out of bounds. Please enter a number that is between 0 and 999." << endl;
    }else
    {
        cout << "The value in array slot " << input << " is " << array[input] << "." << endl;
    }    

    

    
    


}