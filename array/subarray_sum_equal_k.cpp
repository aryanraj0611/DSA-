#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int>& arr, int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
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
    int k;
    cout<<"enter k";
    cin>>k;
    int a=subarray(arr,k);
    
    cout<<a;
    return 0;
}