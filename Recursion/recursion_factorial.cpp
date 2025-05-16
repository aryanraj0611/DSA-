#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

    
}

int main(){
    int n,ans=0;
    cout<<"enter number";
    cin>>n;
    ans= fact(n);
    cout<<ans;
    return 0;
}