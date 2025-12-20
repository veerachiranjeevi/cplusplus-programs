#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool searchElement(Node* node, int key) {
    if (node == NULL)
        return false;

    if (node->data == key)
        return true;

    return searchElement(node->left, key) || searchElement(node->right, key);
}

int main() {
    Node* root = new Node();
    Node* leftChild = new Node();
    Node* rightChild = new Node();

    leftChild->data = 20;
    leftChild->left = NULL;
    leftChild->right = NULL;

    rightChild->data = 30;
    rightChild->left = NULL;
    rightChild->right = NULL;

    root->data = 10;
    root->left = leftChild;
    root->right = rightChild;

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    if (searchElement(root, key))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
