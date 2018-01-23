/*
*  struct sutuent
*
*  void display();                                                   // 출력
*  void create(int new_student_num, string new_name, int new_score); // 입력 (학번, 이름, 점수)
*  void retouch(int list_num);                                       // 수정 (링크드리스트 순서)
*  void del_all();                                                   // 삭제 -> 부분삭제 추가
*
*
*
*/


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
    char make_rank(int score);

  public:
    list() {
      head = NULL;
      tail = NULL;
    }

    void display();
    void create(int new_student_num, string new_name, int new_score); //  학번, 이름, 점수
    void retouch(int list_num);
    void del_all();
};