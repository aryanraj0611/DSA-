#include<iostream>
// if multiple recursion calls then one will be completed then other will execute 
//  TC = (2^n)

using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    int a= fib(n);
    cout<<a;
    return 0;
}