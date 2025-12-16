#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void push() {
    int value;

    if (top == 99) {
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

    int popped = stack[top];
    top--;

    cout << "Popped element: " << popped << endl;
}

int main() {
    push();   // insert one element
    pop();    // remove top element
    return 0;
}
