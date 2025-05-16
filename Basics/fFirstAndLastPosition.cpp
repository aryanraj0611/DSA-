#include<iostream>
using namespace std;
int main(){
    int n,p,a=-1,b=-1;
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
            a=mid;
            end=mid-1;
        }
        else if(arr[mid]<p){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    if(a==-1){
        cout<<"element not found";
    }
    else{
        cout<<"first position is"<<a;
    }

    start=0;end=n-1;
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==p){
            b=mid;
            start=mid+1;
        }
        else if(arr[mid]<p){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    if(b==-1){
        cout<<"element not found";
    }
    else{
        cout<<"last position is"<<b;
    }
    return 0;
}