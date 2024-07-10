#include <iostream>
#include <queue>
using namespace std;

class list_node
{
public:
    int index;
    list_node *next;

public:
    list_node(int index)
    {
        this->index = index;
        this->next = 0;
    }
};
class Nstack
{
    int *arr;
    list_node **Top;
    queue<int> q;

public:
    Nstack(int m_stack, int size)
    {
        // Array - Original
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            //free space
            q.push(i);
        }
        // Array - Top
        Top = new list_node *[m_stack];
        for (int i = 0; i < m_stack; i++)
        {
            Top[i] = 0;
        }
    }

    bool push(int m_stack, int ele)
    {
        if (q.empty())
            return 0;
        int index = q.front();
        --m_stack;
        if (Top[m_stack] == 0)
        {
            Top[m_stack] = new list_node(ele);
        }
        Top[m_stack]->next = new list_node(ele);
        return 1;
    }

    int pop(int m_stack)
    {
    }
    bool isEmpty()
    {
        if (q.empty())
            return 1;
        return 0;
    }
};

int main()
{
    Nstack stack(3, 6);
    stack.push(1, 10);
    stack.push(1, 10);
    stack.push(1, 10);
    stack.push(1, 10);
    stack.push(1, 10);
    stack.push(1, 10);

    cout << "\n=== end ===" << endl;
    return 0;
}