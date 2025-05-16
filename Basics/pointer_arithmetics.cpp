#include<iostream>
using namespace std;
int main(){
    int marks[]= {32,99,38,51};
    int* p= marks;
    cout<<"the value of marks[0] is"<<*p<<endl;
    cout<<"the value of marks[1] is"<<*(p+1)<<endl;
    cout<<"the value of marks[2] is"<<*(p+2)<<endl;
    cout<<"the value of marks[3] is"<<*(p+3)<<endl;

    return 0;
}