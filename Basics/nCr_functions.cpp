#include<iostream>
using namespace std;
int comb(int n, int r){
    int a=1,b=1,d=1;
    for(int i=n;i>=1;i--){
        a=a*i;
    }
    for(int j=r;j>=1;j--){
        b=b*j;
    }
    int c=n-r;
    for(int k=c;k>=1;k--){
        d=d*k;
    }
    int e= a/(b*d);
    return e;
}
int main(){
    int n,r;
    cin>>n>>r;
    int f=comb(n,r);
    cout<<f<<endl;
}