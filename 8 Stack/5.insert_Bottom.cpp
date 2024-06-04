#include <bits/stdc++.h>
using namespace std;
void insertBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int val = s.top();
    s.pop();

    // Recursive
    insertBottom(s, data);
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
    insertBottom(s, 9);

    while (s.size())
    {
        int val = s.top();
        cout << val << " ";
        s.pop();
    }

    return 0;
}