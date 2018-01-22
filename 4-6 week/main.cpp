/* 
* 최종 프로젝트
* https://github.com/minwook-shin/ubuntu-korea-cpp-study-book/blob/master/24.final-proj.md
* 
*/
#include "main.h"


int main() {

  char choose = 'c';
  list student_list;

  string name;
  int student_num; 
  int score;        


  cout << "성적 관리 프로그램" << endl;
  
  
  student_list.create("hello", 111, 95);
  student_list.create("world", 222, 85);
    
  while(choose != 'q'){
  
    cout << "|입력 : 1 |출력 : 2 |수정 : 3 |삭제 : 4 |정렬 : 5 |변환 : 6 | 종료 : q " << endl << ">> ";
    cin >> choose;

    switch(choose){
      case '1': 
        cout << "학번 : ";  cin >> student_num;
        cout << endl << "이름 : ";  cin >> name;
        cout << endl << "점수 : ";  cin >> score;  cout << endl; 
        student_list.create(name, student_num, score);
        break;
      case '2':
        student_list.display();
        break;
      case '3':
        break;        
      case '4':
        break;       
      case '5':
        break;        
      case '6':
        break;
      default :
        break;
    }

  }

  student_list.del_all(); 
  student_list.display();


  return 0;
}
