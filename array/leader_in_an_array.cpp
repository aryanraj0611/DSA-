#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int>& arr, int n,vector<int>& result){
    // for(int i = 0; i < n; i++){
    //     int count =0;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]<arr[j]){
    //             count=1;
    //         }
    //     }
    //     if(count==0){
    //         result.push_back(arr[i]);
    //     }
    // }
    // return result;
    
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=maxi){
            maxi=arr[i];
            result.push_back(maxi);
        }
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> result;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    vector<int> res= leader(arr,n,result);
    for(int i=0;i<res.size();i++){
        cout<<result[i]<<" ";
    }
}