#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.emplace_back(2);
    v.emplace_back(0);
    auto it = v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;

    for(auto a=v.rbegin();a!=v.rend();a++){
        cout<<*a<<" ";
    }


    // sorting array
    cout<<"sorted array"<<endl;
    sort(v.begin(),v.end());
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 
    // to delete an element
    cout<<"output for delete element code"<<endl;
    v.erase(v.begin());
    cout<<v[0]<<endl;

    // to delete multiple elements
    v.erase(v.begin(),v.begin() +3);
    cout<<v[0]<<endl;



    // to insert element
    // v.insert(location,number);
    cout<<"output after insert element"<<endl;
    vector<int>v1(2,100);
    v1.insert(v1.begin(),10);
    v1.insert(v1.begin()+2,5);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;
    // to add multiple elements
    // v.insert(location,number of times, number to add);
    cout<<"add multiple elements"<<endl;
    vector<int>v2(2,100);
    v2.insert(v2.begin(),2,10);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    cout<<endl;
    // remove last element
    // v.pop_back():
    cout<<"after removing last element"<<endl;
    v2.pop_back();
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }


    // LIST
    // all functions are similar to vector but we can push element in front also using push_front()


    }