#include <iostream>

using namespace std;

int main(void){

  int variable = 50;

  int *pointer;
  *pointer = 100;

  cout << variable << endl;
  cout << &variable << endl<<endl;

  cout << &pointer << endl;
  cout << pointer << endl;
  cout << *pointer << endl<<endl<<endl;

  *pointer = variable;
  
  cout << &pointer << endl;
  cout << pointer << endl;
  cout << *pointer << endl<<endl;


  pointer = &variable;
  
  cout << &pointer << endl;
  cout << pointer << endl;
  cout << *pointer << endl;

  variable = 60;

  cout << &pointer << endl;
  cout << pointer << endl;
  cout << *pointer << endl;

 return 0;
}