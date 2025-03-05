#include <iostream>
using namespace std;

bool isTimeThree(int n) {
    return (n % 3 == 0);
}

bool isTimeFive(int n) {
    return (n % 5 == 0);
}

int main() {
    int m;
    int cntThree = 0;
    int cntFive = 0;
    

    for (int i = 0; i < 10; i++) {
        cin >> m;

        if (isTimeThree(m)) {
            cntThree++;
        }
        if (isTimeFive(m)) {
            cntFive++;
        }
    }
    cout << cntThree << " " << cntFive;

    return 0;
}