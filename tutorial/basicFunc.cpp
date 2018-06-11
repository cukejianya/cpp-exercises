#include <iostream>
using namespace std;

int substraction(int a, int b) {
    
    return a - b;
}

int main() {
    int x = 5, y = 3, z;
    z = substraction(7, 2);
    cout << "The first result is " << z << endl;
    cout << "The second result is " << substraction(x, y) << endl;
    cout << "The third result is " << substraction(3, y) << endl;
    z = 4 + substraction(x, 8) + substraction(y, x);
    cout << "The final result is " << z << endl;

    return 0;
}
