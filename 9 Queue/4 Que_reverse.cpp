#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Approach 1
void reverse(queue<int> &que)
{
    stack<int> st;
    // empty the queue
    while (!que.empty())
    {
        st.push(que.front());
        que.pop();
    }

    // fill reverse order in Queue
    while (!st.empty())
    {
        que.push(st.top());
        st.pop();
    }
}

// Approach 2
void reverse2(queue<int> &que)
{
    if (que.empty())
        return;
    int val = que.front();
    que.pop();
    reverse2(que);
    que.push(val);
}

void print(queue<int> &q)
{
    if (q.empty())
        return;
    int len = q.size();
    while (len)
    {
        int val = q.front(); 
        cout<<val<<" ";
        q.pop(); 
        q.push(val); 
        len--;
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << "Front " << q.front() << endl;
    cout << "Back " << q.back() << endl;
    print(q);
    cout << "After reverse" << endl;
    reverse2(q);
    cout << "Front " << q.front() << endl;
    cout << "Back " << q.back() << endl;
    print(q); 

    return 0;
}
