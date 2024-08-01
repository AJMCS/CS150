#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Instantiate all variables
    string name = "";
    
    double salesTax = 0;
    double subtotal = 0;

    string item1 = "";
    double item1Price = 0;

    string item2 = "";
    double item2Price = 0;

    string item3 = "";
    double item3Price = 0;


    //Prompt user for name
    cout << "What is your name?" << endl;
    getline(cin, name);

    //Greet the user
    cout << "Hello, " << name << endl << endl;

    

    //Prompt user for item 1
    cout << "What is the name of the first item you are purchasing?" << endl << endl;
    getline(cin, item1);
    cout << "What is the price of the item you are purchasing?" << endl << endl;
    cin >> item1Price;
    cin.ignore();

    //Prompt user for item 2
    cout << "What is the name of the second item you are purchasing?" << endl << endl;
    getline(cin, item2);
    cout << "What is the price of the item you are purchasing?" << endl << endl;
    cin >> item2Price;
    cin.ignore();
    
    //Prompt user for item 3
    cout << "What is the name of the third item you are purchasing?" << endl << endl;
    getline(cin, item3);
    cout << "What is the price of the item you are purchasing?" << endl << endl;
    cin >> item3Price;
    cin.ignore();

    //Get sales tax, and convert it into a decimal
    cout << "What is the sales tax?" << endl << endl;
    cin >> salesTax;
    cin.ignore();


    //Start tprinting formatted receipt
    cout << left << setw(30) << fixed << "******************************" << endl << endl;

    //Format print each item
    cout << left << setw(20) << item1 << setw(1)  << "$" << right << setw(9) << setprecision(2) << fixed << item1Price << endl << endl;
    cout << left << setw(20) << item2 << setw(1)  << "$" << right << setw(9) << setprecision(2) << fixed << item2Price << endl << endl;
    cout << left << setw(20) << item3 << setw(1)  << "$" << right << setw(9) << setprecision(2) << fixed << item3Price << endl << endl;
    cout << endl;

    //calculate the subtotal as the some of all items
    cout << left << setw(20) << "Subtotal" << setw(1)  << "$" << right << setw(9) << setprecision(2) << fixed << item1Price + item2Price + item3Price << endl << endl;
    
    //calculate the tax as the sum of all item times the decimal conversion of the tax percentage
    cout << left << setw(20) << "Sales Tax" << setw(1)  << "$" << right << setw(9) << setprecision(2) << fixed << (item1Price + item2Price + item3Price) * salesTax << endl << endl;

    //Calculcate the total as the sum of the sales tax and the sum of the items
    cout << left << setw(20) << "Total" << setw(1)  << "$" << right << setw(9) << setprecision(2) << fixed << ((item1Price + item2Price + item3Price) * salesTax) + (item1Price + item2Price + item3Price) << endl << endl;

    //More formatting starts
    cout << left << setw(30) << fixed << "******************************" << endl << endl;

    cout << "Thank you for shopping with us" << endl << endl;

    cout << left << setw(30) << fixed << "******************************" << endl << endl;
    
}