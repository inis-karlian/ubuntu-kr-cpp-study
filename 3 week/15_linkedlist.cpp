#include<iostream>

using namespace std;

struct node
{
  int data;
  node *next;
};


class list {
  private:
    node *head, *tail;

  public:
    list() {
      head = NULL;
      tail = NULL;
    }

  void display() {
    node *temp = new node;
    temp = head;
    while (temp!=NULL)
    {
      cout <<"|"<< temp->data << "|" ;
      temp = temp->next;
    }
    cout << endl;
  }


  void create(int value) {
    node *temp = new node;
    temp->data = value;
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
  //  head = NULL;
  //  tail = NULL;

    node *temp = new node;
    node *del = new node;
    temp = head;
    del = temp;

    while(temp!=NULL){
      del = temp;
      temp = temp->next;
      del->data = NULL;   // data : int
      del->next = NULL;
    }

    // end 1
    temp->data = NULL;    // data : int
    temp->next = NULL;

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