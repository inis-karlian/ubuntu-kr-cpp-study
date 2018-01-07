// 두 개의 정수 인수가 매개변수로 전달되는 zero_small() 함수를 작성하고 두 숫자 중 작은 숫자를 0으로 설정하십시오. 
// main()에서 이 함수를 호출하고 결과를 main()에서 출력하십시오.
#include <iostream>

using namespace std;

int zero_small(int *num_a, int *num_b);

int main(){

  int num_a, num_b;

  cout << "INPUT number " << endl;
  cout << "a : ";
  cin >> num_a;
  cout << "b : ";
  cin >> num_b;

  zero_small(&num_a, &num_b);



  cout << "INPUT number " << endl;
  cout << "a : " << num_a << endl;
  cout << "b : " << num_b << endl;


  return 0;
}


int zero_small(int *num_a, int *num_b){

  if(*num_a > *num_b){
    *num_b = 0;
  }else{
    *num_a = 0;
  }

  return 0;
}
