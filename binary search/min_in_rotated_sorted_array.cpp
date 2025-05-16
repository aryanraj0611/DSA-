#include<bits/stdc++.h>
using namespace std;
int minimum(vector<int> nums){
    int n=nums.size();
    int low=0,high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(high+low)/2;
        if(nums[low]<=nums[mid]){
            ans=min(ans,nums[low]);
            low=mid+1;
        }
        else{
            high=mid-1;
            ans=min(ans,nums[mid]);
        }
    }
    return ans;
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
    int result= minimum(nums);
    cout<<result;
}