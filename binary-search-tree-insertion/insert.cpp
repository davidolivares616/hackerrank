Node * insert(Node * root, int data) {
    if (!root) { return new Node(data); }
    if (data < root->data) { // go left
        root->left = insert(root->left, data);
    }
    if (data > root->data) { // go right
        root->right = insert(root->right, data);
    }
    return root;
}
