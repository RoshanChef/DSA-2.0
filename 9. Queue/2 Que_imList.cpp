#include <iostream>
using namespace std;

class Queue
{
	int data;
	Queue *front;
	Queue *rear;
	Queue *next;
	Queue(int data)
	{
		this->data = data;
		this->front = 0;
		this->rear = 0;
		this->next = 0;
	}

public:
	Queue()
	{
		this->data = 0;
		this->front = 0;
		this->rear = 0;
	}

	void enque(int data)
	{
		Queue *n = new Queue(data);
		if (front == 0)
		{
			front = n;
			rear = n;
			return;
		}
		rear->next = n;
		rear = n;
	}
	int deque()
	{
		if (front == 0 && rear == 0)
		{
			return -1;
		}
		else if (front == rear)
		{
			Queue *temp = front;
			front = 0;
			rear = 0;
			int val = temp->data;
			delete temp;
			return val;
		}
		Queue *temp = front;
		front = front->next;
		int val = temp->data;
		delete temp;
		return val;
	}
	bool empty()
	{
		if (front == 0 && rear == 0)
		{
			return 1;
		}
		return 0;
	}
	int front_()
	{
		if (front == 0)
		{
			return -1;
		}
		return front->data;
	}

	int back_()
	{
		if (rear == 0)
			return -1;
		return rear->data;
	}
};
int main()
{
	Queue q;
	if (q.empty())
	{
		cout << "Queue is empty" << endl;
	}

	q.enque(10);
	q.enque(20);
	q.deque();
	cout << q.front_() << endl;
	cout << q.back_() << endl;

	return 0;
}