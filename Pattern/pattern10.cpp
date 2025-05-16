#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter number"<<endl;
    cin>>n;
    while(i<=n){
        int j=i;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}