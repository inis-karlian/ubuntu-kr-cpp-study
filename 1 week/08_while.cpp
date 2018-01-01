#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int AI_random(void);
int win_lose(int you, int ai);

int main() {
  int your_choice = 0, AI_choice = 0, result = 0;
  srand((unsigned int)time(0));


  while (true) {
     
    cout << "가위바위보(가위 :1,바위:2,보:3) / 종료 : 0 : ";

    cin >> your_choice;

    if(your_choice == 0){
      cout  << "가위바위보를 종료합니다." << endl;  
      break;
    }else if(your_choice < 0 || your_choice > 3 ){
      cout  << your_choice << " : 0~3을 입력해주세요!" << endl;  
      continue;
    }

    cout << " 당신의 선택 : " << your_choice <<endl;
    
    AI_choice = AI_random();
    cout << " AI의 선택 : " << AI_choice <<endl;

    result = win_lose(your_choice ,AI_choice);

    if(result == 1){
      cout << " 승리 " << endl;
    }else if(result == 2){
      cout << " 무승부 " << endl;
    }else{
      cout << " 패배 " << endl;
    }
  }

  return 0;
}



int AI_random(void){

  double percent;

  percent = (rand() % 300);

  if(percent >= 200){
    return 1;
  }else if(percent >= 100){
    return 2;
  }else{
    return 3;
  }
}

int win_lose(int you, int ai){
  // win : 1 / draw : 2 / lose : 3 

  int value = 0;

  value = you - ai;

  if(value == 1 || value == -2){    // win
    return 1;
  }else if(you == ai){     // draw  
    return 2;
  }else{                   // lose
    return 3;
  }
}