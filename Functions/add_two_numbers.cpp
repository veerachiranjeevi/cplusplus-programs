#include<iostream>
using namespace std;

// Function to add two numbers and return the result
int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b, c;

    cout << "Enter two numbers: ";
    cin >> a >> b; // Taking input

    c = add(a, b); // Calling function

    cout << "Sum of two numbers is: " << c << endl; // Display output
    
    return 0;
}
