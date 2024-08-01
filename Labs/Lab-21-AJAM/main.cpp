#include <iostream>

using namespace std;

struct student
{
    int studentID;
    double gpa;
    string fullName;
    int units;

};

int main()
{
    student student1;
    student student2;

    bool flag = true;
    int tempInt = 0;
    double tempDouble = 0;


    
    //------ STUDENT 1 ------
        
    cout << "What is the first student's name? " << endl;
    getline(cin, student1.fullName);

    do
        {
            cout << "How many units are they taking? " << endl;
            cin >> tempInt;

            if(tempInt < 0)
            {
                cout << "Invalid input: Please try again." << endl;
            }else
            {
                student1.units = tempInt;
                flag = false;
            }
        }while(flag);
        flag = true;
    
    
            

    do
    {
        cout << "What is their student ID? " << endl;
        cin >> tempInt;
        
        if(tempInt > 9999 || tempInt < 1000)
        {
            cout << "Invalid input: Please try again." << endl;
        }else
        {
            student1.studentID = tempInt;
            flag = false;
        }
    }while(flag);
    flag = true; 


    do
    {
        cout << "What is their GPA? " << endl;
        cin >> tempDouble;
        cin.ignore();

        if(tempDouble < 0 || tempDouble > 4)
        {
            cout << "Invalid input: Please try again." << endl;
        }else
        {
            student1.gpa = tempDouble;
            flag = false;
        }
        
    }while(flag);
    flag = true;
    


    
    //------ STUDENT 2 --------
    
    cout << "What is the second student's name? " << endl;
    getline(cin, student2.fullName);

    cout << "How many units are they taking? " << endl;
    cin >> student2.units;


    do
    {
        cout << "What is their student ID? " << endl;
        cin >> tempInt;

        if(tempInt > 9999 || tempInt < 1000)
        {
            cout << "Invalid input: Please try again." << endl;
        }else
        {
            student2.studentID = tempInt;
            flag = false;
        }
    }while(flag);
    flag = true; 


    do
    {
        cout << "What is their GPA? " << endl;
        cin >> tempDouble;

        if(tempDouble < 0 || tempDouble > 4)
        {
            cout << "Invalid input: Please try again." << endl;
        }else
        {
            student2.gpa = tempDouble;
            flag = false;
        }

    }while(flag);
    flag = true;
    

    //------ PRINT STATEMENT -----
    
    cout << "Student 1: " << endl << endl << "Name: " << student1.fullName << endl << "Student ID: " << student1.studentID << endl << "Units: " << student1.units << endl << "GPA: " << student1.gpa << endl << endl;

    cout << "Student 2: " << endl << endl << "Name: " << student2.fullName << endl << "Student ID: " << student2.studentID << endl << "Units: " << student2.units << endl << "GPA: " << student2.gpa << endl << endl;
}