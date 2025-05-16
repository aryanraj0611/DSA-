#include<iostream>
using namespace std;
int natural(int n){
    if(n==0){
        return 1;
    }
    cout<<n<<" ";
    natural(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    natural(n);
}