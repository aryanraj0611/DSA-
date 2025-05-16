#include<iostream>
using namespace std;
int a=0;
int sum(int i,int arr[], int size){
    if(i==size){
        return 1;
    }
    a+=arr[i];
    sum(i+1,arr,size);
    return a;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int b= sum(0, arr,size);
    cout<<b;
    return 0;
}