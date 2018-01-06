#include<iostream>

using namespace std;

int main() {
  int myscore = 1000;

  int **number;

  *number = &myscore;


  cout << **number << endl;
  return 0;
}