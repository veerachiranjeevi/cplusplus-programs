#include<iostream>
using namespace std;

int main() {
    int a, *p;

    cout << "Enter a number: ";
    cin >> a;

    p = &a;  // p holds address of a

    cout << "Initial address stored in pointer: " << p << endl;

    p++;  // Move to next memory location
    cout << "Address after p++: " << p << endl;

    p--;  // Move back to original location
    cout << "Address after p--: " << p << endl;

    return 0;
}
