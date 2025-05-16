#include<bits/stdc++.h>
using namespace std;
int movezero(vector<int>& arr, int n){
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-1;j++){
    //         if(arr[j]==0){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }

    // }
    int i=0;
    int j =n-1;
    while(i<j){
        if(arr[i]==0 ){
            if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            }
        }
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}