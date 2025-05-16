#include<iostream>
using namespace std;
int unique(int arr[], int n){
    
    // for(int i=0;i<n;i++){
    //     int a=0;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             a+=1;
    //             break;
    //         }
    //     }
    //     if(a>0){
    //         cout<<arr[i];
    //         return 0;
    //     }
    // }


    //alternate method
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr, n);
}