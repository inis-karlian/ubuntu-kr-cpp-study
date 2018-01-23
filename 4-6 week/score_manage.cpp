#include "score_manage.h"

char list::make_rank(int score){
  char rank = 'F';

  switch(score/10){
    case 10:
      rank = 'A';
      break;
    case 9:
      rank = 'A';
      break;
    case 8:
      rank = 'B';
      break;
    case 7:
      rank = 'C';
      break;
    case 6:
      rank = 'D';
      break;
    default :
      rank = 'F';
  }
  

  return rank;
}

void list::display() {
  sutuent *temp = new sutuent;
  temp = head;
  int list_num = 1;

  cout <<"|"<< "번호" << "\t|"<< "학번" << "\t|" << "이름" << "\t|" << "점수" << "\t|" << "학점" << "\t|" << endl;
  while (temp!=NULL){
    cout << "|"<< list_num << "\t|"<< temp->student_num << "\t|" << temp->name << "\t|" << temp->score << "\t|" << temp->score_rank << "\t|" << endl;
    temp = temp->next;
    list_num++;
  }
  cout << endl;
}

void list::create(int new_student_num, string new_name, int new_score) {

  sutuent *temp = new sutuent;
  temp->name = new_name;
  temp->student_num = new_student_num;
  temp->score = new_score;
  temp->score_rank = make_rank(new_score);   

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


void list::retouch(int list_num){
  sutuent *temp = new sutuent;
  temp = head;
  int student_new_num = 1;
  if(list_num < 1){
    cout << "> error : 해당 번호의 학생이 없습니다" <<endl;
    return;
  }

  for(int i=1; i<list_num; i++){
    if(temp->next==NULL){
      cout << "> error : 해당 번호의 학생이 없습니다" <<endl;
      return;
    }
    temp = temp->next;
  }
  cout << "수정할 학생의 정보" << endl;
  cout << "|"<< list_num << " : "<< temp->student_num << "\t|" << temp->name << "\t|" << temp->score << "\t|" << temp->score_rank << "\t|" << endl;
  
  cout << "수정할 학생의 정보를 입력해 주세요 (학번에 0 을 입력시 취소됩니다.)"<< endl; 
  cout << "학번 : ";  cin >> student_new_num;


  if(student_new_num == 0){
    cout << "> 취소하였습니다"<< endl << endl; 
    return;
  }
  temp->student_num = student_new_num; 
  cout << "이름 : ";  cin >> temp->name;
  cout << "점수 : ";  cin >> temp->score; 
  temp->score_rank = make_rank(temp->score);   
  
}


void list::del_all(){
  head = NULL;
  tail = NULL;
}

