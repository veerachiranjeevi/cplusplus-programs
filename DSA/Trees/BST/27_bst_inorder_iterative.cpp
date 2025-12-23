#include <iostream>
#include <stack>
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

void inorderIterative(Node* node) {
    stack<Node*> st;
    Node* current = node;

    while (current != NULL || !st.empty()) {

        while (current != NULL) {
            st.push(current);
            current = current->left;
        }

        current = st.top();
        st.pop();

        cout << current->data << " ";

        current = current->right;
    }
}

int main() {
    Node* root = NULL;

    root = insertBST(root, 40);
    root = insertBST(root, 20);
    root = insertBST(root, 60);
    root = insertBST(root, 10);
    root = insertBST(root, 30);

    inorderIterative(root);

    return 0;
}
