// BETTER SOLUTION

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sort(vector<int>& arr, int n, vector<int>& v){
//     int a=0,b=0,c=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             a+=1;
//         }
//         else if(arr[i]==1){
//             b+=1;
//         }
//         else{
//             c+=1;
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     if(i<a){
//     //         v.push_back(0);
//     //     }
//     //     else if(i<a+b){
//     //         v.push_back(1);
//     //     }
//     //     else{
//     //         v.push_back(2);
//     //     }
//     // }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         arr.push_back(num);
//     }
//     vector<int> vec=sort(arr,n,v);
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }


// OPTIMAL SOLUTION
#include<bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int>& arr, int n){
    int low=0,mid=0,high=n-1;
    while(mid<high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    
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
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


