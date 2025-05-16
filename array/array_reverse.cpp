// #include<iostream>
// using namespace std;
// int reverse( int arr[], int size){
//     for(int i=size-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     reverse(arr, size);
// }



#include<iostream>
using namespace std;
int reverse( int arr[], int size){
    int start=0; int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
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