#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>& nums){
    int count=0;
    int el=0;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            count=1;
            el=nums[i];
        }
        else if(nums[i==el]){
            count++;
        }
        else{
            count--;
        }
    }
    int c1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==el){
            c1++;
        }
    }
    if(c1>nums.size()/2){
        return el;
    }
    return -1;
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
    int result = majority(nums);
    cout<<result;
    return 0;
}