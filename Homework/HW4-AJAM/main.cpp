#include <iostream>
#include <iomanip>
#include "box.h"

using namespace std;

const int SIZE = 3;

int main()
{
    double userLength = 0;
    double userWidth = 0;
    double userHeight = 0;
    double userWeight = 0;
    string userAddress = "";
    int userZipCode = 0;
    string userCity = "";
    string userState = "";
    double totalPrice = 0;

    box arr[SIZE];

    /*
    box b1;

    cout << "len:";
    cin >> userLength;
    b1.setLength(userLength);

    cout << "Wid:";
    cin >> userWidth;
    b1.setWidth(userWidth);

    cout << "hght:";
    cin >> userHeight;
    b1.setHeight(userHeight);

    cout << "wght:";
    cin >> userWeight;
    b1.setWeight(userWeight);

    cout << "zip:";
    cin >> userZipCode;
    b1.setZipCode(userZipCode);

    cout << "State:";
    cin >> userState;
    b1.setState(userState);
*/
    
/*
    box box(-1,0,0,0,"Address", "City", "CA", 10000); 
    box box(0,-1,0,0,"Address", "City", "CA", 10000); 
    box box(0,0,-1,0,"Address", "City", "CA", 10000); 
    box box(0,0,0,-1,"Address", "City", "CA", 10000); 
    box box(0,0,0,0,"Address", "City", "C", 10000); //State Error: Min
    box box(0,0,0,0,"Address", "City", "CAL", 10000); //State Error: Max
    box box(0,0,0,0,"Address", "City", "CA", 9999); //ZipCode Error: Min
    box box(0,0,0,0,"Address", "City", "CA", 100000); //ZipCode Error: Max
*/

    box box(10,10,10,5,"Address", "City", "ca", 10000);

//-----Testing All Getter Methods------\\
    
    cout << "Box:\n" << "length: " << box.getLength() << "\nwidth: " << box.getWidth() << "\nheight: " << box.getHeight() << "\nWeight: " << box.getWeight() << "\naddress: " << box.getAddress() << "\nCity: " << box.getCity() << "\nState: " << box.getState() << "\nzip: " << box.getZipCode() << "\nshipping price: " << box.calcShippingPrice(box.getLength(), box.getWidth(), box.getHeight(), box.getWeight()) << endl;

    cout << "\n\nprint: " << endl;
    box.print();

    exit(1);









    










    
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Shipping box " << i+1 <<  ":\n" << endl;

        cout << "What is the length?" << endl;
        cin >> userLength;

        cout << "What is the width?" << endl;
        cin >> userWidth;

        cout << "What is the height?" << endl;
        cin >> userHeight;

        cout << "What is the weight?" << endl;
        cin >> userWeight;

        cin.ignore();
        cout << "What is the address?" << endl;
        getline(cin, userAddress);

        cout << "City?" << endl;
        getline(cin,userCity);

        cout << "State? (abbreviated)" << endl;
        cin >> userState;
        
        cout << "Zip Code?" << endl;
        cin >> userZipCode;
        

        try
        {
            class box temp(userLength, userWidth, userHeight, userWeight, userAddress, userCity, userState, userZipCode);

            totalPrice += temp.calcShippingPrice(userLength, userWidth, userHeight, userWeight);

            arr[i] = temp;
        }
        catch(invalid_argument e)
        {
            e.what();
        }
    }
    
    for(class box b : arr)
        {
            b.print();
        }
    
    cout << setprecision(2) <<  "\nGrand total: " << totalPrice  << endl;
};