#include <iostream>
#include <typeinfo>

using namespace std;


template<typename t>
void out(t data) {
  cout << typeid(t).name() << " : " << data << endl;
  //cout << data << endl;
}

int main() {
  out(10);
  out(3.14);
  out("a");

  return 0;
}