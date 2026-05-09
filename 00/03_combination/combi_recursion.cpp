#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n=5, k=3, a[5]={1, 2, 3, 4, 5};

// 결과(인덱스) 출력 함수
void print(vector<int> b) {
    for (int i : b)
        std::cout << i << " ";
    
    std::cout << endl;
}

// start: 탐색을 시작할 인덱스, b: 현재까지 뽑은 인덱스를 저장하는 벡터
void combi(int start, vector<int> &b) {
    // [Base Case] 개수가 k개(3개)가 될 때
    if (b.size() == k) {
        print(b);   // 출력
        return;     // 부모 노드로 돌아감
    }

    // [Recursive Step] 현대 start 다음 인덱스부터 n까지 하나씩 뽑음
    for (int i=start+1; i<n; i++) {
        b.push_back(i); // i번째 인덱스를 벡터에 담음
        combi(i, b);    // 방금 담은 i를 start로 넘겨서 다음 요소를 뽑음 (재귀)
        b.pop_back();   // [Backtracking] 벡터에서 i를 다시 지움 (원복)
    }

    return;
}

int main() {
    vector<int> b;
    combi(-1, b);   // 처음에는 아무 것도 안 뽑았으므로 -1을 넘겨줌 (그러면 i는 부터 시작)

    return 0;
}

/* 조합 재귀 탐색 트리 
[시작]                                  combi(start: -1) (b: { })
                   ____________________/           |           \____________________
                  /                                |                                \
               i = 0                             i = 1                            i = 2
            b: {0} (s:1)                      b: {1} (s:1)                     b: {2} (s:1)
        ____/    |    \____                  ____/    \____                   ____/    \____
       /         |         \                /              \                 /              \
    i = 1      i = 2      i = 3          i = 2           i = 3             i = 3           i = 4
    {0,1}      {0,2}      {0,3}          {1,2}           {1,3}             {2,3}           {2,4}
    / | \       / \         |           /     \            |                 |               |
 i=2 i=3 i=4  i=3 i=4      i=4        i=3     i=4          i=4              i=4            [종료]
  |   |   |    |   |        |          |       |            |                |
 012 013 014  023 024      034        123     124          134              234
*/