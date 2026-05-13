#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "mminjooo";
    string *b = &a;

    cout << b << endl;  // 주소

    cout << *b << endl; // 값

    return 0;
}