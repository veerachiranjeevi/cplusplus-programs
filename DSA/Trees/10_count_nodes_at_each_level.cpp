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

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int countAtLevel(Node* node, int level) {
    if (node == NULL)
        return 0;

    if (level == 1)
        return 1;

    return countAtLevel(node->left, level - 1)
         + countAtLevel(node->right, level - 1);
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

    int h = height(root);

    for (int level = 1; level <= h; level++) {
        cout << "Level " << level << ": "
             << countAtLevel(root, level) << endl;
    }

    return 0;
}

