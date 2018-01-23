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
  int list_num;     


  cout << "성적 관리 프로그램" << endl;
  
  
  student_list.create(111, "hello", 95);
  student_list.create(222, "world", 85);
  student_list.create(333, "hello2", 75);
  student_list.create(444, "world2", 65); 
  student_list.create(555, "lauto", 10); 

  while(choose != 'q'){
  
    cout << "|입력 : 1 |출력 : 2 |수정 : 3 |삭제 : 4 |정렬 : 5 |변환 : 6 | 종료 : q " << endl << ">> ";
    cin >> choose;

    switch(choose){
      case '1': 
        cout << "학번 : ";  cin >> student_num;
        cout << "이름 : ";  cin >> name;
        cout << "점수 : ";  cin >> score;  cout << endl; 
        student_list.create(student_num, name, score);
        break;
      case '2':
        student_list.display();
        break;
      case '3':
        cout << "수정할 학생의 리스트 번호를 입력하세요 : ";  cin >> list_num;
        student_list.retouch(list_num);
        break;        
      case '4':
        cout << " 다 지울거야!! 부분삭제 추가좀...." << endl;
        student_list.del_all();
        break;       
      case '5':
        cout << "정렬을 시작합니다.... \n\n아...\n안되잖아?\n\n안돼.....!!" << endl;
        break;        
      case '6':
        cout << "자동으로 됩니다..." << endl;
        break;
      default :
        break;
    }

  }

  student_list.del_all(); 
  student_list.display();


  return 0;
}
