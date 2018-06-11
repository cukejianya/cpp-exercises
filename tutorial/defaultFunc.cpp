#include <iostream>
using namespace std;

int divide(int a, int b=2) {
    
    return a/b;
}

int main() {

    cout << divide(42) << endl;
    cout << divide(42, 7) << endl;

    return 0;
}
