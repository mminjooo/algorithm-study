#include <bits/stdc++.h>
using namespace std;

int a = 4;
double c = 4.4;

int main() {
    int *b = &a;
    double *d = &c;

    cout << &a << endl << b << endl << &c << endl << d << endl;

    // 포인터는 OS에 따라 포인터 변수의 크기가 결정됨 (타입과 상관 X)
    cout << sizeof(b) << " " << sizeof(d);
}

/*
0x7ff773344010
0x7ff773344010
0x7ff773344018
0x7ff773344018
8 8
*/