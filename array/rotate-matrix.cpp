#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int> >& arr){
    int n=arr.size();
    int m=arr[0].size();
//BRUTE SOLUTION 
    // vector<vector<int> > result(n,vector<int>(m));
    // int k=1;
    // for(int i=0;i<n;i++){
    //     int l=0;
    //     for(int j=0;j<m;j++){
    //         result[l][m-k]=arr[i][j];
    //         l++;
    //     }
    //     k++;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         arr[i][j]=result[i][j];
    //     }
    // }


//OPTIMAL SOLUTION
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
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
    rotate(arr);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}