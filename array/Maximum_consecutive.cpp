#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>& arr, int n){

// BRUTE FORCE APPROACH
    // int max=-1;
    // for(int i=0;i<n;i++){
    //     int s=0;
    //     if(arr[i]==1){
    //         for(int j=i;j<n;j++){
    //             if(arr[j]==1){
    //                 s++;
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //     }
    //     if(s>max){
    //         max=s;
    //     }
    // }
    // return max;

// OPTIMIZED APPROACH
    int maxim=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>maxim){
                maxim=count;
            }
        }
        else{
            count=0;
        }
    }
    return maxim;
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
    int max= consecutive(arr,n);
    cout<<max;
    return 0;
}