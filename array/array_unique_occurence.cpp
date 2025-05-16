#include<iostream>
using namespace std;
int occur(int arr[], int n){
    int k,l=0;
    int count[k];
    for(int i=0;i<n;i++){
        int m=1;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                count[l]=m;
                m++;
            }
        }
        l++;
        cout<<count[l];
    }
    int b=0;
    for(int p=1;p<k;p++){
        for(int a=p+1;a<k;a++){
            if(count[p]==count[a]){
                cout<<"false";
                b+=1;
                return 0;
            }
        }
    }
    if(b==0){
        cout<<"true";
    }
}

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    occur(arr, n);
    return 0;
}