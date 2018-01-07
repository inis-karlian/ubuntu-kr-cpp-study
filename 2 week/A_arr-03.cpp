// 배열의 가장 큰 요소와 가장 작은 요소를 찾는 프로그램을 작성하십시오.
#include <iostream>
//#include <array>
#include <time.h>
#include <cstdlib>
#include<algorithm>

using namespace std;

#define ARRAY_NUMBER 20     // size of

int find_large_to_small(int arr[], int arr_num);

int main(){
  int arr[ARRAY_NUMBER] = {0,};

  srand((unsigned int)time(0));
  int rand_value;

  cout << "ARRAY NUMBER" << endl;

  for(int i=0;i<ARRAY_NUMBER;i++){      // 난수 배열 생성  
    rand_value = rand() % 100 + 1;
    arr[i] = rand_value;
    cout << rand_value <<' ';
  }   
  cout << endl;


  find_large_to_small(arr, ARRAY_NUMBER);

  return 0;
}

int find_large_to_small(int arr[], int arr_num){

  sort(arr,arr + arr_num);                      //정렬

  cout << "small : "<< arr[0] << endl;
  cout << "large : "<< arr[arr_num-1] << endl;

  return 0;
}