#include <iostream>
using namespace std;
class stack
{
    int top;
    int size;
    int *arr;

public:
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int value)
    {
        if (this->top == (this->size - 1))
        {
            cout << "stack overflow\n";
            return;
        }
        arr[++top] = value;
    }
    void pop()
    {
        int val = arr[top];
        cout << "val out " << val << endl;
        top--;
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        cout << "stack is empty\n";
        return -1;
    }

    int len()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if(top >= 0)
        {
            return false;
        }
        return 1;
    }
};

int main()
{
    stack a(2);
    a.push(20);
    a.push(10);
    a.push(50);
    cout << a.peek() << endl;
    cout << a.len() << endl;
    a.pop();

    return 0;
}