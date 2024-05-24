#include <iostream>
#include <stack>

using namespace std;

// Approach 1
class queue
{
    stack<int> s1;
    stack<int> s2;

public:
  
    void push(int data)
    {
        // insert at bottom
        if (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        if (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop()
    {
        int val;
        if (!s1.empty())
        {
            val = s1.top();
            s1.pop();
        }
        else
            val = -1;
        cout << "val out " << val << endl;
    }

    int front()
    {
        if (!s1.empty())
            return s1.top();
        else
            return -1;
    }
  
    bool isEmpty()
    {
        return s1.empty();
    }
};

// Approach 2
class Queue
{

    stack<int> input;
    stack<int> output;

public:

    void enque(int data)
    {
        input.push(data);
    }

    void deque()
    {
        // empty
        if (empty())
        {
            cout << "Queue is empty\n";
            return;
        }

        // input -> output
        while (!input.empty())
        {
            output.push(input.top());
            input.pop();
        }

        output.pop();
    }

    bool empty()
    {
        if (input.empty() && output.empty())
            return 1;
        return 0;
    }

    int front()
    {
        // empty
        if (input.empty() && output.empty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        // input -> output
        if (!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        return output.top();
    }
};

int main()
{
    // queue q;
    // if (q.isEmpty())
    // {
    // 	cout<<"it is empty .. " <<endl;
    // }
    // q.push(1);
    // q.push(2);
    // q.pop();
    // q.pop();
    // cout<<q.front() <<endl;

    Queue que;
    que.enque(10);
    que.enque(20);
    que.deque();
    cout << "front ele " << que.front() << endl;
    cout << que.empty() << endl;

    return 0;
}