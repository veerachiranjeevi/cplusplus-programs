#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        cout << "Stack overflow" << endl;
        return;
    }
    cout << "Enter value: ";
    cin >> value;
    top++;
    stack[top] = value;
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow" << endl;
        return;
    }
    cout << "Popped element: " << stack[top] << endl;
    top--;
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element: " << stack[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}
