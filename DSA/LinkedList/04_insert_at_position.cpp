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

    cout << "Before:" << endl;
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\nEnter the position: ";
    cin >> pos;

    Node* newNode = new Node();
    newNode->data = 15;

    if(pos == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        temp = head;
        for(int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "\nAfter inserting at position " << pos << ":" << endl;
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
