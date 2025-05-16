#include<bits/stdc++.h>
using namespace std;
void unionofarray(vector<int>& arr1, int n1, vector<int>& arr2, int n2){
    int i=0,j=0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(temp.size()==0 || temp.back()!=arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(temp.size()==0 || temp.back()!=arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(temp.size()==0 || temp.back()!=arr2[j]){
        temp.push_back(arr2[j]);
        }
        j++;
        
    }
    while(i<n1){
        if(temp.size()==0 || temp.back()!=arr1[i]){
        temp.push_back(arr1[i]);
        }
        i++;
        
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
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
    unionofarray(arr1, n1, arr2, n2);
    return 0;
}