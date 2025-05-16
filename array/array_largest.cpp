#include<iostream>
using namespace std;
int main(){
    int a[5]={5,7,2,9,4};
    int largest=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>=largest){
            largest=a[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}