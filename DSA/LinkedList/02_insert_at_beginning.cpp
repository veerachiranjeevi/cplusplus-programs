#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
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

    cout << "Before:" << endl;
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    Node* newNode = new Node();
    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    cout << "\nAfter inserting at beginning:" << endl;
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
