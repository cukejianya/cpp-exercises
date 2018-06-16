#include <iostream>
using namespace std;

class Rectangle {
        int width, height;
    public:
        Rectangle (int, int);
        int area() {
            return width * height;
        }
};

Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}

int main() {
    Rectangle rectA(20, 20);
    Rectangle rectB(7, 4);

    cout << "Area of rectA is " << rectA.area() << endl;
    cout << "Area of rectB is " << rectB.area() << endl;

    return 0;
}
