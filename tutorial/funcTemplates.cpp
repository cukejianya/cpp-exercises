#include <iostream>
#include <string>
using namespace std;

template <class T>
T sum(T a, T b) {
    
    return a + b;
}

template <class T, class U>
void print (T a, U b) { 

    cout << a << endl;
    cout << b << endl;
}

int main() {
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    string s = "peace";
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    
    print(h, k);
    print(i, s);
    print(k, h);   
    
    return 0;
}
