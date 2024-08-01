#include "BirdRecord.h"
#include "CatRecord.h"
#include "DogRecord.h"
#include "PetRecord.h"
#include <iostream>
using namespace std;

const int SIZE = 5;
int main() 

{
  //------ Initialize pet objects ------\\

  //Arrays
  PetRecord pets[SIZE];
  CatRecord cats[SIZE];
  DogRecord dogs[SIZE];
  BirdRecord birds[SIZE];
  
  //Pets Objects -- Each object calls each constructor
  PetRecord pet1;
  PetRecord pet2("Pet2");
  PetRecord pet3((int) 3);
  PetRecord pet4((double) 20);
  PetRecord pet5("Pet5", 3, 9);
  
  //Cats Objects -- Each object calls each constructor
  CatRecord cat1;
  CatRecord cat2("Cat2");
  CatRecord cat3((int) 3);
  CatRecord cat4((double) 12);
  CatRecord cat5("Cat5",12, 15, true);
  
  //Dogs Objects -- Each object calls each constructor
  DogRecord dog1;
  DogRecord dog2("Dog2");
  DogRecord dog3((int) 6);
  DogRecord dog4((double) 40);
  DogRecord dog5("Dog5", 6, 40, true);
  
  //Birds Objects -- Each object calls each constructor
  BirdRecord bird1;
  BirdRecord bird2("Bird2");
  BirdRecord bird3((int) 2);
  BirdRecord bird4((double) 5);
  BirdRecord bird5("Bird5", 2, 5, 14);


  //------ Fill Arrays ------\\

  //Pet Array
  pets[0] = pet1;
  pets[1] = pet2;
  pets[2] = pet3;
  pets[3] = pet4;
  pets[4] = pet5;

  //cat Array
  cats[0] = cat1;
  cats[1] = cat2;
  cats[2] = cat3;
  cats[3] = cat4;
  cats[4] = cat5;

  //Dog Array
  dogs[0] = dog1;
  dogs[1] = dog2;
  dogs[2] = dog3;
  dogs[3] = dog4;
  dogs[4] = dog5;

  //Bird Array
  birds[0] = bird1;
  birds[1] = bird2;
  birds[2] = bird3;
  birds[3] = bird4;
  birds[4] = bird5;


  //------ Print Function ------\\
  cout << "----------------------------------" << endl;
  cout << "--Print Method (Using all constructors)--\n" << endl;

  cout << "Pets\n" << endl;
  for(PetRecord pet : pets)
    {
      pet.print();
      cout << endl;
    }
  
  cout << endl << endl;
  
  cout << "Cats\n" << endl;
  for(CatRecord cat : cats)
  {
    cat.print();
    cout << endl;
  }

  cout << endl << endl;

  cout << "Dogs\n" << endl;
  for(DogRecord dog : dogs)
  {
    dog.print();
    cout << endl;
  }

  cout << endl << endl;

  cout << "Birds\n" << endl;
  for(BirdRecord bird : birds)
  {
    bird.print();
    cout << endl;
  }

  cout << endl << endl;

  
  //------ Get Function ------\\

  cout << "----------------------------------" << endl;
  cout << "\n--Get Methods--\n" << endl;

  cout << "PetRecord:\n" << endl;
  for(PetRecord pet : pets)
  {
    cout << "Name: " << pet.getName() << ", ";
    cout << "Age: " << pet.getAge() << ", ";
    cout << "Weight: " << pet.getWeight() << endl;
  }
  
  cout << endl << "CatRecord:\n" << endl;
  
  for(CatRecord cat : cats)
  {
    cout << "Name: " << cat.getName() << ", ";
    cout << "Age: " << cat.getAge() << ", ";
    cout << "Weight: " << cat.getWeight() << ", ";
    cout << "Has long hair?: " << cat.getHasLongHair() << endl;
  }

  cout << endl << "DogRecord:\n" << endl;
  
  for(DogRecord dog : dogs)
  {
    cout << "Name: " << dog.getName() << ", ";
    cout << "Age: " << dog.getAge() << ", ";
    cout << "Weight: " << dog.getWeight() << ", ";
    cout << "Has long hair?: " << dog.getHasLongHair() << endl;
  }

  cout << endl << "BirdRecord:\n" << endl;
  
  for(BirdRecord bird : birds)
  {
    cout << "Name: " << bird.getName() << ", ";
    cout << "Age: " << bird.getAge() << ", ";
    cout << "Weight: " << bird.getWeight() << ", ";
    cout << "Wingspan: " << bird.getWingspan() << endl;
  }

  cout << endl << endl;


  //------ Set function ------\\

  cout << "----------------------------------" << endl;
  cout << "\n--Set Methods--\n" << endl;
  
  //Pet Object
  pet1.setName("New Pet Name");
  pet1.setAge(1);
  pet1.setWeight(10);
  pet1.print();

  cout << endl;
  
  //Cat Object
  cat1.setName("New Cat Name");
  cat1.setAge(1);
  cat1.setWeight(10);
  cat1.setLongHair(true);
  cat1.print();

  cout << endl;
  
  //Dog Object
  dog1.setName("New Dog Name");
  dog1.setAge(1);
  dog1.setWeight(10);
  dog1.setLongHair(true);
  dog1.print();

  cout << endl;

  //Bird Object
  bird1.setName("New Bird Name");
  bird1.setAge(1);
  bird1.setWeight(10);
  bird1.setWingspan(10);
  bird1.print();

  cout << endl << endl;

  
  //------ Set All ------\\

  cout << "----------------------------------" << endl;
  cout << "\n--SetAll Method--\n" << endl;
  
  pet5.set("Pet5", 5, 50);
  cat5.set("Cat5", 5, 50, false);
  dog5.set("Dog5", 5, 50, false);
  bird5.set("Bird5", 5, 50, 5);

  pet5.print();
  cout << endl;
  
  cat5.print();
  cout << endl;
  
  dog5.print();
  cout << endl;
  
  bird5.print();
  cout << endl;
}