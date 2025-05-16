#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++){
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
            // int temp=arr[i];
            // arr[i]=arr[min];
            // arr[min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
// selection sort is based on taking minimum at the first