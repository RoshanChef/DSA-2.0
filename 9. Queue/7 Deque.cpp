#include <iostream>
using namespace std;

class Dequq
{
private:
    int front;
    int rear;
    int *arr;
    int size;

public:
    Dequq(int size)
    {
        this->front = -1;
        this->rear = -1;
        this->arr = new int[size];
        this->size = size;
    }
    void push_front(int data)
    {
        if (empty())
        {
            front++, rear++;
            arr[front] = data;
            return;
        }
        else if (front == 0)
        {
            front = this->size - 1;
            arr[front] = data;
            return;
        }
        front--;
        arr[front] = data;
    }
    void push_back(int data)
    {
        if (empty())
        {
            front++;
            rear++;
            arr[front] = data;
            return;
        }
        // overflow
        else if ((rear + 1) % size == front)
        {
            cout << "Queue is overflow" << endl;
            return;
        }
        rear = (rear + 1) % size;
        arr[rear] = data;
    }
    int pop_front()
    {
        // empty
        if (empty())
        {
            return -1;
        }
        else if (front == rear)
        {
            int val = arr[front];
            front = 0;
            rear = 0;
            return val;
        }
        int val = arr[front];
        front = (front + 1) % size;
        return val;
    }
    int pop_back()
    {
        // empty
        if (empty())
        {
            return -1;
        }
        else if (front == rear)
        {
            int val = arr[front];
            front = -1;
            rear = -1;
            return val;
        }
        else if (rear == 0)
        {
            int val = arr[rear];
            rear = size - 1;
            return val;
        }
        int val = arr[rear];
        rear = rear - 1;
        return val;
    }
    bool empty()
    {
        // empty
        if (front == -1)
        {
            return 1;
        }
        return 0;
    }
    int front_()
    {
        // empty
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        return arr[front];
    }
    int back_()
    {
        // empty
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        return arr[rear];
    }
};

int main()
{
    Dequq dq(6);
    
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(50);

    cout << dq.front_() << endl;
    cout << dq.back_() << endl;

    cout << "\n==== end ====";
    return 0;
}