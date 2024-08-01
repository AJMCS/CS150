#ifndef DogRecord
#include "DogRecord.h"
#include <iostream>

using namespace std;


//------ Constructors ------\\

DogRecord::DogRecord() 
{
  name = "Unknown";
  age = 0;
  weight = 0;
  hasLongHair = false;
}

DogRecord::DogRecord(string initialName) 
{
  name = initialName;
  age = 0;
  weight = 0;
  hasLongHair = false;
}

DogRecord::DogRecord(int initialAge) 
{
    if (initialAge < 0)
    {
        cout << "Error: Negative weight.";
        exit(1);
    }
    else
    {
        age = initialAge;
    }
        
    name = "Unknown";
    weight = 0;
    hasLongHair = false;
}

DogRecord::DogRecord(double initialWeight) 
{
  
    if (initialWeight < 0)
    {
        cout << "Error: Negative weight.";
        exit(1);
    }
    else
    {
        weight = initialWeight;
    }
    
    name = "Unknown";
    age = 0;
    hasLongHair = false;
}

DogRecord::DogRecord(string initialName, int initialAge, double initialWeight,
                     bool hasLongHair) 
{
    if ((initialAge < 0) || (initialWeight < 0))
    {
        cout << "Error: Negative age or weight.";
        exit(1);
    }
    else
    {
        age = initialAge;
        weight = initialWeight;
    }
    
    name = initialName;
    hasLongHair = false;
}


//------ Setters ------\\

void DogRecord::setName(string newName) 
{ 
    name = newName; 
}

void DogRecord::setAge(int newAge) 
{ 
    if (newAge < 0)
    {
        cout << "Error: Negative weight.";
        exit(1);
    }
    else
    {
        age = newAge;
    }
}

void DogRecord::setWeight(double newWeight) 
{ 
    if (newWeight < 0)
    {
        cout << "Error: Negative weight.";
        exit(1);
    }
    else
    {
        weight = newWeight;
    } 
}

void DogRecord::setLongHair(bool newHasLongHair) \
{
  hasLongHair = newHasLongHair;
}

void DogRecord::set(string newName, int newAge, double newWeight, bool newHasLongHair)
{
    if ((newAge < 0) || (newWeight < 0))
        {
            cout << "Error: Negative age or weight.";
            exit(1);
        }
        else
        {
            age = newAge;
            weight = newWeight;
        }

        name = newName;
        hasLongHair = newHasLongHair;
}


//------ Getters ------\\

string DogRecord::getName() 
{ 
    return name; 
}

int DogRecord::getAge() 
{ 
    return age; 
}

double DogRecord::getWeight() 
{ 
    return weight; 
}

string DogRecord::getHasLongHair() 
{ 
    return boolToString(hasLongHair); 
}


//------ Helper Methods ------\\

string DogRecord::boolToString(bool hasLongHair)
{
    if(hasLongHair == true)
    {
        return "True";
    }

    return "False";
}

void DogRecord::print() 
{
    cout <<  "Name: " << name + ", Age: " << age << " years"
           << "\nWeight: " << weight << "lbs\nHas Long Hair?:" << getHasLongHair() << endl;
}
#endif