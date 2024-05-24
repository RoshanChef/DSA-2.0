#include <iostream>
using namespace std;

template <class T>
class list
{
    T data;
    list<T> *next;
    list<T> *tail;
    list<T> *head;

public:
    list()
    {
        this->data = 0;
        this->next = 0;
        this->head = 0;
        this->tail = 0;
    }
    list(T data)
    {
        this->data = data;
        this->next = 0;
    }

    void push(T data)
    {
        list<T> *temp = new list(data);
        if (head == 0)
        {
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = tail->next;
    }

    int size()
    {
        if (head == 0)
        {
            return 0;
        }
        list<T> *t = head;
        int cnt = 0;
        while (t != 0)
        {
            cnt++;
            t = t->next;
        }
        return cnt;
    }

    void print()
    {
        list<T> *t = head;
        while (t != 0)
        {
            cout << t->data;
            t = t->next;
            if (t != 0)
                cout << " - ";
        }
        cout << endl;
    }
};

int main()
{

    list<char> l;
    l.push('A');
    l.push('B');
    l.push('C');
    l.push('D');
    l.push('E');
    l.print();

    cout<<"size " << l.size()<<endl;

    return 0;
}
