#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    int value;

    if (rear == MAX - 1) {
        cout << "Queue overflow" << endl;
        return;
    }

    cout << "Enter value: ";
    cin >> value;

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    cout << "Element inserted successfully" << endl;
}

int main() {
    enqueue();
    return 0;
}
