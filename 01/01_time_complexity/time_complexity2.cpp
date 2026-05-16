#include <bits/stdc++.h>
using namespace std;

int n, a[1004], cnt;

int go(int l, int r) {
    cnt++;
    if (l==r)
        return a[l];
    
    int mid = (l+r) / 2;
    int sum = go(l, mid) + go(mid+1, r);

    return sum;
}

int main() {
    cin >> n;

    for (int i=1; i<=n; i++)
        a[i-1] = i;
    
    int sum = go(0, n-1);
    cout << sum << endl << cnt;
}

// 10 55 19

/* 시간복잡도
| n   | 1 | 2 | 3 | 4 | 5 | 6  | 7  | 8  | 9  | 10 |
| --- | - | - | - | - | - | -- | -- | -- | -- | -- |
| cnt | 1 | 3 | 5 | 7 | 9 | 11 | 13 | 15 | 17 | 19 |

-> go()가 호출된 횟수가 시간복잡도 -> 2n-1 -> O(n)
*/

/* 점화식 ver
n=4 1+2+4
n=8 1+2+4+8

등비수열: a(r^n - 1) / r-1

이때 n = log2(n+1)

a(r^(log2(n+1)) - 1) / r-1
= 2^(log2(2n)) - 1
= 2n - 1
*/