#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;  // 순열을 만들 원소들을 담는 벡터

// 결과 출력 함수
void printV(vector<int> &v) {
    for (int i=0; i<v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << endl;
}

void makePermutation(int n, int r, int depth) {
    // 현재 함수의 상태를 나타내는 디버깅 로그
    std::cout << n << " : " << r << " : " << depth << endl;

    // [Base Case] 트리의 끝(잎 노드)에 도달했을 때
    if (r == depth) {
        printV(v);  // 출력
        return;     // 부모 노드로 돌아감
    }

    // [Recursive Step] 현재 칸(depth)에 들어갈 숫자를 i로 선택함
    for (int i=depth; i<n; i++) {
        swap(v[i], v[depth]);   // 자리를 바꿈
        makePermutation(n, r, depth+1); // 재귀 호출
        swap(v[i], v[depth]);   // 원복 (Backtracking)
    }

    return;
}

int main() {
    for (int i=1; i<=3; i++)
        v.push_back(i); // {1, 2, 3}
    
    makePermutation(3, 3, 0);

    return 0;
}

/* 순열 재귀 탐색 트리 
[시작]                    {1, 2, 3} (depth: 0)
                ___________/       |       \___________
               /                   |                   \
        swap(0, 0)             swap(0, 1)             swap(0, 2)
             |                     |                     |
      {1, 2, 3} (d:1)       {2, 1, 3} (d:1)       {3, 2, 1} (d:1)
        /        \           /        \           /        \
   swap(1, 1)  swap(1, 2) swap(1, 1)  swap(1, 2) swap(1, 1)  swap(1, 2)
      |           |          |           |          |           |
 {1, 2, 3}   {1, 3, 2}  {2, 1, 3}   {2, 3, 1}  {3, 2, 1}   {3, 1, 2} (d:2)
      |           |          |           |          |           |
   [출력]       [출력]      [출력]      [출력]      [출력]      [출력]
   1 2 3       1 3 2      2 1 3       2 3 1      3 2 1       3 1 2
*/