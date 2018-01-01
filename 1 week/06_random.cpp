#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){

    srand((unsigned int)time(0));

    //(연습 코드)
    cout << "random : " << (rand() % 100 + 1) << endl;

    double percent;
    percent = (rand() % (10000 + 1) / 100.f);

    float rain_percent = 30.00;

    // 이곳에서 주어진 날씨 확률에 따른 현재 비 예측을 작성합니다.

    float snow_percent = 10.00; 

    // 이곳에서 주어진 날씨 확률에 따른 현재 눈 예측을 작성합니다.

    cout << rain_percent << endl;
    cout << snow_percent << endl;

     cout << "weather : ";

    if(percent > 70){
        cout << "rain" << endl;

    }else if(percent < 10){
        cout << "snow" << endl;

    }else{
        cout << "sun" << endl;

    }

    return 0;
}