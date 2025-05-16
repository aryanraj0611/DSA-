#include<bits/stdc++.h>
using namespace std;
int search(vector<vector<int> >& arr, int target){
    int n=arr.size();
    int m=arr[0].size();
    int low=0,high=m*n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row=mid/m, col=mid%m;
        if(arr[row][col]==target) return 0;
        else if(arr[row][col]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}
int main(){
    int row;
    int column;
    cout<<"enter row";
    cin>>row;
    cout<<"enter column";
    cin>>column;
    vector<vector< int > > arr(row, vector<int> (column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter target";
    int target;
    cin>>target;
    int a=search(arr,target);
    cout<<a;
}