#include "score_manage.h"

void list::display() {
  sutuent *temp = new sutuent;
  temp = head;
  while (temp!=NULL)
  {
    cout <<"|"<< temp->student_num << "|" << temp->name << "|" << temp->score << "|" << temp->student_num << "|" << endl;
    temp = temp->next;
  }
  cout << endl;
}

void list::create(string new_name, int new_student_num, int new_score) {

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

void list::del_all(){
  head = NULL;
  tail = NULL;
}

