#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    string mystring("Circle circumfernce: ");
    double r = 5.0;
    double circle;

    circle = 2 * PI * r;
    cout << mystring;
    cout << circle << endl;

    return 0;
}
