#include<iostream>
using namespace std;
int main(){
    int n,p,loc=-1;
    cout<<"enter size";
    cin>>n;
    int arr[n], start=0, end=n-1,mid;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter number to be searched";
    cin>>p;
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==p){
            loc=mid;
            break;
        }
        else if(arr[mid]<p){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    if(loc==-1){
        cout<<"element not found";
    }
    else{
        cout<<loc;
    }
    return 0;
}