#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int arr[5];
        for(int i=0;i<5;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int count=0;
        if(sum>=35){
            cout<<0;
        }
        else{
            int gap=35-sum;
            int og=gap;
            for(int i=0;i<5;i++){
                if(og<=(10-arr[i])){
                    count=1;
                    break;
                }
                if(gap<=(10-arr[i]) && count>0){
                    count+=1;
                    break;
                }
                else{
                    gap=gap-(10-arr[i]);
                    count++;
                }
            }
            cout<<count*100;
        }
        cout<<endl;
        
    }
}
