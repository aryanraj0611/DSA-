#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter number"<<endl;
    cin>>n;
    char ch = 65;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}