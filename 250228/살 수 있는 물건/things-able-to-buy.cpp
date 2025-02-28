#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N>=3000){
        cout << "book" << endl;
    }
    else if(0<N && N<3000){
        cout << "mask" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}