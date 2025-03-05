#include <iostream>
using namespace std;

void untileZero() {
    int n;
    while(true) {
        cin >> n;

        if (n == 0) {
            break;
        }
        cout << n << endl;
        
    }
}

int main() {
    untileZero();
    return 0;
}