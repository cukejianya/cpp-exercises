#include <iostream>
using namespace std;

namespace first {
    int x = 10;
    int y = 400;
}

namespace second {
    double x = 2.8431;
    double y = 5.1231;
}

int main() {
    using first::x;
    using second::y;
    cout << x << endl;
    cout << y << endl;
    cout << first::y << endl;
    cout << second::x << endl;

    return 0;
}
