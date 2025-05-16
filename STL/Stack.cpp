#include<bits/stdc++.h>
using namespace std;
int main(){

    // STACK is based on LIFO
    // mainly 3 parts: push,pop and top

    
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top();
    // 3 is entered in last so 3 will be at top
    cout<<endl;

    st.pop();
    // top element 3 will be removed
    cout<<st.top();
    // now 2 is at the top

    cout<<endl;


    // QUEUE is based on FIFO
    cout<<"here queue output"<<endl;
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl;;
    cout<<q.back()<<endl;
    q.back()+=5;
    cout<<q.back()<<endl;


    // to remove element from queue
    q.pop();
    // first element is removed from queue so 2 becomes the first element
    cout<<q.front();  //prints 2
    cout<<endl;



    // priority_queue is used to store maximum at the top
    cout<<"priority queue"<<endl;
    priority_queue<int>pq;
    pq.push(5);
    pq.push(3);
    pq.push(8);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
    
    cout<<endl;


    // to store minimum at the top
    // priority_queue<int,vector<int>,grater<int>>pq;


    // SET 
    // stores sorted and unique elements
    cout<<"output for set"<<endl;
    set<int>set;
    set.insert(1);
    set.insert(1);
    set.insert(3);
    set.insert(2);
    auto it= set.find(3);
    cout<<&(*it)<<endl; //prints the address
    cout<<*(it)<<endl;  //prints the element

    auto i= set.find(4);
    cout<<&(*i)<<endl; //if element not present then prints the address next to last element
    cout<<*(i);  // if element not present then prints random value

    cout<<endl;


    // MAP
    // stores in sorted order
    // define dby {key,value}
    // to print we can use find()
    cout<<"output for map"<<endl;
    map<int,int> mp;
    mp[1]=2;
    mp.emplace(3,1);
    cout<<mp[1]<<endl;
    cout<<mp[3]<<endl;

    // to print all elements
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    // alternate method to print
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}