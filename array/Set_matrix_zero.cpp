#include<bits/stdc++.h>
using namespace std;
void setzero(vector<vector<int>>& arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int> > result(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                for(int k=0;k<m;k++){
                    result[i][k]=0;
                }
                for(int k=0;k<n;k++){
                    result[k][j]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=result[i][j];
        }
    }

}
int main(){
    int n,m;
    cout<<"no of rows";
    cin>>n;
    cout<<"no of columns";
    cin>>m;
    vector<vector<int> > arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    setzero(arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}