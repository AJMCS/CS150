#ifndef BOX_H
#define BOX_H

#include <iostream>

using namespace std;
class box 
{
    private:
        double length;
        double width;
        double height;
        double weight;
        string address;
        string city;
        string state;
        int zipCode;

    public:
        box();
        box(double initialLength, double initialWidth, double initialHeight, double initialWeight, string initialAddress, string initialCty, string initialState, int initialZipCode);
    
        double getLength();
        double getWidth();
        double getHeight();
        double getWeight();
        string getAddress();
        string getCity();
        string getState();
        int getZipCode();
    
        void setLength(double newLength);
        void setWidth(double newWidth);
        void setHeight(double newHeight);
        void setWeight(double newWeight);
        void setAddress(string newAddress);
        void setCity(string newCity);
        void setState(string newState);
        void setZipCode(int newZipCode);
    
        double calcShippingPrice(double length, double width, double height, double weight);
        void print();
};
#endif