#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    vector<int>temp; //temporary array to store elements
    int left=low; //astarting index of left half of array
    int right=mid+1; //starting index of right half of array

    // merging the two sub array
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // adding the remaining part of left sub array
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    // adding the remaining part of right sub array
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    // copying the sorted array from temporary to original array
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }    
}
void mergesort(int arr[], int low,int high){
    if(low>=high){
        return; 
    }
    int mid=(low+high)/2;
    // recursively divide the array into two parts
    mergesort(arr,low,mid); //left half
    mergesort(arr,mid+1,high); //right half
    merge(arr,low,mid,high); //function for merging sorted half
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
