// better than merge sort because of space complexity
#include<bits/stdc++.h>
using namespace std;

// for sub arrays
int f(int arr[], int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(pivot>=arr[i] && i<high){
        i++;
    }
    while(pivot<arr[j] && j>low){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
    }
    swap(arr[low],arr[j]);
    return j;
}

int qs(int arr[], int low, int high){
    if(low<high){
        int pi=f(arr,low,high);
        qs(arr,low,pi-1); //for left sub array
        qs(arr,pi+1,high); //for right sub array
    }
}


int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}