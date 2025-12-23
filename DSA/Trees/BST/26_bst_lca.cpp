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

Node* lcaBST(Node* node, int n1, int n2) {
    if (node == NULL)
        return NULL;

    if (n1 < node->data && n2 < node->data)
        return lcaBST(node->left, n1, n2);

    if (n1 > node->data && n2 > node->data)
        return lcaBST(node->right, n1, n2);

    return node;
}

int main() {
    Node* root = NULL;

    root = insertBST(root, 40);
    root = insertBST(root, 20);
    root = insertBST(root, 60);
    root = insertBST(root, 10);
    root = insertBST(root, 30);

    Node* lcaNode = lcaBST(root, 10, 30);

    if (lcaNode != NULL)
        cout << "LCA: " << lcaNode->data;
    else
        cout << "LCA not found";

    return 0;
}
