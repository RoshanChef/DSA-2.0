#include <bits/stdc++.h>
using namespace std;

void solve(queue<int> &q, int k)
{
    if (q.empty() || k == 0)
        return;

    int val = q.front();
    q.pop();

    solve(q, k - 1);

    q.push(val);
}

void reverse_k(queue<int> &q, int k)
{
    solve(q, k);
    int len = q.size() - k;
    while (len)
    {
        int val = q.front();
        q.pop();
        q.push(val);
        len--;
    }
}

void print(queue<int> &q)
{
    if (q.empty())
        return;
    int len = q.size();
    while (len)
    {
        int val = q.front();
        cout << val << " ";
        q.pop();
        q.push(val);
        len--;
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    print(q);

    reverse_k(q, 3);

    print(q);

    return 0;
}