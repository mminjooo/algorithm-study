#include <bits/stdc++.h>
using namespace std;

// map<key 타입, value 타입> 변수명;
map<int, int> mp;


int main() {
    vector<int> v{1, 1, 3, 3, 2, 2};

    // for (int i=0; i<v.size(); i++)
    for (int i : v) {
            if(mp[i]) { // 이미 존재하면 continue
                continue;
            } else {    // 없으면 1로 올리기 (mp는 출석부)
            mp[i] = 1;
        }
    }

    vector<int> ret;
    // it 벡터에 {key, val} 세트로 저장
    for (auto it : mp)
        // first: key만 추출 -> key만 ret에 저장
        ret.push_back(it.first);
    // ret 순회하면서 출력
    for (int i : ret)
        cout << i << endl;
}