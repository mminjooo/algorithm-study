#include <iostream>
#include <vector>
using namespace std;

// vector 안에 vector가 들어간 2차원 배열 타입을 선언
vector<vector<int>> v;  // 빈 배열 {}

// vector 안에 vector(10, 0)으로 채움
// vector(10,0) = {0, ..., 0}: size-10인 0으로 초기화한 배열
vector<vector<int>> v2(10, vector<int>(10, 0)); // v2 = {{0, ..., 0}, {0, ..., 0}, ..., {0, ..., 0}}

// 10개짜리 2차원 배열을 선언
vector<int> v3[10]; // v3 = {{}, {}, ... {}} = v

int main() {
    for (int i=0; i<10; i++) {
        vector<int> temp;   // temp라는 이름의 빈 배열 {}
        v.push_back(temp);  // v = {{}, {}, ... {}} // temp라는 빈 배열 10개로 채워짐
    }

    return 0;
}