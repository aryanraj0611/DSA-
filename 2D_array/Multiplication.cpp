#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"enter size of array";
    cin>>n;
    int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }
    int c[n][n];
    int q=0;
    for(int i=0;i<n;i++){
        int p=0;
        for(int j=0;j<n;j++){
            int temp=0;
            for(int k=0;k<n;k++){
                c[i][j]=a[i][j+k-p]*b[i+k-q][j]+ temp;
                temp=c[i][j];
            }
            p++;
        }
        q++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}