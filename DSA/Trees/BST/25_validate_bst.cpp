#include <iostream>
#include <climits>
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

bool isValidBST(Node* node, int minVal, int maxVal) {
    if (node == NULL)
        return true;

    if (node->data <= minVal || node->data >= maxVal)
        return false;

    return isValidBST(node->left, minVal, node->data) &&
           isValidBST(node->right, node->data, maxVal);
}

int main() {
    Node* root = NULL;

    root = insertBST(root, 40);
    root = insertBST(root, 20);
    root = insertBST(root, 60);
    root = insertBST(root, 10);
    root = insertBST(root, 30);

    if (isValidBST(root, INT_MIN, INT_MAX))
        cout << "Valid BST";
    else
        cout << "Not a valid BST";

    return 0;
}
