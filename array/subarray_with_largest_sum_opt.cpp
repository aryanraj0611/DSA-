#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>& nums){
    int sum = 0;
    int maxi=nums[0];
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>=maxi){
            maxi=sum;
        }
        if(sum<0 ){
            sum=0;
        }
    }
    return maxi;
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