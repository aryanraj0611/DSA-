#include<iostream>
using namespace std;
int max(int num[], int size){
    int large=num[0];
    for(int i=0;i<size;i++){
        if(num[i]>=large){
            large=num[i];
        }
    }
    return large;
}
int main(){
    int size;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    int large= max(num, size);
    cout<<large<<endl;
}