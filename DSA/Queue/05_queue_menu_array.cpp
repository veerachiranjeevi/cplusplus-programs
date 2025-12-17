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

    if (front == -1)
        front = 0;

    cout << "Enter value: ";
    cin >> value;

    rear++;
    queue[rear] = value;
}

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

void showFrontRear() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Front element: " << queue[front] << endl;
    cout << "Rear element: " << queue[rear] << endl;
}

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
    int choice;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Show Front & Rear\n";
        cout << "4. Display Queue\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: showFrontRear(); break;
            case 4: displayQueue(); break;
            case 5: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}
