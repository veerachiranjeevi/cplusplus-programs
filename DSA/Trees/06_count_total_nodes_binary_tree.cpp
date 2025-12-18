#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int countNodes(Node* node) {
    if (node == NULL)
        return 0;

    return 1 + countNodes(node->left) + countNodes(node->right);
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

    int total = countNodes(root);
    cout << "Total nodes: " << total;

    return 0;
}
