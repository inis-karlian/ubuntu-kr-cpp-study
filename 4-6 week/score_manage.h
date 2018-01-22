#include <string>
#include <iostream>

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

  void display();
  void create(string new_name, int new_student_num, int new_score);
  void del_all();
};