#include<iostream>
using namespace std;
int count(int a){
    for(int i=1;i<=a;i++){
        cout<<i<<endl;
    }
}
int main(){
    int a;
    cout<<"enter number"<<endl;
    cin>>a;
    count(a);
}