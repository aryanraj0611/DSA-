#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int j=1;j<=n;j++){
        cout<<hash[j]<<" ";
    }
    return 0;
}