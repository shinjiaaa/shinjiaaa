#include <iostream>
#include <string>
using namespace std;

int main() {
    string C;
    int N;
    cin >> C >> N;
    
    if (C == "A"){
        for (int i = 1; i <= N; i++) {
            cout << i << " ";
        }
    }

    else {
        for (int i = N; i > 0; i--) {
            cout << i << " ";
        }
    }
    return 0;
}