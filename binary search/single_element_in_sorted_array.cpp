#include<bits/stdc++.h>
using namespace std;
int single(vector<int> nums){
    // int ans=0;
    // for(int i = 0; i < nums.size(); i++){
    //     ans=ans^nums[i];
    // }
    // return ans;


//MINE CODE
    // int n=nums.size();
    // int low=0,high=n-1;
    // if(n==1){
    //     return nums[0];
    // }
    // if(nums[0]!=nums[1]){
    //     return nums[0];
    // }
    // if(nums[n-1]!=nums[n-2]){
    //     return nums[n-1];
    // }
    // while(low<=high){
    //     int low=0,high=nums.size()-1;
    //     int mid=(low+high)/2;
    //     if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
    //         return nums[mid];
    //     }
    //     if(nums[mid]==nums[mid+1]){
    //         nums.erase(nums.begin()+mid);
    //         nums.erase(nums.begin()+mid);
    //     }
    //     else if(nums[mid]==nums[mid-1]){
    //         nums.erase(nums.begin()+mid);
    //         nums.erase(nums.begin()+mid-1);
    //     }
    // }
    // return -1;


    int n=nums.size();
    int low=1,high=n-2;
    if(n==1){
        return nums[0];
    }
    if(nums[0]!=nums[1]){
        return nums[0];
    }
    if(nums[n-1]!=nums[n-2]){
        return nums[n-1];
    }
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
            return nums[mid];
        }
        if(mid%2==0 ){
            if(nums[mid]==nums[mid-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]==nums[mid+1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } 
    }
    return 0;
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
    int result= single(nums);
    cout<<result;
}