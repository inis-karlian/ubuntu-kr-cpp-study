// 1차원 정수 배열의 합과 평균을 찾는 프로그램을 작성하십시오.
#include <iostream>
//#include <array>
#include <time.h>
#include <cstdlib>

using namespace std;

#define ARRAY_NUMBER 20            // size of

int array_add(int arr[], int arr_num);
int array_average(int arr[], int arr_num);

int main(){
  int arr[ARRAY_NUMBER] = {0,};

  srand((unsigned int)time(0));
  int rand_value;

  int arr_add_value = 0, arr_avg_value = 0;

  cout << "ARRAY NUMBER" << endl;

  for(int i=0;i<ARRAY_NUMBER;i++){      
    rand_value = rand() % 100 + 1;
    arr[i] = rand_value;
    cout << rand_value <<' ';
  }   

  cout << endl;

  arr_add_value = array_add(arr, ARRAY_NUMBER);
  arr_avg_value = array_average(arr, ARRAY_NUMBER);

  cout << "ADD : "<< arr_add_value << endl;
  cout << "AVG : "<< arr_avg_value << endl;
  return 0;
}

int array_add(int arr[], int arr_num){

  int num = 0;

  for(int i = 0; i < arr_num; i++){
    num = num + arr[i];
  }
    
  return num;
}

int array_average(int arr[], int arr_num){

  int num = 0;

  for(int i = 0; i < arr_num; i++){
    num = num + arr[i];
  }

  num = num / arr_num;

  return num;
}





/*
ARRAY NUMBER
79 48 98 56 94 89 62 81 50 83 78 8 100 36 50 35 1 39 77 94
ADD : 1258
AVG : 62
*/