#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int height(Node* node) {
    if (node == NULL)
        return 0;

    int lh = height(node->left);
    int rh = height(node->right);

    return 1 + (lh > rh ? lh : rh);
}

bool isBalanced(Node* node) {
    if (node == NULL)
        return true;

    int lh = height(node->left);
    int rh = height(node->right);

    if (abs(lh - rh) > 1)
        return false;

    return isBalanced(node->left) && isBalanced(node->right);
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

    if (isBalanced(root))
        cout << "Tree is height balanced";
    else
        cout << "Tree is not height balanced";

    return 0;
}

