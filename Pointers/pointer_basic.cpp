#include<iostream>
using namespace std;

int main() {
    int a, *p;

    cout << "Enter a number: ";
    cin >> a;  // Taking value

    p = &a;  // Pointer storing address of 'a'

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << p << endl;  // printing memory address
    cout << "Value using pointer: " << *p << endl;  // dereferencing

    return 0;
}
