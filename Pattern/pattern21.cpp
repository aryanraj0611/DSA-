#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number";
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=n-i+1){
            printf("%d",j);
            j++;
        }
        int k=1;
        while(k<i){
            printf("**");
            k++;
        }
        int l=n-i+1;
        while(l>=1){
            printf("%d",l);
            l--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}