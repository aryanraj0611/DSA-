// BRUTE FORCE SOLUTION
// #include<bits/stdc++.h>
// using namespace std;
// int twosum(vector<int>& arr,int n, int target,vector<int> &v){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 v.push_back(i);
//                 v.push_back(j);
//                 return 1;
//             }
//         }

//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         arr.push_back(num);
//     }
//     int target;
//     cout<<"enter target";
//     cin>>target;
//     twosum(arr,n,target,v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }



// BETTER SOLUTON
#include<bits/stdc++.h>
using namespace std;
pair<int,int> twosum(vector<int>& arr, int target){
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        int a=arr[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]=i;
    }
    return {-1,-1};
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
    int target;
    cout<<"enter target";
    cin>>target;
    pair<int,int> a=twosum(arr,target);
    cout<<a.first<<" "<<a.second;
    return 0;
}