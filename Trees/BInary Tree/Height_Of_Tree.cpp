#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    return 1 + max(lh, rh);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);
    root->right->right->left = new TreeNode(10);

    cout << maxDepth(root) << endl;

    return 0;
}
