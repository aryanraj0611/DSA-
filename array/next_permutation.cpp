#include<bits/stdc++.h>
using namespace std;
int permutation(vector<int>& arr, int n){
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(arr.begin(),arr.end());
        return 0;
        }
    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
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
    permutation(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}