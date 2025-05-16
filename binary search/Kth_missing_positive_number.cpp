//Brute done on Leetcode with O(N) 

#include<bits/stdc++.h>
using namespace std;
int search(vector<int> arr, int k){
    vector<int> nums;
if (arr.size() == 0) {
    return k;
}
if (arr[0] != 1) {
    for (int i = 0; i < k; i++) {
        if ((i + 1) < arr[0]) {
            nums.push_back(i + 1);
        }
    }
}
for (int i = 0; i < arr.size() - 1; i++) {
    int a;
    if ((arr[i] + 1) != arr[i + 1]) {
        a = arr[i + 1] - arr[i];
    }
    for (int j = 0; j < a - 1; j++) {
        nums.push_back(arr[i] + j + 1);
    }
}
if (nums.size() == 0) {
    return arr[arr.size() - 1] + k;
}
while (nums.size() <= k) {
    if (nums.back() < arr.back()) {
        nums.push_back(arr.back() + 1);
    } else {
        nums.push_back(nums.back() + 1);
    }
}
return nums[k - 1];

}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cout<<"enter target";
    cin>>k;
    int result= search(arr,k);
    cout<<result;
}