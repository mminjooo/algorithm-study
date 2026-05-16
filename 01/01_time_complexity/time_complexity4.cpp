#include <bits/stdc++.h>
using namespace std;

int n, cnt;

void solve(int n) {
    cnt++;
    // main logic 시간 복잡도:  O(1) (상수시간)
    cout << cnt << endl;

    if (n==0)
        return;
    
    // cnt 시간복잡도: O(3^n)
    for (int i=0; i<3; i++)
        solve(n-1);

    return;
}

int main() {
    cin >> n;
    solve(n);
    
    return 0;
}

// O(1) * O(3^n) = O(3^n)

/* tip
go(3) -> 3^n
go(4) -> 4^n

함수 하나당 호출하는 횟수로 대충 때려맞추자
초항은 따져야함.....
*/