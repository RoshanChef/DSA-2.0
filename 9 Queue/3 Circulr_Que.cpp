#include <iostream>
using namespace std;
class Cir_Que
{
private:
    int front, rear;
    int *arr;
    int size;

public:
    Cir_Que(int size)
    {
        this->front = -1;
        this->rear = -1;
        arr = new int(size);
        this->size = size;
    }
    void enque(int data)
    {
        if (front == -1 && rear == -1)
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
    int deque()
    {
        if (front == -1 && rear == -1)
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
        front = (front + 1) % size;
        return val;
    }
    bool empty()
    {
        if (front == -1 && rear == -1)
        {
            return 1;
        }
        return 0;
    }
    int front_()
    {
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        return arr[front];
    }
    int back_()
    {
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        return arr[rear];
    }
};

int main()
{

    Cir_Que cq(3);
    if (cq.empty())
    {
        cout << "Queue is empty" << endl;
    }
    cq.enque(10);
    cq.enque(20);
    cq.enque(30);
    cq.deque();
    cq.deque();
    cq.enque(1);
    cq.deque();

    cout << "front " << cq.front_() << endl;
    cout << "back " << cq.back_() << endl;

    return 0;
}