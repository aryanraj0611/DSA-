#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;;

    vector<int>v1(5,10);
    cout<<v1[0]<<" "<<v1[1]<<endl;

    // copy vector
    vector<int>v2(3,10);
    vector<int>v3(v2);
    cout<<v3[0];
    return 0;
}