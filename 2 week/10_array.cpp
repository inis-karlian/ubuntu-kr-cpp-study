#include <iostream>
#include <array>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
  /*  array<int, 10> arr = {1, 2, 3, 4, 5};       // g++ -std=c++11 -o 10_array 10_array.cpp

  auto it = arr.begin();

  while (it != arr.end()) {
    cout << *it << endl;
    it++;
  }*/

  srand((unsigned int)time(0));

  int arr[10][10] = {0,};
  int rand_value;


  for(int i=0;i<10;i++){      // make mine

    for(int j=0;j<10;j++){
      rand_value = rand() % 100 + 1;
      (rand_value < 40) ? (arr[i][j] = 1) : (arr[i][j] = 0);
    }
  }   
  

  for(int i=0;i<10;i++){      // draw

    for(int j=0;j<10;j++){
      cout << '[' << (arr[i][j]?'o':' ') << ']'; 
    }
    cout<< endl;
  }





  return 0;
}

