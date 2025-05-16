#include<bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int> >& arr){
    int n=arr.size();
    int m=arr[0].size();
    vector<int> result;
    int left=0;
    int right=m-1;
    int top=0;
    int bottom=n-1;
    while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
            result.push_back(arr[top][i]);
        }
        top++;
    for(int i=top;i<=bottom;i++){
        result.push_back(arr[i][right]);
    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        result.push_back(arr[bottom][i]);
    }
    bottom--;
    }
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        result.push_back(arr[i][left]);
    }
    left++;
    }
}
return result;
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
    vector<int> result= spiral(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}