// 팩토리얼 계산하는 함수 만들기

#include<iostream>

using namespace std;

int fac(int n) {
    
    int i = 0 ;
	int result = 1;

	// n부터 1까지 반복
	for(i = n; i > 0; i--)
	{
		// i값을 계속 곱해서 result에 대입
		result *= i;
	}

	return result;
}   //http://www.jynote.net/455


int main() {
    int num = 0, in_num = 5;

    num = fac(in_num);

    cout << num << endl; 
    return 0;
}