#include <iostream>

using namespace std;

#define MAX_LINE 7

int main() {

  // 과제-2(1) : 아래 예시 처럼 A 모양 출력하기
  cout << "semple" << endl << endl; 
  cout << "      *\n" << "     * *\n" << "    *   *\n" << "   *     *\n" << "  *********\n" << " *         *\n" << "*           *\n" << endl << endl;

  cout << "A 모양 출력하기" << endl << endl; 

  int line_space = MAX_LINE -1 ;
  int mid_space = 0;
  int mid_line = ((double)4 / 7) *  MAX_LINE;

  for (int i = 0; i < MAX_LINE; i++) {

    mid_space = (i * 2) - 1;

    for (int j = 0; j < (MAX_LINE * 2) ; j++) {
      
      if(j == line_space){  // 앞쪽 *
        cout << "*";
        if(i == 0){
          cout << endl;     // 첫줄 줄바꿈 처리
        }
      }

      if(line_space > j){   //  앞쪽 공백
        cout << " ";
      }else{

        if(mid_space > 0){    

          if(i == mid_line){
            cout << "*";      // 중앙 막대부분 *
            mid_space--;
          }else{
            cout << " ";      // 중앙 공백처리
            mid_space--;
          }

        }else if(mid_space == 0 ){  // 중앙 공백 종료
          cout << "*" << endl;
          mid_space--;
        } 
        
      }
    }
    
    line_space--;
  }


  return 0;
}        