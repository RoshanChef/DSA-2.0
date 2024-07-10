#include <bits/stdc++.h>
using namespace std;

int main()
{

    // implementation BST
    // sorted order
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for (int val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    // s.erase(s.begin();
    // s.erase(s.begin() , s.end());
    cout << "present or not  ? " << s.count(1) << endl;

    // returns iterator ...
    // set<int>::iterator itr = s.find(2);
    if (s.find(7) == s.end())
    {
        cout << "yes" << endl;
    }

    // for (auto it = itr; it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    for (int val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    multiset<int> mset; 
    mset.insert(10); 
    mset.insert(13); 
    mset.insert(13); 
    mset.insert(1); 

    for(auto val:mset){
        cout<<val<< " ";
    }

    return 0;
}