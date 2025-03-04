#include <iostream>
using namespace std;

int main() {
    string arr[9];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << arr[9] << arr[8] << arr[7] << arr[6] << arr[5] << arr[4] << arr[3] << arr[2] << arr[1] << arr[0];
    return 0;
}