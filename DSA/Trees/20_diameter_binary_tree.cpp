#include <iostream>
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

int diameter(Node* node) {
    if (node == NULL)
        return 0;

    int lh = height(node->left);
    int rh = height(node->right);

    int curr = lh + rh + 1;

    int leftDia = diameter(node->left);
    int rightDia = diameter(node->right);

    int best = curr;
    if (leftDia > best) best = leftDia;
    if (rightDia > best) best = rightDia;

    return best;
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

    cout << "Diameter: " << diameter(root);

    return 0;
}
