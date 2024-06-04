#include <bits/stdc++.h>
using namespace std;
void in(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int val = s.top();
    s.pop();
    in(s, data);
    s.push(val);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(50);
    s.push(70);


    in(s, 20);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}