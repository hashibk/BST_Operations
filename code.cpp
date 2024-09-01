#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Implementing a Node structure for the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a value into the binary search tree
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to delete a node from the binary search tree
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = root->right;
        while (temp->left != nullptr) {
            temp = temp->left;
        }

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Function to update a node's value in the binary search tree
void updateNode(Node* root, int oldValue, int newValue) {
    root = deleteNode(root, oldValue);
    root = insert(root, newValue);
}

// Pre-order traversal using stack
void preOrder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> stk;
    stk.push(root);

    while (!stk.empty()) {
        Node* curr = stk.top();
        stk.pop();
        cout << curr->data << " ";

        if (curr->right) stk.push(curr->right);
        if (curr->left) stk.push(curr->left);
    }
}

// Post-order traversal using stack
void postOrder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> stk;
    stk.push(root);
    stack<int> out;

    while (!stk.empty()) {
        Node* curr = stk.top();
        stk.pop();
        out.push(curr->data);

        if (curr->left) stk.push(curr->left);
        if (curr->right) stk.push(curr->right);
    }

    while (!out.empty()) {
        cout << out.top() << " ";
        out.pop();
    }
}

// In-order traversal using stack
void inOrder(Node* root) {
    stack<Node*> stk;
    Node* curr = root;

    while (curr != nullptr || !stk.empty()) {
        while (curr != nullptr) {
            stk.push(curr);
            curr = curr->left;
        }

        curr = stk.top();
        stk.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
}

// Level order traversal using queue
void levelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

int main() {
    Node* root = nullptr;

    // Insert values into the binary search tree
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Delete node with value 20
    root = deleteNode(root, 20);

    // Update node with value 30 to 35
    updateNode(root, 30, 35);

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Level order traversal: ";
    levelOrder(root);
    cout << endl;

    return 0;
}

