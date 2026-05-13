/* vector
- 동적 배열
- 랜덤 접근이 가능, 중복 허용
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 선언
// 동적할당: vector<타입> 변수명;
// 정적할당: vector<타입> 변수명(요소갯수, 초기화값);
// 정적할당: vector<타입> 변수명{초기화값};
vector<int> v;

int main() {
    // puch_back(): 뒤에서부터 요소를 더함
    for (int i=1; i<11; i++)
        v.push_back(i);
    // for (타입 변수명 : 컨테이너)
    for (int a : v)
        std::cout << a << " ";
    std::cout << endl;

    // pop_back(): 맨 뒤의 요소를 지음
    v.pop_back();
    for (int a : v)
        std::cout << a << " ";
    std::cout << endl;

    // erase(위치): 한 요소를 지움
    // erase[from, to): from부터 to 전까지 지움
    v.erase(v.begin(), v.begin()+3);
    for (int a : v)
        std::cout << a << " ";
    std::cout << endl;

    // find(from, to, value): [from, to)에서 value를 찾음
    auto a = find(v.begin(), v.end(), 100);
    if (a==v.end())
        std::cout << "not found" << endl;
    
    // fill(from, to, value): [from, to) 구간에 value를 초기화
    fill(v.begin(), v.end(), 10);
    for (int a : v)
        std::cout << a << " ";
    std::cout << endl;

    // size(): 배열의 크기를 반환
    // size()를 변수로 사용할 경우에는 항상 형변환 해주기
    for (int i=0; i<(int)v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << endl;
    
    // clear(): 모든 요소를 지움
    v.clear();
    std::cout << "아무것도 없을까?" << endl;
    for (int a : v)
        std::cout << a << " ";
    std::cout << endl;

    return 0;
}