#ifndef PETRECORD_H
#define PETRECORD_H

#include <iostream>

using namespace std;
class PetRecord
{
    private:
		string name;
   		int age;//in years
  		double weight;//in pounds
  	
  	public:
  		virtual void print();
    	PetRecord(string initialName, int initialAge, double initialWeight);
    	void set(string newName, int newAge, double newWeight);
    	PetRecord(string initialName);
    	void setName(string newName);
    	PetRecord(int initialAge);
    	void setAge(int newAge);
    	PetRecord(double initialWeight);
    	void setWeight(double newWeight);
    	PetRecord();
    	string getName();
    	int getAge();
    	double getWeight();
};
#endif