#include <iostream>
#include <string>
using namespace std;

int main() {
    string mystr;
    
    cout << "What's your name? ";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite album? ";
    getline(cin, mystr);
    cout << "Oh, \"" << mystr << "\" is a classic!\n";

    return 0;
}
