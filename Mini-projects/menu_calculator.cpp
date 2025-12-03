#include<iostream>
using namespace std;

int main() {
    int ch, a, b;
    bool running = true;
    
    while (running) {
        cout << "\nEnter two numbers: ";
        cin >> a >> b;

        cout << "\nChoose your option:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Addition = " << a + b << endl;
                break;
            case 2:
                cout << "Subtraction = " << a - b << endl;
                break;
            case 3:
                cout << "Multiplication = " << a * b << endl;
                break;
            case 4:
                if (b == 0)
                    cout << "Error: Division by zero not allowed!" << endl;
                else
                    cout << "Division = " << a / b << endl;
                break;
            case 5:
                running = false;
                cout << "Exiting... Thank you!" << endl;
                break;
            default:
                cout << "Invalid option, try again!" << endl;
        }
    }

    return 0;
}
