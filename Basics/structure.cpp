#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int ID;
    char favChar;
    float salary;
}ep;

union money{
    int rice; //uses 4 bits
    char car;  // uses 1 bits
    float pounds;  // uses 4 bits
    // maximum 4 bits space will be used therefore it is used to save space
};
int main(){
    union money m1;
    m1.rice=34;
    cout<<m1.rice;


    ep aryan;
    aryan.ID=13;
    aryan.favChar='c';
    aryan.salary=120000;
    cout<<aryan.salary;
    return 0;
}
