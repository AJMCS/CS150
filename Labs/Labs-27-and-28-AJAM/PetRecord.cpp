#include <iostream>
#include "PetRecord.h"

using namespace std;

    void PetRecord::print( )
    {
        cout <<  "Name: " << name + " Age: " << age << " years"
                       << "\nWeight: " << weight << "lbs" << endl;
    }

    PetRecord::PetRecord(string initialName, int initialAge, 
                                          double initialWeight)
    {
        name = initialName;
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
    }

    void PetRecord::set(string newName, int newAge, double newWeight)
    {
        name = newName;
        if ((newAge < 0) || (newWeight < 0))
        {
            cout << "Error: Negative age or weight." << endl;
            exit(1);
        }
        else
        {
            age = newAge;
            weight = newWeight;
        }
    }

     PetRecord::PetRecord(string initialName)
    {
        name = initialName;
        age = 0;
        weight = 0;
    } 

    void PetRecord::setName(string newName)
    {
        name = newName; 
    }

    PetRecord::PetRecord(int initialAge)
    {
        name = "No name yet.";
        weight = 0;
        if (initialAge < 0)
        {
            cout << "Error: Negative age." << endl;
            exit(1);
        }
        else
            age = initialAge;
    }

    void PetRecord::setAge(int newAge)
    {
        if (newAge < 0)
        {
            cout << "Error: Negative age." << endl;
            exit(1);
        }
        else
            age = newAge;
    }

    PetRecord::PetRecord(double initialWeight)
    {
        name = "No name yet";
        age = 0;
        if (initialWeight < 0)
        {
            cout << "Error: Negative weight." <<endl;
            exit(1);
        }
        else
            weight = initialWeight;
    }

    void PetRecord::setWeight(double newWeight)
    {
        if (newWeight < 0)
        {
            cout << "Error: Negative weight." << endl;
            exit(1);
        }
        else
            weight = newWeight;
    }

    PetRecord::PetRecord( )
    {
        name = "No name yet.";
        age = 0;
        weight = 0; 
    }

    string PetRecord::getName( )
    {
        return name;
    }

    int PetRecord::getAge( )
    {
        return age;
    }

    double PetRecord::getWeight( )
    {
        return weight;
    }

