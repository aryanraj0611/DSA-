#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}