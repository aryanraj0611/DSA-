#include<iostream>
using namespace std;
int main(){
    int i=1,n,c=1;
    cout<<"enter number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}