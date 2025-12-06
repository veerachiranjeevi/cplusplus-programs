#include<iostream>
using namespace std;

// Swap function using pass by reference
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b; // Getting input

    cout << "Before swap: a=" << a << " b=" << b << endl;

    swapValues(a, b); // Calling swap function

    cout << "After swap: a=" << a << " b=" << b << endl; // Display final result

    return 0;
}
