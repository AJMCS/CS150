#ifndef DOGRECORD_H
#define DOGRECORD_H
#include "PetRecord.h"

using namespace std;

class DogRecord : public PetRecord
{

private:
  string name;
  int age;       // in years
  double weight; // in pounds
  bool hasLongHair;

public:
    void print();
    DogRecord(string initialName, int initialAge, double initialWeight, bool hasLongHair);
    void set(string newName, int newAge, double newWeight, bool newHasLongHair);
    DogRecord(string initialName);
    void setName(string newName);
    DogRecord(int initialAge);
    void setAge(int newAge);
    DogRecord(double initialWeight);
    void setWeight(double newWeight);
    void setLongHair(bool hasLongHair);
    DogRecord();
    string getName();
    int getAge();
    double getWeight();
    string getHasLongHair();
    string boolToString(bool hasLongHair);
};
#endif