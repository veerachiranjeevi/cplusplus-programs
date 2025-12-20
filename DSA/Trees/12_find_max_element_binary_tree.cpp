#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int findMax(Node* node) {
    if (node == NULL)
        return INT_MIN;

    int leftMax = findMax(node->left);
    int rightMax = findMax(node->right);

    int maxVal = node->data;
    if (leftMax > maxVal)
        maxVal = leftMax;
    if (rightMax > maxVal)
        maxVal = rightMax;

    return maxVal;
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

    cout << "Maximum element: " << findMax(root);

    return 0;
}
