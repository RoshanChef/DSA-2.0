#include <bits/stdc++.h>
using namespace std;

// Approach 1
void revese(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    stack<int> ans;
    while (s.size())
    {
        ans.push(s.top());
        s.pop();
    }
    s = ans;
}

void insert_Bottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int val = s.top();
    s.pop();

    insert_Bottom(s, data);
    s.push(val);
}
// Approach 2
void reverse_2(stack<int> &s)
{
    if (s.empty())
        return;

    // top side
    int val = s.top();
    s.pop();

    // revese
    reverse_2(s);

    // insertbottom
    insert_Bottom(s, val);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // revese(s);
    reverse_2(s);

    while (s.size())
    {
        int val = s.top();
        cout << val << " ";
        s.pop();
    }
    return 0;
}