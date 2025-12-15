#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverseList(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
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
    head = reverseList(head);

    cout << "Reversed linked list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
