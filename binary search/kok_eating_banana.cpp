#include<bits/stdc++.h>
using namespace std;
int f(vector<int> nums){
    int m= *max_element(nums.begin(),nums.end());
    int low=0;
    int high=nums.size()-1;
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
    int result= f(nums);
    cout<<result;
}