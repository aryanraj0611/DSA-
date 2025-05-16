#include<iostream>
using namespace std;
int reverse( int arr[], int size){
    int start=0; int end=1;
    while(end<size){
        swap(arr[start], arr[end]);
        start=start+2;
        end=end+2;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr, size);
}