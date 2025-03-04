#include <iostream>
using namespace std;

int main() {
    int a, b, arr[9];
    cin >> a >> b;
    arr[0] = a;
    arr[1] = b;
    
    for (int i = 2; i < 10; i++) {
        if (arr[i-2]+arr[i-1] < 10) {
            arr[i] = arr[i-2]+arr[i-1];
        }
        else {
            arr[i] = arr[i-2]+arr[i-1]-10;
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9] << " ";
    return 0;
}