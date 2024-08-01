#include "BirdRecord.h"
#include <iostream>

using namespace std;


//------ Constructors ------\\

BirdRecord::BirdRecord() {
  name = "Unknown";
  age = 0;
  weight = 0;
  wingspan = 0;
}

BirdRecord::BirdRecord(string initialName) {
  name = initialName;
  age = 0;
  weight = 0;
  wingspan = 0;
}
BirdRecord::BirdRecord(int initialAge) {
  if (initialAge < 0) {
    cout << "Error: Negative weight.";
    exit(1);
  } else {
    age = initialAge;
  }

  name = "Unknown";
  weight = 0;
  wingspan = 0;
}
BirdRecord::BirdRecord(double initialWeight) {
  if (initialWeight < 0) {
    cout << "Error: Negative weight.";
    exit(1);
  } else {
    weight = initialWeight;
  }

  name = "Unknown";
  age = 0;
  wingspan = 0;
}

BirdRecord::BirdRecord(string initialName, int initialAge, double initialWeight,
                       int initialWingspan) {
  if ((initialAge < 0) || (initialWeight < 0)) {
    cout << "Error: Negative age or weight.";
    exit(1);
  } else {
    age = initialAge;
    weight = initialWeight;
  }

  name = initialName;
  wingspan = 0;
}


//------ Setters ------\\

void BirdRecord::setName(string newName) { name = newName; }

void BirdRecord::setAge(int newAge) {
  if (newAge < 0) {
    cout << "Error: Negative weight.";
    exit(1);
  } else {
    age = newAge;
  }
}

void BirdRecord::setWeight(double newWeight) {
  if (newWeight < 0) {
    cout << "Error: Negative weight.";
    exit(1);
  } else {
    weight = newWeight;
  }
}

void BirdRecord::setWingspan(int newWingspan) { wingspan = newWingspan; }

void BirdRecord::set(string newName, int newAge, double newWeight,
                     int newWingspan) {
  if ((newAge < 0) || (newWeight < 0)) {
    cout << "Error: Negative age or weight.";
    exit(1);
  } else {
    age = newAge;
    weight = newWeight;
  }

  name = newName;
  wingspan = newWingspan;
}


//------ Getters ------\\

string BirdRecord::getName() { return name; }
int BirdRecord::getAge() { return age; }
double BirdRecord::getWeight() { return weight; }
int BirdRecord::getWingspan() { return wingspan; }


//------ Helper Methods ------\\

void BirdRecord::print() {
    cout <<  "Name: " << name + ", Age: " << age << " years"
           << "\nWeight: " << weight << "lbs, Wingspan:" << wingspan << endl;
}