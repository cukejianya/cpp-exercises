#include <iostream>

using namespace std;

int main() {
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;

    cout << "The first value is " << firstvalue << endl;
    cout << "The second value is " << secondvalue << endl;

    return 0;
}
