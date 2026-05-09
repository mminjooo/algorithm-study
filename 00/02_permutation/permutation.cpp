#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    // vector<int> a = {1, 2, 3}
    sort(a, a+3);
    // sort (a.begin(), a.end());

    do {
        for (int i : a) // 배열 a의 요소를 하나씩 꺼내서 i에 담아 출력
            std::cout << i << " ";
        
        std::cout << endl;
    } while (next_permutation(a, a+3)); // 출력된 배열 다음 순열 있을 경우 배열을 바꿈, 다음 순열이 없을 경우 false로 루프 종료
    //       next_permutation(&a[0], &a[0]+3)
    //       next_permutation(a.begin(), a.end())

    return 0;
}


/* 주소와 주솟값
배열에서 a는 해당 칸의 주소를 말함 (a = &a[0])
값을 사용하고 싶으면 a[0]을 사용..
*/