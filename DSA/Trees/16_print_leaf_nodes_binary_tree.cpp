#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void printLeafNodes(Node* node) {
    if (node == NULL)
        return;

    if (node->left == NULL && node->right == NULL) {
        cout << node->data << " ";
        return;
    }

    printLeafNodes(node->left);
    printLeafNodes(node->right);
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

    cout << "Leaf nodes: ";
    printLeafNodes(root);

    return 0;
}
