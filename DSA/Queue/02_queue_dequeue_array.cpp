#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue underflow" << endl;
        return;
    }

    cout << "Removed element: " << queue[front] << endl;
    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

int main() {
    dequeue();
    return 0;
}
