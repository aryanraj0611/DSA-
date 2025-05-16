#include<bits/stdc++.h>
using namespace std;
 struct Node{ 
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
 }; 
 int main(){
    vector<int> arr={2,4,7,9};

    //The new keyword dynamically allocates memory for the node.
    //pointer to the memory location (PRINTS THE MEMORY LOCATION)
    Node* x= new Node(arr[0], nullptr);
    cout<<x<<endl;
    
    //creating an object 
    Node y=Node(arr[0],nullptr);
    cout<<y.data<<" "<<y.next<<endl;
    //cannot print y because its an object, either take data or next


    //printing object when using pointer and new keyword
    Node* z=new Node(arr[0],nullptr);
    cout<<z->data<<" "<<z->next;
 } 