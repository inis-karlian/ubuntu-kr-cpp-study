#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    try {                 // 예외처리 시도 -> throw로 
        if (b == 0) {
            throw b;      // b가 0이면, 즉 0으로 나누면 예외처리
        }
            cout << a << "/" << b << "=" << a / b << endl;
    }
    catch (int exception) {                              // 예외처리 한 경우 
        cout << "exception handling! " << b << endl;
    }
    return 0;
}