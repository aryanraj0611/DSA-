#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& nums, int target){
    int begin=0, end= nums.size()-1;
    while(begin<=end){
        int mid=(begin+end)/2;
        if(target==nums[mid]){
            return mid;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
        else{
            begin=mid+1;
        }
    }
    return -1;
}
int main (){
    int size;
    cout<<"enter size";
    cin>>size;
    vector<int> nums(size);
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int result=binary(nums,target);
    cout<<result;
}