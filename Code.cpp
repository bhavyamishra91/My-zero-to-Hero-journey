#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Enter the character: ";
    cin >> a;

    if (a >= 97 && a <= 122) {
        cout << "Lowercase";
    } else {
        cout << "Uppercase";
    }
    return 0;
}