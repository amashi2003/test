#include <iostream>

using namespace std;
int main(void) {

  int variable_1, account_balance, invoices,x=1;
  int counter = 1;
  int result = 100+200;
  float num  = 2.5;
  float num2 = .4;
  int value = 3E8; //or 3e8
  float value2 = 6.6E-4;  
  
  int i;
  float a;

  i = 10 / 4;
  a = 10.0 / 4.0;
  
  //the exponent (the value after the "E") has to be an integer.
  //the base (the value in front of the "E") may or may not be an integer.

  x=x+1;

  cout << "It's me, your first program\n";
  cout << x;
  cout <<"\n";
  cout << value;
  cout <<"\n";
  cout << a;
  cout <<"\n";
  cout << i;
  cout <<"\n";
  cout << value2;
  
  //This is a comment  - line comment
  /*This is also       
  a comment            - block comment */ 
  /*Another way*/
  
  return 0;
  
  
  
}


