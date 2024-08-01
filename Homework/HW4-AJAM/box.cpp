#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "box.h"

using namespace std;



//------ Constructors ------\\

box::box()
{
  length = 0;
  width = 0;
  height = 0;
  weight = 0;
  address = "";
  city = "";
  state = "XX";
  zipCode = 0;
}

box::box(double initialLength, double initialWidth, double initialHeight,
         double initialWeight, string initialAddress, string initialCity, string initialState, int initialZipCode) 
{
  setLength(initialLength);
  setWidth(initialWidth);
  setHeight(initialHeight);
  setWeight(initialWeight);
  setAddress(initialAddress);
  setCity(initialCity);
  setState(initialState);
  setZipCode(initialZipCode);
}


//------ Getters ------\\

double box::getLength() { return length; }
double box::getWidth() { return width; }
double box::getHeight() { return height; }
double box::getWeight() { return weight; }
string box::getAddress() { return address; }
string box::getCity() { return city; }
string box::getState() { return state; }
int box::getZipCode() { return zipCode; }


//------ Setters ------\\

void box::setLength(double newLength)
{
  if(newLength < 0)
  {
    length = 0;
    throw invalid_argument("Length cannot be less than zero.");
  }
  else
  {
    length = newLength;
  }
}

void box::setWidth(double newWidth)
{
  if(newWidth < 0)
  {
    width = 0;
    throw invalid_argument("Width cannot be less than zero.");
  }
  else
  {
    
    width = newWidth;
  }
}

void box::setHeight(double newHeight)
{
  if(newHeight < 0)
  {
    height = 0;
    throw invalid_argument("Height cannot be less than zero.");
  }
  else
  {
    height = newHeight;
  }
}

void box::setWeight(double newWeight)
{
  if(newWeight < 0)
  {
    weight = 0;
    throw invalid_argument("Weight must be greater than 0.");
  }
  else
  {
    weight = newWeight;
  }
}

void box::setAddress(string newAddress)
{
  
    address = newAddress;
  
}

void box::setCity(string newCity)
{

    city = newCity;

}

void box::setState(string newState)
{
  if(newState.length() != 2)
  {
    state = "XX";
    throw invalid_argument("State must be abbreviated to exactly 2 characters long.\ninvalid argument: " + newState);
  }
  else
  {
    char char1 = toupper(newState.at(0));
    char char2 = toupper(newState.at(1));

    state += char1;
    state += char2;
  }
    

}

void box::setZipCode(int newZipCode)
{

  if(newZipCode < 10000 || newZipCode > 99999)
  {
    zipCode = 0;
    
    string error = "Zip Code must be 5 digits long with no leading zeros.\nInvalid argument: ";
    error += to_string(newZipCode);
    
    throw invalid_argument(error);
  }
  else
  {
    zipCode = newZipCode;
  }

}


//------ Methods ------\\

double box::calcShippingPrice(double length, double width, double height, double weight)
{
  return (((length + width + height) * 0.5) + (weight * 1));
}

void box::print()
{
  cout << "Dimensions: " << length << " x " << width << " x " << height << "\nweight: " << weight << " lbs\n" << endl;
  cout << "Address:\n\n" << address << endl << city << ", " << state << " " << zipCode << endl;
  cout << setprecision(2) << "\nShipping price: $" << calcShippingPrice(length, width, height, weight) << endl;
}