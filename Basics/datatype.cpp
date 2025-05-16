#include<iostream>
using namespace std;
int g=6;
void sum(){
    int a;
    cout<<g;
}
int main(){
    int g=9;
    g=10;
    // int a=5;
    // int b=6;
    int a=5, b=6;
    float pi=3.14;
    char c='u';
    bool bo=true;
    sum();
    cout <<g<<bo;
    // cout<<"the value of a is "<<a<<"\nthe value of b is "<<b ;
    // cout<<"\nthe value of pi is "<<pi;
    // cout<<"\nthe value of c is "<<c;

    return 0;
}
//local variable is prefered over global variable
// if bool is true then returns 1 if false then returns 0
