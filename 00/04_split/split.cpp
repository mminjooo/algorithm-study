#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// 인풋 문자열, 기준 문자열
vector<string> split(const string& input, string delimiter) {
    auto start = 0;
    auto end = input.find(delimiter);
    vector<string> result;

    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start); // start부터 find
        // 마지막에 구분자가 없으면 end = string::npos -> 루프 탈출
    }

    // 마지막 배열 넣기, end=npos지만 문자열 끝으로 인식함!
    result.push_back(input.substr(start, end-start));

    return result;
}

int main() {
    string str = "apple, banana, orange, grape";
    vector<string> fruits = split(str, ", ");
    
    for (const string& fruit : fruits)
        std::cout << fruit << " ";
    
    return 0;
}