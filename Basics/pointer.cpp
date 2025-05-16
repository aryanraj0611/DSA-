#include<iostream>
using namespace std;
int main(){
    //ppinter is datatype which holds address of other datatypes
    int a=3;
    int* b= &a;
    // & shows address of operator
    cout<<"the address of a is"<<b<<endl;

    // * shows the value at the address
    cout<<"the value at adress of b is"<<*b<<endl;

    int** c= &b;
    cout<<"the address of b is"<<c<<endl;
    return 0;
}