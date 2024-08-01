#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string input;
    ofstream fout("sentence.txt");

    cout << "Please enter a sentence you'd like to save.\n";
    getline(cin, input);
    

    fout << input;

    fout.close();
}