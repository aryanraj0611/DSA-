#include<bits/stdc++.h>
using namespace std;
int reverseArray(vector<int>& arr, int n, int k){
    reverse(arr.begin(),arr.begin()+n-k);
    reverse(arr.begin()+n-k,arr.end());
    reverse(arr.begin(),arr.end());

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
    int k;
    cin>>k;
    reverseArray(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}