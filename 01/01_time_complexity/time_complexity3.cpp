#include <bits/stdc++.h>
using namespace std;

int n, cnt;

void solve(int n) {
    int a=0, i=n;

    while (i>0) {
        a += i;
        i /= 2;
        cnt++;
    }

    cout << a << endl << cnt;
}

int main() {
    cin >> n;
    solve(n);

    return 0;
}

/*
| n   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | ... | 16 | ... | 32 |
| --- | - | - | - | - | - | - | - | - | --- | -- | --- | -- |
| cnt | 1 | 2 | 2 | 3 | 3 | 3 | 3 | 4 | ... | 5  | ... | 6  |

시간복잡도: log2(n) + 1
빅오표기법: O(log2(n))
*/