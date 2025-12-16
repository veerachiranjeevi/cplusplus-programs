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

    cout << "Value pushed successfully" << endl;
}

int main() {
    push();   // push one element
    return 0;
}
