#include<iostream>
using namespace std;
int b=0;
int sum(int n){
    if(n==0){
        return 1;
    }
    sum(n-1);
    b+=n;
    return b;
}

int main(){
    int n,ans=0;
    cout<<"enter number";
    cin>>n;
    ans=sum(n);
    cout<<ans;
}