#include<iostream>

using namespace std;

int main() {
  
  int score = 0;

  cout << "enter your score : ";
  cin >> score;

  cout << endl;
  // (A:100-80, B:79-60, C:59-40, E:39-0)
  if(score <= 100 && score >= 0){
      
    if(score >= 80){

      cout << 'A' << endl;

    }else if(score >= 60){

      cout << 'B' << endl;

    }else if(score >= 40){

      cout << 'C' << endl;

    }else{

      cout << 'E' << endl;

    }

  }else{
    
    cout << "error" << endl;
    return 0;

  }        

  return 0;
}