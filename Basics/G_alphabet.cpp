#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int p=1;p<=n;p++){
        for(int q=1;q<=n;q++){
            if(q==1 || p==1 || p==n || (p==(n+1)/2 && q>n/2) || (q==n && p>n/2)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}