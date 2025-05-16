#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>& nums){
    if(nums.size()==1){
        return nums[0];
    }
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            count++;
        }
    }
    int large=INT_MIN;
    for(int i=0;i<nums.size();i++){
        int sum=nums[i];
        for(int j=i+1;j<nums.size();j++){
            sum=sum*nums[j];
            if(count%2==0){
                if(sum>large){
                    large=sum;
                }
            }
            else{
                if(sum>0){
                    if(sum>large){
                        large=sum;
                    }
                }
                else{
                    break;
                }
            }
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]>large){
            large=nums[i];
        }
    }
    return large;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int a=subarray(nums);
    cout<<a;
    return 0;
}