#include<bits/stdc++.h>
using namespace std;
// int degree(int arr[][4], int node, int col){
//     int i=node-1;
//     int count=0;
//     for(int j=0;j<col;j++){
//         if(arr[i][j]==1){
//             count++;
//         }
//     }
//     return count;
// }
int main(){
    int n,m;
    cout<<"enter row";
    cin>>n;
    cout<<"enter column";
    cin>>m;
    int arr[n][m];
    string S="1234";
    for(int i=0;i<S.length();i++){
        for(int j=0;j<S.length();j++){
            if(i==j){
                arr[i][j]=0;
            }
            else{
            cout<<"user want edge between "<<S[i]<<" and "<<S[j]<<"?";
            string a;
            cin>>a;
            if(a=="Y"){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"enter any node to find its degree: "<<endl;
    int node;
    cin>>node;
    int i=node-1;
    int count=0;
    for(int j=0;j<m;j++){
        if(arr[i][j]==1){
            count++;
        }
    }
    cout<<count;
}
