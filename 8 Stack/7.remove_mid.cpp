#include <bits/stdc++.h>
using namespace std;

void remove(stack<int> &s, int tar)
{
    if (tar == 0)
    {
        cout << "\nout " << s.top() << endl;
        s.pop();
        return;
    }
    int val = s.top();
    s.pop();

    // recursive
    remove(s, --tar);

    // backTrack
    s.push(val);
}
void print(stack<int> &s)
{
    if (s.empty())
        return;
    int val = s.top();
    cout << val << " ";\

    s.pop();
    print(s);
    s.push(val);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    int mid = s.size() >> 1;
    print(s);
    remove(s, mid);
    print(s);

    return 0;
}