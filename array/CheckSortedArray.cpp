#include<bits/stdc++.h>
using namespace std;
int b=0;
int check(vector<int> &arr, int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            b=0;
        }
        else{
            b=1;
            break;
        }
    }
    return b;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=check(arr,n);
    if(b==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}