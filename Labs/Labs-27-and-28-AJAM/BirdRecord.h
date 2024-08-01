#ifndef BIRDRECORD_H
#define BIRDRECORD_H
#include "PetRecord.h"

using namespace std;

class BirdRecord : public PetRecord
{
    private:
        string name;
        int age;//in years
        double weight;//in pounds
        int wingspan;//in inches

    public:
        void print();
        BirdRecord(string initialName, int initialAge, double initialWeight, int initialWingspan);
        void set(string newName, int newAge, double newWeight, int NewWingspan);
        BirdRecord(string initialName);
        void setName(string newName);
        BirdRecord(int initialAge);
        void setAge(int newAge);
        BirdRecord(double initialWeight);
        void setWeight(double newWeight);
        void setWingspan(int newWingspan);
        BirdRecord();
        string getName();
        int getAge();
        double getWeight(); 
        int getWingspan();
};
#endif