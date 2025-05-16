#include<iostream>
using namespace std;
int oddeven(int a){
    if(a%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
    int a;
    cout<<"enter number"<<endl;
    cin>>a;
    oddeven(a);
    return 0;
}
