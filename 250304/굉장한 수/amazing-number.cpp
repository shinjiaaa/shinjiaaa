#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if ((N % 2 != 0 && N % 3 == 0) || (N % 2 == 0 && N % 5 ==0)) {
        cout << "ture";
    }
    else {
        cout << "false";
    }
    return 0;
}