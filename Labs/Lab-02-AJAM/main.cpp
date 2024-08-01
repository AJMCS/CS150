#include <iostream>

using namespace std;

int main()
{
    cout << boolalpha;

    //Instatiating variables
    bool major = false;
    char punctuation = 'a';
    int num1 = 0;
    int num2 = 0;
    string name = "";

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << endl << "Hello, " << name << "!" << endl << endl;
    //Prompt user for major question
    cout << "Are you a CS Major?" << endl;
    cout << "Type 1 for yes, type 0 for no." << endl;
    cin >> major;
    cout << endl;

    //Prompt user for favorite punctuation mark
    cout << "What is your favorite punctuation mark?" << endl;
    cout << "Type it below:" << endl;
    cin >> punctuation;
    cout << endl;

    // Prompt user to enter first integer
    cout << "Please enter an integer below:" << endl;
    cin >> num1;
    cout << endl;

    //Prompt userto enter second integer
    cout << "Please enter a second integer value below:" << endl;
    cin >> num2;
    cout << endl << endl << endl;

    //Just formatting for clean/ readable console statement
    cout << "____________________________" << endl << endl;

    //Print  out all result from collected data.
    cout << "CS Major: " << major << endl << endl;

    cout << "Your favorite punctuation mark is: " << punctuation << endl << endl;
    
    cout << "The first integer divided by the second integer is: " << endl << endl;
    
    cout << num1 / num2 << "  (Integer Division)" << endl << endl;

    cout << " OR " << endl << endl;
   
    cout << (double)num1 / num2;
    
}