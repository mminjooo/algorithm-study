#include <bits/stdc++.h>
using namespace std;

vector<int> v = {1, 1, 0, 0, 1, 1, 2, 2, 3, 3, 5, 5};

int main() {

    for (int i : v)
        cout << i << " ";
    cout << endl;

    sort(v.begin(), v.end());

    // 중복되지 않은 요소로 채운 후, 이터레이터를 반환
    // 앞에서부터 중복되지 않게 채운 후 나머지 요소는 그대로 둠
    // v.erase: 이터레이터부터 끝까지 삭제 -> 중복되지 않은 정렬된 요소만 남음
    auto it = v.erase(unique(v.begin(), v.end()), v.end());
    cout << it - v.begin() << endl;

    for (int i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}