#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>& arr, int n){

    // BRUTE FORCE APPROACH

    // int a=0;
    // sort(arr.begin(),arr.end());
    // if(arr[0]!=0){
    //     return 0;
    // }
    // if(arr[0]==0 && arr.size()==1){
    // return 1;
    // }
    // for(int i=0;i<n-1;i++){
    //     if(arr[i+1]!= arr[i]+1){
    //         a=1;
    //         return arr[i]+1;
    //     }   
    // }
    // if(a==0){
    //     return arr[n-1]+1;
    // }
    // return -1;


    // OPTIMAL SOLUTION 
    int s1,s2=0;
    s1=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        s2+=arr[i];
    }
    if(s1==s2){
        return 0;
    }
    else{
        return s1-s2;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
         cin>>num;
        arr.push_back(num);
    }
    int c= missing(arr,n);
    cout<<"missing nubmer is "<<c;
}