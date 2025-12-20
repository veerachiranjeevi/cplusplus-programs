#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int countFullNodes(Node* node) {
    if (node == NULL)
        return 0;

    int count = 0;

    if (node->left != NULL && node->right != NULL)
        count = 1;

    return count
         + countFullNodes(node->left)
         + countFullNodes(node->right);
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

    int count = countFullNodes(root);
    cout << "Full nodes: " << count;

    return 0;
}
