set<int>set;
    set.insert(1);
    set.insert(1);
    set.insert(3);
    set.insert(2);
    auto it= set.find(0);
    cout<<*(it);