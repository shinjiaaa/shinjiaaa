#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << fixed;
    cout.precision(1);
    cout << A+B << " " << (double)(A+B)/2;
    return 0;
}