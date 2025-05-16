#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come to party"<<endl;
    }    
    else if(age==18){
        cout<<"get pass"<<endl;
    }
    else{
        cout<<"you can come to party"<<endl;
    }
    return 0;
}  