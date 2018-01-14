//빈칸을 채워 계산기를 만들어 보십시오.

#include <iostream>

___ multiply(int x, int y)
{
  ______ x_y;
}

____ divide(int x, int y)
{
  _____ x_y;
}

_____ add(int x, int y) 
{
  ______x_y;
}

______ subtract(int x, int y)
{
  _____x_y;
}

using namespace std;

___ _____()
{
  ____ op='c';
  ____ x, y;
  while(op!='e')
  {
  cout__"add(+), subtract(-), divide(/), multiply(*), [e]xit?";
  cin__op;
  switch(op)
  {
    ____ '+':
    cin__x;
    cin__y;
    cout__x__"+"__y__"="__add(x, y)__endl_
    break;
    ____ '-'_
    cin__x;
    cin__y;
    cout__x__"-"__y__"="__subtract(x, y)__endl_
    break;
    ____ '/':
    cin__x;
    cin__y;
    cout__x__"/"__y__"="__divide(x, y)__endl_
    break;
    ____ '*'_
    cin__x;
    cin__y;
    cout__x__"*"__y__"="__multiply(x, y)__endl_
    break;
    _____ 'e':
    ______;
    ______:
    cout__"Sorry, try again"__endl;
    }
  }
  return _;
}