#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 200, 100};
    sort(a, a+5);

    do {
        for (int i=0; i<2; i++) // 앞의 두 숫자만 출력
            std::cout << a[i] << " ";
        
        std::cout << endl;
    } while (next_permutation(a, a+5));

    return 0;
}

/*
for (int i : a)
-> i에 a 배열의 요소를 하나씩 넣음 -> 값 사용하려면 a
for (int i=0; i<5; i++)
-> 인덱스 i를 가짐 -> 값 사용하려면 a[i] 
*/

/* 여러번 출력되는 이유
1 2 3 100 200 -> 1 2
1 2 3 200 100 -> 1 2
...
*/