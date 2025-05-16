// bubble sort is based on keeping the maximum element at the last position

#include<iostream>
using namespace std;
int main(){
    int n,t;
    cout<<"enter size";
    cin>>n;
    int a[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n-1;k++){
            if(a[k]>a[k+1]){
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
        cout<<"runs"<<endl;
    }
    for(int l=0;l<n;l++){
        cout<<a[l];
    }
    return 0;
}