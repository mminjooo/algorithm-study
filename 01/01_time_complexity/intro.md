# 시간 복잡도 time complexity
- 알고리즘이 실행되는데 걸리는 시간
- 주요 로직의 반복횟수를 중점으로 측정
```
for (int i=0; i<10; i++>) {         // 10
    for (int j=0; j<n; j++>) {      // n
        for (int k=0; k<n; k++>) {  // n
            if(true) cout << k << endl;
        }
    }
}

for (int i=0; i<n; i++) {
    if(true) cout << i << endl;
}

// 시간복잡도 = 10n^2 + n
```

# 빅오표기법 Big-O notation
- 변수 중에서 가장 큰 값을 가지는 것들만 계산
- = 가장 큰 영향을 주는 항만 남겨둠
- ex) 시간복잡도: n^2 + n + m^2 + m -> 빅오표기법: n^2 + m^2
```
#include <bits/stdc++.h>
using namespace std;

int n, cnt;

int main() {
    cin >> n;
    int a = 0;

    for (int i=0; i<n; i++) {       // n
        for (int j=0; j<i; j++) {   // n
            a += i + j;
            cnt++
        }
    }

    cout << a << endl;
    cout << cnt;

    return 0;
}

// 시간복잡도: 1/2(n^2 - n)
```
| n   | 2 | 3 | 4 | 5  | 6  |
| --- | - | - | - | -- | -- |
| cnt | 1 | 3 | 6 | 10 | 15 |

i=1 j=0
i=2 j=0, 1
i=3 j=0, 1, 2
i=4 j=0, 1, 2, 3
i=5 j=0, 1, 2, 3, 4

     0 1 2 3 4 5
    -------------
0 |  ○
1 |  ● ○
2 |  ● ● ○
3 |  ● ● ● ○
4 |  ● ● ● ● ○
5 |  ● ● ● ● ● ○

넓이: 1/2(n^2-n)

# tip
- 중첩되지 않으면 +
- 중첩되면 *
- n과 cnt 관계로 알 수 없을 땐 n과 cnt 그림 그리기

# 점화식으로 구하는 시간복잡도
- cnt 디버깅은 사실 어림잡아서 하는 방식
- 사실은 고수 아니면 어렵지만 알고는 있어야함@@@

# 재귀함수의 시간복잡도 (time_complexity4.cpp)
- 재귀함수의 main logic * 함수 호출 횟수 cnt
- 보통 재귀함수는 순차적으로 go(idx-1), go(idx+1) 구조를 가짐
    - 호출이 2번 일어나면 2^n, 3번 일어나면 3^n
- 이런 구조가 아닐 경우 ex) go(idx/2) 다른 시간 복잡도를 가짐