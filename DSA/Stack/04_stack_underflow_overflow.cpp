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
    cout << value << " pushed into stack" << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow" << endl;
        return;
    }
    cout << stack[top] << " popped from stack" << endl;
    top--;
}

int main() {
    // Demonstrating overflow
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);   // overflow

    // Demonstrating underflow
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();      // underflow

    return 0;
}
