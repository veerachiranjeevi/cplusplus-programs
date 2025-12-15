#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int length(Node* head) {
    Node* temp = head;
    int count = 0;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

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

    int cnt = length(head);
    cout << "The number of nodes is: " << cnt;

    return 0;
}
