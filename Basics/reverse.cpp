#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long int fact=1;
        for(int j=n;j>0;j--){
            fact=fact*j;
        }int count=0;
        long long int temp=fact;
        while(temp>0){
            count++;
            temp=temp/10;
        }
        int r=count-1,s;
        for(long long int i=fact;i!=0;i/=10){
            s=i%(int)pow(10,r);
            r--;
            cout<<s;
        }
    }
}
