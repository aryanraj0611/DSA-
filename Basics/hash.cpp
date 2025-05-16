#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precalculation
    int hash[13]={0};
    // take hash size one more than the last element to be searched.. here we are looking for last element 12
    for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
    }
    
    // fetch
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
    
    return 0;
}