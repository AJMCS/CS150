#include <fstream>;
#include <iomanip>
#include <iostream>;

using namespace std;

void printReceipt(int quarters, int dimes, int nickels, int pennies,
                  double cost, double wallet, ofstream &fout) 
{
    //Print to receipt Log
    fout << "YOUR RECEIPT" << endl;
    fout << "*************************" << endl;
    fout << "Item Cost: " << cost << endl << endl;
    fout << "Money Recieved: " << wallet << endl << endl;

  if (quarters == 0 && dimes == 0 && nickels == 0 && pennies == 0) 
  {
    fout << "Change: No Change" << endl;
  } else 
  {
    fout << "Change:" << endl;
    fout << "Quarters: " << quarters << endl;
    fout << "Dimes: " << dimes << endl;
    fout << "Nickels: " << nickels << endl;
    fout << "Pennies: " << pennies << endl << endl;
  }

    //Print to console
    cout << "YOUR RECEIPT" << endl;
    cout << "*************************" << endl;
    cout << "Item Cost: " << cost << endl << endl;
    cout << "Money Recieved: " << wallet << endl << endl;
    
    if (quarters == 0 && dimes == 0 && nickels == 0 && pennies == 0) 
    {
        cout << "Change: No Change" << endl;
    } else 
    {
        cout << "Change:" << endl;
        cout << "Quarters: " << quarters << endl;
        cout << "Dimes: " << dimes << endl;
        cout << "Nickels: " << nickels << endl;
        cout << "Pennies: " << pennies << endl << endl;
    }
}

int main() {
    double cost;
    double wallet;
    double change;
    int quarters;
    int nickels;
    int dimes;
    int pennies;
    bool flag = true;
    char exit = ' ';

    ofstream fout;
    fout.open("receipt.txt");
    
    do {
        cout << "Please enter the cost of the item:" << endl;
        cin >> cost;

        cout << "Please enter the amount of money entered:" << endl;
        cin >> wallet;
        cout << endl << endl;

    if (cost > wallet) {
        cout << "The amount of money you entered is less than the cost of the "
              "item you wish to purchase. Please try again." << endl << endl;
    } else 
    {

      change = (wallet - cost) * 100;

      // Find # of each coin and assign change to remainder
      quarters = (int)change / 25;
      change = (int)change % 25;
      
      dimes = (int)change / 10;
      change = (int)change % 10;

      nickels = (int)change / 5;
      change = (int)change % 5;

      pennies = change;

    
    printReceipt(quarters, dimes, nickels, pennies, cost, wallet, fout);
        
      
    }

    cout << "Do you want to make another purchase?" << endl;

    do 
    {
        cin >> exit;
        exit = toupper(exit);

        if (exit != 'Y' && exit != 'N') 
        {
            cout << "Invalid entry: Please enter either 'Y' for yes or 'N' for no."
             << endl;
        }

    } while (exit != 'Y' && exit != 'N');

  } while (exit == 'Y');
}
