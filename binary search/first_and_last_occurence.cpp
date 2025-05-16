#include<bits/stdc++.h>
using namespace std;
    int lower(vector<int>& nums, int target){
        int lb=nums.size();
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]>=target){
                lb=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lb;
    }
    int upper(vector<int>& nums, int target){
        int ub=nums.size();
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                ub=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ub;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lower(nums,target);
        if(lb==nums.size() || nums[lb]!=target){
            return {-1,-1};
        }
        return{lb,upper(nums,target)-1};
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
        int target;
        cin>>target;
        vector<int> v = searchRange(nums,target);
        cout<<v[0]<<" "<<v[1];
    }