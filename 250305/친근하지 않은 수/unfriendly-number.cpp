#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int n = 0;
    cin >> N;
    
    for (int i = 1; i >= N; i++) {
        if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)) {
            continue;
        }
        n++;
    }
    cout << n;
    return 0;
}