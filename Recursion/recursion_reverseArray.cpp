#include<iostream>
using namespace std;
int reverse(int i, int arr[], int size){
    if(i>=size/2){
        return 1;
    }
    swap(arr[i],arr[size-i-1]);
    reverse(i+1,arr ,size);
    
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(0, arr, size);
    for(int j=0;j<size;j++){
        cout<<arr[j];
    }
    return 0;
}