#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* prev= head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i],NULL, prev);
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}
void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* deleteFromBegin(Node* head){
    Node* temp= head;
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    head=head->next;
    head->back=nullptr;
    temp->next= nullptr;
    free(temp);
    return head;
}
Node* deleteFromEnd(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev= temp->back;
    prev->next=NULL;
    temp->back=NULL;
    free(temp);
    return head;

}
Node* deleteKth(Node* head, int k){
    Node* temp= head;
    int i=1;
    while(i!=k){
        temp=temp->next;
        i++;
    }
    Node* prev= temp->back;
    Node* front= temp->next;
    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return deleteFromBegin(head);
    }
    else if(front==NULL){
        return deleteFromEnd(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    free(temp);
    return head;
}
void deleteElement(Node* temp){
    Node* prev= temp->back;
    Node* front =temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
    }
    prev->next=front;
    front->back=prev;
    temp->next= temp->back=nullptr;
    free(temp);
}
Node* insertAtBegin(Node* head, int data){
    Node* temp= new Node(data, head, nullptr);
    head->back=temp;
    return temp;
}
Node* insertAtTail(Node* head, int data){
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode= new Node(data,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
    
}
Node* insertbeforeKth(Node* head, int data, int k){
    Node* temp = head;
    int i=1;
    while(i<k){
        temp=temp->next;
        i++;
    }
    Node* prev= temp->back;
    Node* newNode= new Node(data,temp,prev);
    prev->next= newNode;
    temp->back=newNode;
    return head;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node* head=convertArr2LL(arr);
    cout<<"original LinkedList: ";
    print(head);
    cout<<endl;

    head=deleteFromBegin(head);
    cout<<"after deleting from begin: ";
    print(head);
    cout<<endl;

    head=deleteFromEnd(head);
    cout<<"after deleting from end: ";
    print(head);
    cout<<endl;

    cout<<"enter the value of k: ";
    int k;
    cin>>k;
    head=deleteKth(head, k);
    cout<<"after deleting "<<k<<" position element: ";
    print(head);
    cout<<endl;

    cout<<"after deleting element "<<head->next->data<<": ";
    deleteElement(head->next);
    print(head);
    cout<<endl;

    head=insertAtBegin(head, 10);
    cout<<"after inserting at begin: ";
    print(head);
    cout<<endl;

    head=insertAtTail(head, 20);
    cout<<"after inserting 20 at tail: ";
    print(head);
    cout<<endl;

    head=insertbeforeKth(head,30,3);
    cout<<"after inserting 30 before 3rd element: ";
    print(head);
    cout<<endl;
}