#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void findMiddle(Node* head) {
    if (head == NULL) {
        cout << "List is empty";
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle of the list is: " << slow->data;
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
    findMiddle(head);

    return 0;
}
