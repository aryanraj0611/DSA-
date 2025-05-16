#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& arr, int target){
    int l= lower_bound(arr.begin(), arr.end(), target)-arr.begin();
    return l;
}    
int main (){
    int size;
    cout<<"enter size";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int result=binary(arr,target);
    cout<<result;
}