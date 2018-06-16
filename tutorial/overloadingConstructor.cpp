#include <iostream>
using namespace std;

class Rectangle {
        int width, height;
    public:
        Rectangle();
        Rectangle(int, int);
        int area() {
            return width * height;
        }
};

Rectangle::Rectangle() {
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int x, int y) {
    width = x;
    height = y;
}

int main() {
    Rectangle rectA;
    Rectangle rectB(30, 30);

    cout << "The area of rectA is " << rectA.area() << endl;
    cout << "The area of rectB is " << rectB.area() << endl;

    return 0;
}
