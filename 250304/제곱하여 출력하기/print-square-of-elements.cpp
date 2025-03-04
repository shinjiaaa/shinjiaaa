#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, arr[100];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++){
        cout << pow(arr[i], 2) << " ";
    }
    return 0;
}