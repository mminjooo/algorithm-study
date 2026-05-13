#include <bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};

int main() {
    // a 배열의 첫번째 주소가 반환되고 크기 정보는 날아감
    int *c = a;

    cout << c << endl;
    cout << &a[0] << endl;
    cout << c+1 << endl;    // c+1을 통해 다음 주소값도 반환 가능
    cout << &a[1];

    return 0;
}