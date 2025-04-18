#include <iostream>
using namespace std;

bool oddNum(int n) {
    return (n % 2 != 0);
}

bool evenNum(int n) {
    return (n % 2 == 0);
}

int main() {
    int A, B;
    cin >> A >> B;

    while(A <= B) {
        cout << A << " ";
        if(oddNum(A)) {
            A *= 2;
        }
        else if(evenNum(A)) {
            A += 3;
        }
    }

    return 0;
}