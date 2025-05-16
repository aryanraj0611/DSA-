#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& arr, int target){
    int begin=0, end= arr.size()-1;
    int ans=arr.size();
    while(begin<=end){
        int mid=begin + (end-begin)/2;
        if(arr[mid]>=target){
            ans=mid;
            end=mid-1;
        }
        else{
            begin=mid+1;
        }
        }
    return ans;
}    
int main (){
    int size;
    cout<<"enter size";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int result=binary(arr,target);
    cout<<result;
}