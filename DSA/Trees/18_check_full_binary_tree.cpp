#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool isFullTree(Node* node) {
    if (node == NULL)
        return true;

    if (node->left == NULL && node->right == NULL)
        return true;

    if (node->left != NULL && node->right != NULL)
        return isFullTree(node->left) && isFullTree(node->right);

    return false;
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

    if (isFullTree(root))
        cout << "Tree is full";
    else
        cout << "Tree is not full";

    return 0;
}
