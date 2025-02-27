#include <iostream>
using namespace std;

int main() {
    int wg = 13;
    float gravite = 0.165;

    cout << fixed;
    cout.precision(6);
    
    cout << wg << " * " << gravite << " = " << wg*gravite;
    
    return 0;
}