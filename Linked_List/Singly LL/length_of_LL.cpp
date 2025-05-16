#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover= head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthofLL(Node* head){
    Node* temp= head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void search(Node* head, int data){
    Node* temp= head;
    while(temp!=NULL){
        if(temp->data==data){
            cout<<data<<" is found in the linked list"<<endl;
            return;
    }
    temp=temp->next;
}
cout<<"not found";
}
int main(){
    vector<int> arr={2,3,4,5};
    Node* head=convertArr2LL(arr);
    cout<<head->data<<endl;

    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"length of LL is "<<lengthofLL(head)<<" "<<endl;
    search(head, 30);
}