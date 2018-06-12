#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int i;
    cout << "Enter a integer: ";
    cin >> i;
    cout << factorial(i);
}

int factorial(int n) {
    if (n < 2) {
        return 1;
    }

    return n * factorial(n - 1);
}
