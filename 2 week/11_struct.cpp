#include <iostream>
#include <cstring>
//#include <string>

using namespace std;
#define size 64
struct make_item
{
  char name[size];
  char country[size];
  int price;
  char os[size];
};

int main() {

  int country_n = 0;
  make_item item;

  strcpy(item.name, "good-laptop");

  cout << "enter your country : ";
  cin >> item.country;

  strcat(item.name, item.country);

  item.price = 700000;


  cout << "name : " <<"-"<< item.name << endl;
  cout << "price : " << item.price << endl;
  cout << "os : "<< endl; // os pre-install = en, os none = ko

  return 0;
}