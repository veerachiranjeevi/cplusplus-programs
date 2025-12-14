#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    // Creating initial linked list: 10 -> 20 -> 30
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    Node* head = n1;

    // Before deletion
    cout << "Before deletion:\n";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Delete last node
    if (head == NULL) {
        cout << "\nList is empty";
    }
    else if (head->next == NULL) {
        delete head;
        head = NULL;
    }
    else {
        temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    // After deletion
    cout << "\nAfter deletion:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
