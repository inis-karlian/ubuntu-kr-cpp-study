#include<iostream>

using namespace std;

int main() {
    

  // 과제-1(1) : 구구단을 구해서 짝수만 출력하기

  cout << "구구단을 구해서 짝수만 출력하기" << endl; 

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (i * j % 2 == 0 ) {
        cout << i << " *" << j << " = " << i * j << endl;
      }
  }
  }

  
  // 과제-1(2) : 짝수*짝수의 결과만 출력하기
  
  cout << "짝수*짝수의 결과만 출력하기" << endl; 

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (i % 2 == 0 && j % 2 == 0) {
        cout << i << " *" << j << " = " << i * j << endl;
      }
    }
  }

  return 0;
}