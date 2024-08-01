#include <iostream>

using namespace std;

const int size = 10;

int seqSearch(int array[], int key);


int main() {
  int key = 0;
  int searchIndex = 0;
  int arr[] = {12, -7, 3, 17, 42, 6, 18, -15, 0, 1};

  cout << "Enter a number to search for: ";
  cin >> key;

  searchIndex = seqSearch(arr, key);
  
  if(searchIndex >= 0)
  {
    cout << "The key was found in slot " << searchIndex << endl;
  }
  else
  {
    cout << "The key was not found." << endl;
  }
}



int seqSearch(int array[], int key) 
{

  for (int i = 0; i < size; i++) 
  {
    if (array[i] == key) 
    {
      return i;
    }
  }
  
  return -1;
  
}