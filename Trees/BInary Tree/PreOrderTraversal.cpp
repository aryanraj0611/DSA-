#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
         val=x; 
         left=NULL; 
         right=NULL;
    }
};

void preorder(TreeNode* root, vector<int>& arr) {
    if (root == NULL) {
        return;
    }
    arr.push_back(root->val);
    preorder(root->left, arr);
    preorder(root->right, arr);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> arr;
    preorder(root, arr);
    return arr;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> result = preorderTraversal(root);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
