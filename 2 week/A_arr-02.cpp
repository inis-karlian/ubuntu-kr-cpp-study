// 정수 1차원 배열의 첫 번째 요소와 마지막 요소를 바꾸는 프로그램을 작성하십시오.
#include <iostream>
//#include <array>
#include <time.h>
#include <cstdlib>

using namespace std;

#define ARRAY_NUMBER 20     // size of

int array_change(int arr[], int arr_num);

int main(){
  int arr[ARRAY_NUMBER] = {0,};

  srand((unsigned int)time(0));
  int rand_value;

  cout << "ARRAY NUMBER" << endl;

  for(int i=0;i<ARRAY_NUMBER;i++){      
    rand_value = rand() % 100 + 1;
    arr[i] = rand_value;
    cout << rand_value <<' ';
  }   
  cout << endl;


  array_change(arr, ARRAY_NUMBER);


  for(int i=0;i<ARRAY_NUMBER;i++){      
    cout << arr[i] <<' ';
  }   
  cout << endl;

  return 0;
}

int array_change(int arr[], int arr_num){

  int tmp;

  tmp = arr[0];
  arr[0] = arr[arr_num-1];
  arr[arr_num-1] = tmp;


  return 0;
}
