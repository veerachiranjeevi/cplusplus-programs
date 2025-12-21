#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insertBST(Node* node, int value) {
    if (node == NULL) {
        Node* temp = new Node();
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    if (value < node->data)
        node->left = insertBST(node->left, value);
    else if (value > node->data)
        node->right = insertBST(node->right, value);

    return node;
}

bool searchBST(Node* node, int key) {
    if (node == NULL)
        return false;

    if (node->data == key)
        return true;
    else if (key < node->data)
        return searchBST(node->left, key);
    else
        return searchBST(node->right, key);
}

int main() {
    Node* root = NULL;

    root = insertBST(root, 40);
    root = insertBST(root, 50);
    root = insertBST(root, 30);

    int key = 40;

    if (searchBST(root, key))
        cout << key << " found in BST";
    else
        cout << key << " not found in BST";

    return 0;
}

