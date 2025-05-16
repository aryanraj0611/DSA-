#include<bits/stdc++.h>
using namespace std;
int intersection(vector<int>& arr1, int n1, vector<int>& arr2, int n2){
    int i=0,j=0;
    vector<int> inter;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            if(inter.size()==0 || inter.back()!=arr1[i]){
            inter.push_back(arr1[i]);
        }
        i++;
        j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i=0;i<inter.size();i++){
        cout<<inter[i]<<" ";
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<n1;i++){
        int num1;
        cin>>num1;
        arr1.push_back(num1);
    }
    for(int i=0;i<n2;i++){
        int num2;
        cin>>num2;
        arr2.push_back(num2);
    }
    intersection(arr1, n1, arr2, n2);
    return 0;
}