#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a + b;
}

int substraction(int a, int b) {
    return a - b;
}

int operation(int a, int b, int (*func)(int, int)) {
    int g; 
    g = (*func)(a, b);
    
    return g;
}

int main() {
    int m, n;
    int (*minus)(int, int) = substraction;

    m = operation(7, 5, addition);
    n = operation(20, m, minus);

    cout << n;
    
    return 0;
}
