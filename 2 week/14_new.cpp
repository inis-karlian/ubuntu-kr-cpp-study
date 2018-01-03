#include<iostream>

using namespace std;

int main() {
    char *pstr = new char[100];
    
    cin >> pstr;

    cout << "pstr : " << pstr << endl;

    delete[] pstr;
    return 0;
}