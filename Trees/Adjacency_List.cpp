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
    Node* first=new Node(1,NULL);
    Node* second=new Node(2,NULL);
    Node* third=new Node(3,NULL);
    Node* fourth= new Node(4,NULL);
    string S="1234";
    for(int i=0;i<S.length();i++){
        for(int j=0;j<S.length();j++){
            if(i!=j){
                cout<<"user want edge between "<<S[i]<<" and "<<S[j]<<"?";
                char a;
                cin>>a;
                if(a=='Y' && i=1){
                    Node* newnode= new Node(S[j],NULL);
                    first->next= newnode;
                    first= newnode;
                }
            }
        }
    }

}