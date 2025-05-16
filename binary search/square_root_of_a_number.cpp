#include<bits/stdc++.h>
using namespace std;
int root(int n){
    int low=0;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            if((mid+1)*(mid+1)>n){
                return mid;
            }
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
    }

int main(){
    int n;
    cin>>n;
    int result= root(n);
    cout<<result;
}