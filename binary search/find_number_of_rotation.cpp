#include<bits/stdc++.h>
using namespace std;
int rotation(vector<int> nums){
    int n = nums.size();
    int low=0,high=n-1;
    int ans=INT_MIN;
    int ind=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[low]<=nums[mid]){
            if(nums[mid]>=ans){
                ans=nums[mid];
                ind=mid;
            }
            low=mid+1;
        }
        else{
            if(nums[high]>=ans){
                ans=nums[high];
                ind=high;
            }
            high=mid-1;
        }
    }
    if(ind==n-1){
        return 0;
    }
    return ind;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int result= rotation(nums);
    cout<<result;
}