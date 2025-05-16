#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter number"<<endl;
    cin>>n;
    while(i<=n){
        char ch= 'A';
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}