#include<iostream>

using namespace std;
#define PI 3.141592

int main() {
  double calc_num;
  int rad = 17;
  
  cout << "rad : ";
  cin >> rad;

  calc_num = 2 * PI * rad;

  cout << calc_num << endl;

  return 0;
}