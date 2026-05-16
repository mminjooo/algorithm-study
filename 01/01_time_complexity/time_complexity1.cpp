#include <bits/stdc++.h>
using namespace std;

int n, m;

void solve(int n, int m) {
    int a = 1;

    for (int i=0; i<n; i++) // n
        a *= i;
    
    for (int j=0; j<m; j++) // m
        a *= j;
    
    cout << a << endl;
}

int main() {
    cin >> n >> m;
    solve(n, m);

    return 0;
}

// 시간복잡도 = n + m