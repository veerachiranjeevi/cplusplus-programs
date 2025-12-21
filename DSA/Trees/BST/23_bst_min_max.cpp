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

int findMin(Node* node) {
    if (node->left == NULL)
        return node->data;

    return findMin(node->left);
}

int findMax(Node* node) {
    if (node->right == NULL)
        return node->data;

    return findMax(node->right);
}

int main() {
    Node* root = NULL;

    root = insertBST(root, 40);
    root = insertBST(root, 20);
    root = insertBST(root, 60);
    root = insertBST(root, 10);
    root = insertBST(root, 30);

    cout << "Minimum: " << findMin(root) << endl;
    cout << "Maximum: " << findMax(root);

    return 0;
}
