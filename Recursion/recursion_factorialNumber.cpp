#include<iostream>
using namespace std;
int b=0;
int fact(int n, int i=1, int fa=1){
    if(fa>n){
        return 1;
    }
    cout<<fa<<" ";
    fact(n,i+1, fa*(i+1));

}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}