/*
 - You are modifying this code so that it sorts from lowest to highest, instead of highest to lowest.

 - You only need to make ONE CHANGE!  If the change you made does not work, undo it and try something else.

 - If the original code gets messed up, copy/paste from the "Bubble Sort Example Code" from https://replit.com/@lacastillo/Example-bSort or the link on Canvas, or use the "History" option to revert to the first revision of this lab.
*/

//Bubble Sort example code

#include <iostream>

using namespace std;

const int ARR_SIZE = 10;

void bSort(double ar[]);

int main()
{

  double nums[ARR_SIZE];

  for(int i =0; i < ARR_SIZE; i++)
    {
      cout << "Enter value " << i+1 << " of " << ARR_SIZE << " to be sorted: ";
      cin >> nums[i];
      cout << endl;
    }

  cout << endl << endl << "Sorting values." << endl << endl;

  bSort(nums);

  cout << "Sorted values are: ";
  for(int i = 0; i < ARR_SIZE; i++)
    {
      cout << endl << nums[i];
    }

  cout << endl << endl;

  return 0;
}

void bSort(double ar[]) //bubble sort
{

  double temp = 0;
  bool flag = false;

  do
    {
      flag = false; //lower flag at start of new pass through array

      for(int i = 0; i < ARR_SIZE - 1; i++) //for each pair of elements in array
	{
	if(ar[i] > ar[i+1]) //if out of order (NOT including equal!)
	  {
	    //swap
	    temp = ar[i];
	    ar[i] = ar[i+1];
	    ar[i+1] = temp;
	  
	    //raise flag
	    flag = true;
	  } //close if
     
	} //close for
    }while(flag == true); //close do-while (repeat if flag is raised)
}//close function
