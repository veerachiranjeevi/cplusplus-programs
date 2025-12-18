#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    Node* root = new Node();
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    cout << "The root data is " << root->data;

    return 0;
}
