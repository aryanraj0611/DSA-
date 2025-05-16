#include<iostream>
using namespace std;
int prime(int a){
    int b=0;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            b=0;
            break;
        }
        else{
            b+=1;
        }
    }
    if(b==0){
        cout<<"not a Prime number"<<endl;
    }
    else{
        cout<<"prime number"<<endl;
    }
}
int main(){
    int a;
    cout<<"enter number"<<endl;
    cin>>a;
    prime(a);
}