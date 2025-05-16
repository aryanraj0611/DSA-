#include<iostream>
using namespace std;
int b=0;
int sum(int n){
    if(n==0){
        return 1;
    }
    sum(n/10);
    b+=1;
    return b;
}

int main(){
    int n,ans=0;
    cout<<"enter number";
    cin>>n;
    ans=sum(n);
    cout<<ans;
}