#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void displayQueue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    displayQueue();
    return 0;
}
