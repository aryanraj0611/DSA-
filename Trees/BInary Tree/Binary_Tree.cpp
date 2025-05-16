#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if (temp->left==NULL) {
            temp->left = new Node(key);
            return root;
        }
        else {
            q.push(temp->left);
        }
        if (temp->right==NULL) {
            temp->right = new Node(key);
            return root;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}
int search(Node* root, int key) {
    if (root == nullptr) {
        return 0;
    }
    if(root->data==key){
        return 1;
    }
    return search(root->left,key);
    return search(root->right,key);
}

int findmax(Node* root){
    if(root==NULL){
        return -1;
    }
    int leftMax = findmax(root->left);   
    int rightMax = findmax(root->right);
    return max(root->data, max(leftMax, rightMax));
}
struct Node* deleteNode(struct Node* root,int key){
    
}
void inorderTraversal(Node* node) {
    if (node) {
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
}
int main() {
    Node* root = nullptr;
    root = insert(root, 1); 
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    
    cout<<"insert element to search: ";
    int key;
    cin>>key;
    if(search(root,key)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    int maxVal = findmax(root);
    cout << "Maximum element in the tree: " << maxVal << endl;
    return 0;
}