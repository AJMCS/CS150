#include "CatRecord.h"
#include <iostream>

using namespace std;


//------ Constructors ------\\

CatRecord::CatRecord() {
  name = "Unknown";
  age = 0;
  weight = 0;
  hasLongHair = false;
}

CatRecord::CatRecord(string initialName) {
  name = initialName;
  age = 0;
  weight = 0;
  hasLongHair = false;
}

CatRecord::CatRecord(int initialAge) {
  name = "Unknown";
  age = initialAge;
  weight = 0;
  hasLongHair = false;
}

CatRecord::CatRecord(double initialWeight) {
  name = "Unknown";
  age = 0;
  weight = initialWeight;
  hasLongHair = false;
}

CatRecord::CatRecord(string initialName, int initialAge, double initialWeight,
                     bool hasLongHair) {
  if ((initialAge < 0) || (initialWeight < 0)) {
    cout << "Error: Negative age or weight.";
    exit(1);
  } else {
    age = initialAge;
    weight = initialWeight;
  }

  name = initialName;
  hasLongHair = false;
}


//------ Setters ------\\

void CatRecord::setName(string newName) { name = newName; }

void CatRecord::setAge(int newAge) {
  if (newAge < 0) {
    cout << "Error: Negative weight.";
    exit(1);
  } else {
    age = newAge;
  }
}

void CatRecord::setWeight(double newWeight) {
  if (newWeight < 0) {
    cout << "Error: Negative weight.";
    exit(1);
  } else {
    weight = newWeight;
  }
}

void CatRecord::setLongHair(bool newHasLongHair) {
  hasLongHair = newHasLongHair;
}

void CatRecord::set(string newName, int newAge, double newWeight,
                    bool newHasLongHair) {
  if ((newAge < 0) || (newWeight < 0)) {
    cout << "Error: Negative age or weight.";
    exit(1);
  } else {
    age = newAge;
    weight = newWeight;
  }

  name = newName;
  hasLongHair = newHasLongHair;
}


//------ Getters ------\\

string CatRecord::getName() { return name; }
int CatRecord::getAge() { return age; }
double CatRecord::getWeight() { return weight; }
string CatRecord::getHasLongHair() { return boolToString(hasLongHair); }


//------ Helper Methods ------\\

string CatRecord::boolToString(bool hasLongHair)
{
    if(hasLongHair == true)
    {
        return "true";
    }

    return "false";
}

void CatRecord::print() {
  cout << "Name: " << name + ", Age: " << age << " years"
       << "\nWeight: " << weight << "lbs\nHas Long Hair?: " << getHasLongHair() << endl;
}