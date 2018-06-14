#include <iostream>
using namespace std;

template <class T, class U>
void print_statement(T x, U y); 

int main() {
    int i = 10;
    int j = 10.000;
    print_statement(i, j);
    print_statement(j, i);
    string a = "Hey";
    string b = "Yo";
    print_statement(a, b);
}

template <class T, class U>
bool is_equal(T a, U b) {
    return a == b;
}

template <class T, class U>
void print_statement(T x, U y) {
    if (is_equal(x, y)) {
        cout << "They are equal: " << x << " " << y << endl;
    } else {
        cout << "They are not equal: " << x << " " << y << endl;
    }
} 
        

