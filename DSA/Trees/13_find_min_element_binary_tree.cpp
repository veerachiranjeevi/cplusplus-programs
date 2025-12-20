#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int findMin(Node* node) {
    if (node == NULL)
        return INT_MAX;

    int leftMin = findMin(node->left);
    int rightMin = findMin(node->right);

    int minVal = node->data;
    if (leftMin < minVal)
        minVal = leftMin;
    if (rightMin < minVal)
        minVal = rightMin;

    return minVal;
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

    cout << "Minimum element: " << findMin(root);

    return 0;
}
