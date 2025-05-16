#include<iostream>
using namespace std;
int main(){
    int a=4,b=6,c,d,e,f;
    c=a&b;
    d=a|b;
    e=~a;
    f=a^b;
    printf("%d%d%d%d",c,d,e,f);

    return 0;
}