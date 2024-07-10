#include <bits/stdc++.h>
using namespace std;
void insert_sort(stack<int> &s, int data)
{
    if (s.empty() || (data > s.top() && !s.empty()))
    {
        s.push(data);
        return;
    }
    int val = s.top();
    s.pop();

    // recursive call
    insert_sort(s, data);

    // backtrack
    s.push(val);
}

void sort_stack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int val = s.top();
    s.pop();

    // recursive call
    sort_stack(s);

    // insertin sorted
    insert_sort(s, val);
}
int main()
{
    stack<int> s;
    s.push(-4);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(0);
    s.push(5);
    sort_stack(s);

    while (s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}