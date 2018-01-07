// 두 숫자를 인수로 받고 이 두 숫자 사이의 모든 소수를 표시하는 함수를 작성하십시오. 
// main()에서 이 함수를 호출하고 결과를 main()에서 출력하십시오.
#include <iostream>

using namespace std;


int *prime_number_list(int min, int max);
int prime_number(int num);

int main(){

  int small_value = 0, large_value = 0;

  cout << "INPUT prime number range" << endl;
  cout << "small : ";
  cin >> small_value;
  cout << "large : ";
  cin >> large_value;

  int *arr =  prime_number_list(small_value, large_value);

  cout << "prime number list\n";
  for(int i = 0; i < arr[0]; i++){

    cout << arr[i+1] << ' ' ;
  }
  cout << endl;

  return 0;
}


int *prime_number_list(int min, int max){   // 포인터 함수, 배열 반환 / 첫 공간은 배열 갯수 

  static int prime_arr[]={0,};
  int arr_num = 0;

  for(int i = min; i <= max; i++){

    if (prime_number(i)){

      prime_arr[++arr_num] = i;     

    }
   }

  prime_arr[0] = arr_num;

  return prime_arr;
}


int prime_number(int num){  //해당 수가 소수인지 아닌지 확인

  if(num < 2){  // 0, 1 drop
    return 0;
  }

  for(int i=2;i<(num/2 + 1);i++){

    if((num % i) == 0){
      
      return 0;         // 나누기 성공 - 소수 아님
    }
  }


  return num;             // 나누어 지지 않음 = 소수
}


/*
INPUT prime number range
small : 0
large : 100
prime number list
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/