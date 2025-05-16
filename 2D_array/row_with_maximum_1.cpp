#include<bits/stdc++.h>
using namespace std;
int roww(vector<vector<int> >& arr){
    int count=0;
        int n=arr.size();
        int m=arr[0].size();
        int ind=-1;
        for(int i=0;i<n;i++){
            int num=0;
        int a= upper_bound(arr[i].begin(),arr[i].end(), 0)-arr[i].begin();
        num=m-a;
        if(num>count){
            count=num;
            ind=i;
        }
        }
        return ind;
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
    int in=roww(arr);
    cout<<in;
}