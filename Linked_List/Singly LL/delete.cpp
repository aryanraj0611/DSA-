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
void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
Node* removeFromBegin(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* removeFromEnd(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp= head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    free(temp->next);
    return head;
}
Node* removeKth(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    if(k==1){
        head=head->next;
        free(temp);
        return head;
    }
    int i=1;
    Node* prev=head;
    while(i<k){
        prev=temp;
        temp=temp->next;
        i++;
    }
    Node* temp2=prev->next;
    prev->next=prev->next->next;
    free(temp2);
    return head;
}
Node* insertAtBegin(Node* head, int x){
    Node* temp= new Node(x);
    temp->next=head;
    return temp;
}
Node* insertAtLast(Node* head, int x){
    if(head==NULL){
        return new Node(x);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* ptr= new Node(x);
    ptr->next=temp->next;
    temp->next=ptr;
    return head;
}
Node* insertAtKth(Node* head, int x, int k){
    if(head==NULL){
        return new Node(x);
    }
    Node* ptr= new Node(x);
    Node* temp=head;
    Node* pre= head;
    int i=1;
    while(i<k){
        pre=temp;
        temp=temp->next;
        i++;
    }
    ptr->next=temp->next;
    pre->next=ptr;
    return head;
}


int main(){
    vector<int> arr={2,3,4,5,6,7,8,9};
    Node* head=convertArr2LL(arr);
    cout<<endl;
    cout<<"original list: ";
    print(head);
    cout<<endl;

    head=removeFromBegin(head);
    cout<<"after removing from beginning: ";
    print(head);
    cout<<endl;

    head=removeFromEnd(head);
    cout<<"after removing from end: ";
    print(head);
    cout<<endl;
    
    head=removeKth(head,1);
    cout<<"after removing Kth node: ";
    print(head);
    cout<<endl;

    head=insertAtBegin(head,21);
    cout<<"after inserting at beginning: ";
    print(head);
    cout<<endl;

    head=insertAtLast(head,100);
    cout<<"after inserting at end: ";
    print(head);
    cout<<endl;
    
    head=insertAtKth(head,200,3);
    cout<<"after inserting at Kth position: ";
    print(head);

}