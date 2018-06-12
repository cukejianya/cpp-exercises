#include <iostream>
using namespace std;

void even(int x);
void odd(int x);

int main() {
    int i;
    do {
        cout << "Press 0 to exit program, otherwise enter a number: ";
        cin >> i;
        even(i);
    } while(i != 0);

    return 0;
}

void even (int x) {
    if (x%2 == 0) {
       cout << "This is a even number" << endl;
    } else {
       odd(x);
    } 
}

void odd (int x) {
    cout << "This is a odd number" << endl;
}
