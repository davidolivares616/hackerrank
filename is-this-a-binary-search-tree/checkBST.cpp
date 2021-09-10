void inorder(Node* root, vector<int> &v) {
    if (!root) return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

bool isSorted(vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i - 1] >= v[i]) {
            return false;
        }
    }
    return true;
}

bool checkBST(Node* root) {
    vector<int> values;
    inorder(root, values);
    return isSorted(values);
}
