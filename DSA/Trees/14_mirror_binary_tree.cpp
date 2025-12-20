#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void mirrorTree(Node* node) {
    if (node == NULL)
        return;

    Node* temp = node->left;
    node->left = node->right;
    node->right = temp;

    mirrorTree(node->left);
    mirrorTree(node->right);
}

void inorder(Node* node) {
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
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

    cout << "Inorder before mirror: ";
    inorder(root);

    mirrorTree(root);

    cout << "\nInorder after mirror: ";
    inorder(root);

    return 0;
}
