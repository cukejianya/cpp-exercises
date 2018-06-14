#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b);

int main() {
    int a = 2, b = 14;
    double x = 1.5, y = 23.9;
    cout << sum(2, 14) << endl;
    cout << sum(x, y) << endl;
}

template <class T>
T sum(T a, T b) {

    return a + b;
}
