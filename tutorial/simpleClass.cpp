#include <iostream>
using namespace std;

class Rectangle {
        int height, width;
    public:
        void set_values(int, int);
        int area() {
            return height * width;
        }
};

void Rectangle::set_values(int x, int y) {
    height = y;
    width = x;
}

int main() {
    Rectangle rectA, rectB;
    rectA.set_values(2, 5);
    rectB.set_values(10, 10);
    cout << "Rect A area is " << rectA.area() << endl;
    cout << "Rect B area is " << rectB.area() << endl;

    return 0;
}
