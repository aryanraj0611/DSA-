#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    // pre calculation
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char s;
        cin>>s;
        // fetch
        cout<<hash[s-'a']<<" ";
    }
    return 0;
}