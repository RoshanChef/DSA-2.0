#include <bits/stdc++.h>
using namespace std;

class MinStack
{
    int minEle;
    stack<int> s;

public:
    int getMin()
    {
        if (s.empty())
            return -1;
        return minEle;
    }

    int pop()
    {
        if (s.empty())
            return -1;

        if (s.top() >= minEle)
        {
            int ans = s.top();
            s.pop();
            return ans;
        }
        else
        {
            int ans = minEle;
            minEle = 2 * minEle - s.top();
            s.pop();
            return ans;
        }
    }

    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            minEle = x;
        }
        else
        {
            if (x >= minEle)
            {
                s.push(x);
            }
            else
            {
                // x<minEle
                s.push(2 * x - minEle);
                minEle = x;
            }
        }
    }
};


int main(){

    MinStack m; 
    m.push(8); 
    m.push(2); 
    m.push(3); 
    m.push(4); 
    m.push(2); 
    m.pop(); 
    m.pop(); 

    cout<<m.getMin()<<endl;

    return 0; 
}