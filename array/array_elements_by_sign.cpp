#include<bits/stdc++.h>
using namespace std;
int sign(vector<int>& arr, int n){
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            a.push_back(arr[i]);
        }
        if(arr[i]<0){
            b.push_back(arr[i]);
        }
    }
    int p=0,q=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(p<a.size()){arr[i]=a[p];
            p++;}
        }
        else{
            if(q<b.size()){
            arr[i]=b[q];
            q++;}
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int nums;
        cin>>nums;
        arr.push_back(nums);
    }
    sign(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}