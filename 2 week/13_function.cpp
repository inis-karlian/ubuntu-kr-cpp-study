// 팩토리얼 계산하는 함수 만들기

#include<iostream>

using namespace std;

int fac(int num) {
	
	int result = 1;

	for(int i = num; i > 0; i--){
		result = result * i;
	}

	return result;
}


int main() {
	int num = 0, in_num = 5;

	num = fac(in_num);

	cout << num << endl; 
	return 0;

}
