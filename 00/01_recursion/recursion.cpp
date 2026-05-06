#include <iostream>
using namespace std;

int fact(int n) {
    if (n==1 || n==0)
        return 1;

    return n * fact(n-1); 
}

int fibo(int n) {
    if (n==1 || n==0)
        return n;

    return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fact(n) << " " << fibo(n);

    return 0;
}


/* 실행 방법
터미널에서 파일로 이동 후 .\(파일명).exe
*/