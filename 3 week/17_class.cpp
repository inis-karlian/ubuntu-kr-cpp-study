#include<iostream>

using namespace std;


class calculator{
  private:
    int num = 0;
    

  public:

  int add(int numa, int numb){
    num = numa + numb;
    return num;
  }

  int minus(int numa, int numb){
    num = numa - numb;
    return num;
  }

  int mul(int numa, int numb){
    num = numa * numb;
    return num;
  }

  int div(float numa, float numb){
    num = numa / numb;
    return num;
  }

};


int main(void){
  calculator cal;
  int a = 100; 
  int b = 10;

  cout << cal.add(a,b) << endl;
  cout << cal.minus(a,b) << endl;
  cout << cal.mul(a,b) << endl;
  cout << cal.div(a,b) << endl;

  //cout << cal.num << endl; : private
 
}