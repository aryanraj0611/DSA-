#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& arr, int target){
    int begin=0, end= arr.size()-1;
    int ans=arr.size();
    while(begin<=end){
        int mid = begin + (end - begin) / 2;
        if(target>arr[begin] && target< arr[end] && begin==end-1){
            return begin;
        }
        if(target>arr[mid] && target< arr[end] && mid==end-1){
            return mid;
        }
        if(target>arr[begin] && target< arr[mid] && begin==mid-1){
            return begin;
        }
        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end=mid-1;
            if(target>arr[end] && target<arr[end+1]){
                return end;
            }
        }
        else{
            begin=mid+1;
            if(target<arr[begin] && target>arr[begin-1]){
                return begin-1;
            }
        }
    }
    return -1;

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