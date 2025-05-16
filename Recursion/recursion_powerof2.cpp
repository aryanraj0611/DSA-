#include<iostream>
#include<math.h>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int a=power(n-1);
    int b= 2* a;
    return b;
}

int main(){
    int n,ans=0;
    cin>>n;
    ans=power(n);
    cout<<ans;
    return 0;
}