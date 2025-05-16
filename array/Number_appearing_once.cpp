#include<bits/stdc++.h>
using namespace std;
int appear(vector<int>& arr, int n){

//BRUTE FORCE APPROACH    
    // sort(arr.begin(),arr.begin()+n);
    // for(int i=0;i<n;i+=2){
    //     if(arr[i]!=arr[i+1]){
    //         return arr[i];
    //     }
    // }

//OPTIMISED APPROACH
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int result = appear(arr,n);
    cout<<result;
    return 0;
}