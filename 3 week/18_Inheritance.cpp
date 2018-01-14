#include<iostream>

using namespace std;

class parent {
public:
  parent() {
    cout << " 부모 생성자 출력" << endl;
  }
  ~parent() {
    cout << " 부모 소멸자 출력" << endl;
  }
  int a;
protected:
  int b;
private:
  int c;
};

class child : public parent{
public:
  child() {
    cout << " 자식 생성자 출력" << endl;
  }
  ~child() {
    cout << " 자식 소멸자 출력" << endl;
  }
protected:
    int d;
};

class child_two : private parent {
public:
  child_two() {
    cout << " 두번째 자식 생성자 출력" << endl;
  }
  ~child_two() {
    cout << " 두번째 자식 소멸자 출력" << endl;
  }
private:
    int d;
};

int main() {
  parent sample_p;
  child sample_c;
  child_two sample_two;
  // 이곳에서 변수를 불러와서 테스트 해보시기 바랍니다.

  return 0;
}