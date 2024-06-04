#include <iostream>
using namespace std;
class stack
{
    int data;
    stack *head;
    stack *next;

public:
    stack()
    {
        this->data = 0;
        this->head = 0;
        this->next = 0;
    }
    void push(int data)
    {
        stack *n = new stack();
        n->data = data;
        n->next = head;
        head = n;
    }

    int pop()
    {
        if (head == 0)
        {
            return -1;
        }
        stack *temp = head;
        head = head->next;
        int val = temp->data;
        // delete temp;
        return val;
    }

    int top()
    {
        if (head == 0)
        {
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        if (head == 0)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{

    stack s;
    s.push(5);
    s.push(3);
    s.push(1);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    // cout << s.pop() << endl;
    cout << "top " << s.top() << endl;
    if (s.empty())
        cout << "it is empty" << endl;
    else
        cout << "it is not empty" << endl;

    return 0;
}
