#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Operators in C++:\n";
    // Assignment operator
    cout<<"the value of a+b is:"<<a+b<<endl;
    cout<<"the value of a-b is:"<<a-b<<endl;
    cout<<"the value of a*b is:"<<a*b<<endl;
    cout<<"the value of a/b is:"<<a/b<<endl;
    cout<<"the value of a%b is:"<<a%b<<endl;
    cout<<"the value of a++ is:"<<a++<<endl;
    cout<<"the value of a-- is:"<<a--<<endl;
    cout<<"the value of ++a is:"<<++a<<endl;
    cout<<endl;

    // Comparison operator
    cout<<"the value of a==b is:"<<(a==b)<<endl;
    cout<<"the value of a!=b is:"<<(a!=b)<<endl;
    cout<<"the value of a>b is:"<<(a>b)<<endl;
    cout<<"the value of a<b is:"<<(a<b)<<endl;
    cout<<"the value of a>=b is:"<<(a>=b)<<endl;
    cout<<"the value of a<=b is:"<<(a<=b)<<endl;
    cout<<endl;

    //logical operators
    cout<<"the value of this logical and operator is:"<<((a==b)&&(a<b))<<endl;
    cout<<"the value of this logical or operator is:"<<((a==b)||(a<b));
    return 0;
}

