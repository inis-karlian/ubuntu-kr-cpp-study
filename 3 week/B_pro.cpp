// 사용자의 새로운 파일인 NOTES.TXT에 1에서 100까지의 숫자를 쓰는 C++ 프로그램을 작성하십시오.

#include <iostream>
#include <stdio.h>
#include <fstream>


using namespace std;


int main(void){

  ofstream file("NOTES.TXT");

  for(int i=1; i<=100; i++){

    file<<i<<endl;

  }
  

  file.close();
}

