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

void inorder(Node* node) {
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

int findMin(Node* node) {
    if (node->left == NULL)
        return node->data;

    return findMin(node->left);
}

Node* deleteNode(Node* node, int key) {
    if (node == NULL)
        return NULL;

    if (key < node->data) {
        node->left = deleteNode(node->left, key);
    }
    else if (key > node->data) {
        node->right = deleteNode(node->right, key);
    }
    else {
        // node found

        // Case 1: no child
        if (node->left == NULL && node->right == NULL) {
            delete node;
            return NULL;
        }

        // Case 2: one child
        if (node->left == NULL || node->right == NULL) {
            Node* temp = (node->left != NULL) ? node->left : node->right;
            delete node;
            return temp;
        }

        // Case 3: two children
        int successor = findMin(node->right);
        node->data = successor;
        node->right = deleteNode(node->right, successor);
    }

    return node;
}

int main() {
    Node* root = NULL;

    root = insertBST(root, 40);
    root = insertBST(root, 20);
    root = insertBST(root, 60);
    root = insertBST(root, 10);
    root = insertBST(root, 30);

    cout << "Before deletion: ";
    inorder(root);

    root = deleteNode(root, 20);

    cout << "\nAfter deletion: ";
    inorder(root);

    return 0;
}
