#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"age is 18"<<endl;
        break;
    case 2:
        cout<<"age is 2"<<endl;
        break;
    default:
        cout<<"age not declared"<<endl;
        break;
    }
    
    return 0;
}