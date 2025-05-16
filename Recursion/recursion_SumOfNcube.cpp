#include<iostream>
using namespace std;
int a=0;
int sum(int n){
    if(n==0){
        return 1;
    }
    a+=n*n*n;
    sum(n-1);
    return a;
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int a=sum(n);
    cout<<a;
    return 0;
}