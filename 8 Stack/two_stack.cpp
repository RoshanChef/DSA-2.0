#include <iostream>
using namespace std;
class Twostack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    Twostack(int s)
    {
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        arr = new int(s);
    }
    void push1(int data)
    {
        if (top1 + 1 != top2)
        {
            arr[++top1] = data;
            return;
        }
        cout << "stack_1 overflow" << endl;
    }
    void push2(int data)
    {
        if (top2 - 1 != top1)
        {
            arr[--top2] = data;
            return;
        }
        cout << "stack_2 overflow" << endl;
    }
    int peek1()
    {
        if (top1 != -1)
        {
            return arr[top1];
        }
        return -1;
    }
    int peek2()
    {
        if (top2 != this->size)
        {
            return arr[top2];
        }
        return -1;
    }
    void pop1()
    {
        if (top1 != -1)
        {
            cout << "ele out is " << arr[top1] << endl;
            top1--;
            return;
        }
        cout << "stack_1 is empty" << endl;
    }

    void pop2()
    {
        if (top2 != size)
        {
            cout << "ele out is " << arr[top2] << endl;
            top2++;
            return;
        }
        cout << "stack_2 is empty" << endl;
    }
};

int main()
{
    Twostack a(6);
    a.push1(10);
    a.push1(20);
    cout << a.peek1() << endl;

    a.push2(40);
    a.push2(50);
    cout << a.peek2() << endl;
    a.pop2();
    a.pop2();
    a.pop2();
    a.pop1();
    a.pop1();
    a.pop1();

    return 0;
}