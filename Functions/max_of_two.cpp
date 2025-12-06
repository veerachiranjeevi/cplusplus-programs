#include<iostream>
using namespace std;

// Function to find maximum of two numbers
int maxval(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b, max_val;

    cout << "Enter two numbers: ";
    cin >> a >> b; // Taking input

    max_val = maxval(a, b); // Calling function

    cout << "Maximum value is: " << max_val << endl; // Displaying result

    return 0;
}
