#include <iostream>
using namespace std;

int main(){
  int num=0;

  cout<<"Enter a number: ";
  cin>>num;

  if (num>100 || num<-100)
  {
    cout<<"The number you entered is not in range " << endl;
  }else
  {
    cout<<"The number you entered is in range" << endl;
  }
  
  
  if (num%2==0)
  {
    if (num%3==0 && num%5==0 )
    {
      cout<<"Is divisible by 3&5 ";
    }
    else{
      cout<<"Isn't divisible by 3&5";
    }
  }

  else{
    if (num<0){
      cout<<"negative";
    }
    else{
      cout<<"positive";
    }
    
  }

}