#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void push(int value) {
    if (top == 99) {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    stack[top] = value;
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element is: " << stack[top] << endl;
    }
}

int main() {
    // pushing some elements
    push(10);
    push(20);
    push(30);

    // peeking top element
    peek();

    return 0;
}
