#include<iostream>

using namespace std;

int main() {
 

  //과제-2(2) : 사이즈를 입력받아 크기를 조절할 수 있는 A 모양 만들기
 
  cout << "\n\n사이즈 입력받는 A 모양 출력하기" << endl << endl; 

  int line_num = 7;

  cout << "A모양 세로 줄 수 : "; 
  cin >> line_num;
  cout << endl; 
  
  int line_space = line_num -1 ;
  int mid_space = 0;
  int mid_line = ((double)4 / 7) *  line_num;


  for (int i = 0; i < line_num; i++) {

    mid_space = (i * 2) - 1;

    for (int j = 0; j < (line_num * 2) ; j++) {
      
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
            cout << "*";      // 중앙 막대부분 
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