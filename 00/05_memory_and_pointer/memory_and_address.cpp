#include <bits/stdc++.h>
using namespace std;

int i;

int main() {
    // & 연산자를 통해 i의 주소를 가져올 수 있다.
    cout << &i << endl;

    i = 0;

    // i에 값을 할당해줘도 주소가 변하지는 않음 (세입자는 바껴도 집주소는 안바뀜)
    cout << &i << endl;
}