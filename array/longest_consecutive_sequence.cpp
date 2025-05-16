#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>& arr, int n, vector<int>& result){

//BRUTE    
    // int longest=1;
    // for(int i=0;i<n;i++){
    //     int count=1;
    //     int x=arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]-x==1){
    //             count++;
    //             x+=1;

    //         }
    //     }
    //     if(count>longest){
    //         longest=count;
    //     }
    // }return longest;


// BETTER
    // sort(arr.begin(),arr.end());
    // int longest=1;
    // int i=0;
    // int last;
    // int count=1;
    // last=arr[0];
    // while(i<n){
    //     if(arr[i]-last==1){
    //         count++;
    //     }
    //     else if(arr[i]==last){

    //     }
    //     else{
    //         count=1;
    //     }
    //     if(count>longest){
    //         longest=count;
    //     }
    //     last=arr[i];
    //     i++;
    // }
    // return longest;


// OPTIMAL
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }   
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> result;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int a=consecutive(arr,n, result);
    cout<<a;
}