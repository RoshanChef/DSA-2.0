#include <iostream>
using namespace std;
class Queue
{
    int data;
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int size)
    {
        arr = new int(size);
        this->size = size;
        data = 0;
        front = -1;
        rear = -1;
    }
    void enque(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue full" << endl;
            return;
        }

        if (front == -1 && rear == -1)
        {
            arr[++front] = data;
            rear++;
            return;
        }
        else
        {
            arr[++rear] = data;
            return;
        }
    }
    int deque()
    {
        if (rear == -1)
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
        int val = arr[front];
        front++;
        if (front == size)
            front = -1;
        return val;
    }
    int front_()
    {
        if (front == -1 && rear == -1)
            return -1;
        return arr[front];
    }
    int back_()
    {
        if (front == -1 && rear == -1)
            return -1;
        return arr[rear];
    }
};

int main()
{
    Queue q(3);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.deque();
    cout << "front ele " << q.front_() << endl;
    cout << "back ele " << q.back_() << endl;

    return 0;
}