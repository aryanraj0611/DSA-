// // BETTER USING HASH ARRAY
// #include<bits/stdc++.h>
// using namespace std;
// int majority(vector<int>& nums, int n){
//     int count=0,large=nums[0];
//     for(int i=0;i<n;i++){
//             if(nums[i]>large){
//                 large=nums[i];
//             }
//     }
//     vector<int> hash(large+1,0);
//     for(int i=0;i<large;i++){
//         hash[nums[i]]++;
//     }
//     for(int i=0;i<=large;i++){
//         if(hash[i]>large/2){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int> nums;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         nums.push_back(num);
//     }
//     int result = majority(nums, n);
//     cout<<result;
//     return 0;
// }


// BETTER SOLUTION USING HASH MAP
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>& nums, int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
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
    int result = majority(nums, n);
    cout<<result;
    return 0;
}