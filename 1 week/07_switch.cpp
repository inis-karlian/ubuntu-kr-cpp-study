#include<iostream>

using namespace std;

enum theater {
  theater_1 = 1,
  theater_2,
  theater_3
};

int main() {
  int a=0;
  cout << "enter number(1-3) : ";
  cin >> a;


switch(a){
  case theater_1 :
    cout << " You chose 1" <<endl;
    break;
  case theater_2 :
    cout << " You chose 2" <<endl;
    break;
  case theater_3 :
    cout << " You chose 3" <<endl;
    break;
  default : 
    cout << " error " <<endl;
    break;
}


  return 0;
}