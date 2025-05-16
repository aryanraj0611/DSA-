#include<bits/stdc++.h>
using namespace std;
int stocks(vector<int>& arr, int n){
    // int maxi=-1;
    // for(int i=0;i<n;i++){
    //     int diff=-1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>=arr[i]){
    //             diff=arr[j]-arr[i];
    //         }
    //         if(diff>maxi){
    //             maxi=diff;
    //         }
    //     }
    // }
    // if(maxi==-1){
    //     return 0;
    // }
    // else{
    //     return maxi;
    // }
    int min=INT_MAX;
    int max=INT_MIN;
    int a,b;
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
            a=i;
        }
    }
    for(int i=a;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
            b=i;
        }
    }
    if(b>a){
        return max-min;
    }
    else{
        return 0;
    }
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
    int a=stocks(arr,n);
    cout<<a;
    return 0;
}