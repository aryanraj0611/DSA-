#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter number"<<endl;
    cin>>n;
    char ch= 'A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        ch++;
    }
    return 0;
}