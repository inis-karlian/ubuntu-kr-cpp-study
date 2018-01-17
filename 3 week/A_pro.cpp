// 과제-1 : 1부터 1000까지 랜덤으로 난수를 100개 생성해서 이진탐색하기 - STL

#include <iostream>
#include <time.h>
#include <cstdlib>
#include<algorithm>

using namespace std;

int list_out(int bae[]);


int main(){

  int randomList[100]={0,};
  int find_value = 0;
  srand((unsigned int)time(0));


  for(int i=0; i<100; i++){                                                // 생성
    randomList[i] = ((rand() % 1000) + 1);    // 0~999 + 1 ?
  }

  cout << "생성된 리스트" << endl;
  list_out(randomList);

  sort(randomList, randomList+100);                                        //정렬

  cout << "정렬된 리스트" << endl;
  list_out(randomList);                                                    // 정렬된 난수 출력

    
  cout << "있는지 확인할 값 : "; 
  cin >> find_value;

  cout << ((binary_search(randomList, randomList + 100, find_value))?"있음":"없음")  << endl;   // 이진탐색 후 있는지 없는지 3항연산자로 간단히 출력
  

  return 0;
}



int list_out(int bae[]){                    // 난수 출력

  for(int i=0; i<100; i++){                                                     
    cout << bae[i] << ((i<=(100-2))?" ":"\n\n"); 
  }

  return 0;
}