#include <iostream>
#include "PetRecord.h"
#include "BirdRecord.h"
#include "CatRecord.h"
#include "DogRecord.h"


using namespace std;


int main()
{
    PetRecord* pet;
    int choice = 0;

    cout << "Which animal would you like?\n 1-dog, 2-cat, 3-bird, 4-pet." << endl;
    cin >> choice;

    switch(choice)
        {
            case 1:
            pet = new DogRecord();
            break;

            case 2:
            pet = new CatRecord();
            break;

            case 3:
            pet = new BirdRecord();
            break;

            case 4:
            pet = new PetRecord();
            break;
        }

    pet->print();
    delete pet;
}