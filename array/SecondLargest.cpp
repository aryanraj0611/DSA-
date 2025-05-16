#include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> &arr,int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]< largest && arr[i]>slargest){
            slargest= arr[i];
        }
    }
    return slargest;
}

int secondsmallest(vector<int> &arr, int n){
    int smallest= INT_MAX;
    int ssmallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int slargest= secondlargest(arr,n);
    int ssmallest= secondsmallest(arr,n);
    // cout<<"Second smallest is "<<ssmallest<<endl;
    cout<<"second largest is "<<slargest<<endl;
    return 0;
}   