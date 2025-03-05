#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int total = 0;

    for (int i = 1; i < 101; i++) {
        total += i;

        if (total >= N) {
            cout << i;
            break;
        }
    }
    
    return 0;
}