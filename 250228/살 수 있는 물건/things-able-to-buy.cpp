#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N>=3000){
        cout << "book";
    }
    else if(0<N && N<3000){
        cout << "mask";
    }
    else {
        cout << "no";
    }
    return 0;
}