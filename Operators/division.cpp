#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    } else {
        cout << "Result = " << a / b << endl;
    }

    return 0;
}
