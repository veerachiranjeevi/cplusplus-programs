#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    stack[top] = value;
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
    // pushing elements
    push(10);
    push(20);
    push(30);
    push(40);

    // displaying stack
    display();

    return 0;
}
