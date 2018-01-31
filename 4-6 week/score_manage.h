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
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <fstream>
#include <string.h>


using namespace std;

struct sutuent
{
  string name;      // 이름
  int student_num;  // 학번
  int score;        // 점수
  char score_rank;  // 학점
};

class list {
  private:

    char make_rank(int score);
    vector<sutuent> slist;

  public:
    void printType();
    void display();
    void fileDisplay();

    void createType();
    void inputCreate();
    void create(int new_student_num, string new_name, int new_score); //  학번, 이름, 점수
    void fileCreate();

    void retouch(int list_num);
    void search();
    void list_sort();
    void del(int list_num);
    void del_all();
   
};