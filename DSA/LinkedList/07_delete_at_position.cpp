#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int pos;

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
    Node* temp = head;

    cout << "Before:\n";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\nEnter position to delete: ";
    cin >> pos;

    if (head == NULL) {
        cout << "List is empty";
    }
    else if (pos == 0) {
        temp = head;
        head = head->next;
        delete temp;
    }
    else {
        temp = head;
        for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "Invalid position";
        }
        else {
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        }
    }

    cout << "\nAfter deletion:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
