#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>& nums){
    int large=nums[0];
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
        sum+=nums[j];
        if(sum>=large){
            large=sum;
        }
        };
    }
    return large;
}
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int result = sum(nums);
    cout<<result;
    return 0;
}