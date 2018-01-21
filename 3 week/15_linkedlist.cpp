#include<iostream>

using namespace std;

struct sutuent
{
  int name;
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
      cout <<"|"<< temp->name << "|" ;
      temp = temp->next;
    }
    cout << endl;
  }


  void create(int value) {
    sutuent *temp = new sutuent;
    temp->name = value;
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


    sutuent *temp = new sutuent;
    sutuent *del = new sutuent;
    temp = head;
    del = temp;

    while(temp!=NULL){
      del = temp;
      temp = temp->next;
      del->name = NULL;   // name : int
      del->next = NULL;
    }

    // end 1
    temp->name = NULL;    // name : int
    temp->next = NULL;

    head = NULL;
    tail = NULL;


    cout << endl;

  }
  
};


int main() {
  list a;
  a.create(5);
  a.create(10);
  a.create(15);
  a.create(20);
  a.display();
  a.del_all(); //ASSIGNMENT "del_all()"
  a.display();

  return 0;
}