#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void showFrontRear() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Front element is: " << queue[front] << endl;
    cout << "Rear element is: " << queue[rear] << endl;
}

int main() {
    showFrontRear();
    return 0;
}

