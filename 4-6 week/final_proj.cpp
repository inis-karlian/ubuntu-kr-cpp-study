/* 
최종 프로젝트
https://github.com/minwook-shin/ubuntu-korea-cpp-study-book/blob/master/additional_assignment.md
*/

#include <iostream>
#include <string>

using namespace std;


struct sutuent
{
  string name;      // 이름
  int student_num;  // 학번
  int score;        // 점수
  char score_rank;  // 학점
  sutuent *next;
};


class list {
  private:
    sutuent *head, *tail;

  public:
    list() {
      head = NULL;
      tail = NULL;
    }

  void display() {
    sutuent *temp = new sutuent;
    temp = head;
    while (temp!=NULL)
    {
      cout <<"|"<< temp->student_num << "|" << temp->name << "|" << temp->score << "|" << temp->student_num << "|" << endl;
      temp = temp->next;
    }
    cout << endl;
  }


  void create(string new_name, int new_student_num, int new_score) {

    sutuent *temp = new sutuent;
    temp->name = new_name;
    temp->student_num = new_student_num;
    temp->score = new_score;
    temp->score_rank = 'F';   // add

    temp->next = NULL;
    if (head == NULL) {
      head = temp;
      tail = temp;
      temp = NULL;

    }else {
      tail->next = temp;
      tail = temp;
    }
  }


  void del_all(){
    head = NULL;
    tail = NULL;
  }
  
};




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
