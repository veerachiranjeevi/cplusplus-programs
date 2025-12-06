#include<iostream>
using namespace std;

// Function to swap using pointers (call by reference)
void swapPointers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;  // Input

    cout << "Before swap: a = " << a << " b = " << b << endl;

    swapPointers(&a, &b);  // Passing addresses

    cout << "After swap: a = " << a << " b = " << b << endl;

    return 0;
}
