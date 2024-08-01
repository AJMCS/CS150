#ifndef CATRECORD_H
#define CATRECORD_H
#include "PetRecord.h"

using namespace std;
class CatRecord : public PetRecord {
private:
    string name;
    int age;       // in years
    double weight; // in pounds
    bool hasLongHair;

public:
    void print();
    CatRecord(string initialName, int initialAge, double initialWeight, bool hasLongHair);
    void set(string newName, int newAge, double newWeight, bool newHasLongHair);
    CatRecord(string initialName);
    void setName(string newName);
    CatRecord(int initialAge);
    void setAge(int newAge);
    CatRecord(double initialWeight);
    void setWeight(double newWeight);
    void setLongHair(bool hasLongHair);
    CatRecord();
    string getName();
    int getAge();
    double getWeight();
    string getHasLongHair();
    string boolToString(bool hasLongHair);
};
#endif