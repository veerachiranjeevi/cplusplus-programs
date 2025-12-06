#include<iostream>
using namespace std;

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int sub(int a, int b) {
    return a - b;
}

// Function for multiplication
int mul(int a, int b) {
    return a * b;
}

// Function for division
float divi(int a, int b) {
    if(b != 0)
        return (float)a / b;
    else
        return -1; // Invalid division
}

int main() {
    int a, b, choice;
    bool flag = true;

    while(flag) {

        cout << "\nEnter two numbers: ";
        cin >> a >> b; // Taking input

        // Menu
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; // Taking choice

        switch(choice) {
            case 1: 
                cout << "Result: " << add(a, b) << endl;
                break;
            case 2:
                cout << "Result: " << sub(a, b) << endl;
                break;
            case 3:
                cout << "Result: " << mul(a, b) << endl;
                break;
            case 4:
                if(b != 0)
                    cout << "Result: " << divi(a, b) << endl;
                else
                    cout << "Division by zero is not allowed!" << endl;
                break;
            case 5:
                flag = false; // Exit
                cout << "Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
