#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int length(Node* head) {
    if (head == NULL) {
        return 0;
    }
    return 1 + length(head->next);
}

Node* createList(int n) {
    Node* head = NULL;
    Node* tail = NULL;
    int value;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = createList(n);
    int len = length(head);

    cout << "Length of linked list is: " << len;
    return 0;
}
