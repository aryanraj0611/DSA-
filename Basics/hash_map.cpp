#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // pre calculation
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        // fetch
        int number;
        cin>>number;
        cout<<mpp[number]<<" ";

    }
    return 0;
}