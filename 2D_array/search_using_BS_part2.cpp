#include<bits/stdc++.h>
using namespace std;
pair<int,int> search(vector <vector <int> >& arr, int target){
    int n = arr.size();
    int m=arr[0].size();
    int row=0;
    int column=m-1;
    while(row<n && column>-1){
        if(arr[row][column]==target){
            return {row,column};
        }
        else if(arr[row][column]>target){
            column-=1;
        }
        else{
            row+=1;
        }
    }
    return {-1,-1};
}
int main(){
    int column,row;
    cout<<"enter row";
    cin>>row;
    cout<<"enter column";
    cin>>column;
    vector<vector <int > > arr(row,vector<int> (column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter target";
    int target;
    cin>>target;
    pair<int,int> ans=search(arr,target);
    cout<<"index of target is "<<ans.first<<","<<ans.second;
}