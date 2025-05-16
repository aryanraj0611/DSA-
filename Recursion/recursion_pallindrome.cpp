#include<iostream>
using namespace std;
int pal(int i,char str[], int n){
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    pal(i+1,str,n);
}
int main(){
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    char a=pal(0, str,n);
    if(a){
        cout<<"Pallindrome";
    }
    else{
        cout<<"not";
    }
    return 0;
}