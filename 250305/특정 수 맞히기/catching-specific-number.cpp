#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    while(N <= 100) {
        if(N != 25) {
            if(N > 25) {
                cout << "Lower" << endl;
            }
            else {
                cout << "Higher" << endl;
            }
            cin >> N;
        }
        else {
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}