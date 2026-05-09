#include <iostream>
using namespace std;

int n=5, k=3, a[5]={1, 2, 3, 4, 5};

int main() {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            for (int k=0; k<j; k++) {
                std::cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}


/* 오름차순 정렬
for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
        for (int k=j+1; k<n; k++) {
            std::cout << i << " " << j << " " << k << endl;
        }
    }

}
*/