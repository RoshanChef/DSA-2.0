#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node()
    {
        this->value = 0;
        this->next = 0;
    }
    node(int data)
    {
        this->value = data;
        this->next = 0;
    }
};

void print(node *head)
{
    if (head == 0)
    {
        return;
    }
    while (head != 0)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void instertionAtLast(node *&head, int value)
{

    if (head == 0)
    {
        head = new node(value);
        return;
    }
    node *temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    node *n = new node(value);
    temp->next = n;
}

// with replace
void sort_repl(node *head)
{
    if (head == 0 || head->next == 0)
        return;
    int zero = 0, one = 0, two = 0;
    node *cur = head;
    while (cur != 0)
    {
        int val = cur->value;
        if (val == 0)
            zero++;
        else if (val == 1)
            one++;
        else
            two++;
        cur = cur->next;
    }
    cur = head;
    while (cur != 0)
    {
        if (zero)
        {
            cur->value = 0;
            zero--;
        }
        else if (one)
        {
            cur->value = 1;
            one--;
        }
        else
        {
            cur->value = 2;
            two--;
        }
        cur = cur->next;
    }
}

void insertTail(node *&tail, node *cur)
{
    tail->next = cur;
    tail = cur;
}
// without replace
void sort_(node *&head)
{
    node *zeroHead = new node(-1), *zeroTail = zeroHead;
    node *oneHead = new node(-1), *oneTail = oneHead;
    node *twoHead = new node(-1), *twoTail = twoHead;

    node *cur = head;

    while (cur != 0)
    {
        int value = cur->value;

        if (value == 0)
        {
            insertTail(zeroTail, cur);
        }
        else if (value == 1)
        {
            insertTail(oneTail, cur);
        }
        else if (value == 2)
        {
            insertTail(twoTail, cur);
        }

        cur = cur->next;
    }

    if (oneHead->next == nullptr)
    {
        zeroTail->next = twoHead->next;
    }
    else
    {
        zeroTail->next = oneHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = 0;
    head = zeroHead->next;

    zeroTail = 0;
    oneTail = 0;
    twoTail = 0;

    delete zeroTail;
    delete oneTail;
    delete twoTail;

    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

int main()
{

    node *head = 0;
    instertionAtLast(head, 0);
    instertionAtLast(head, 1);
    instertionAtLast(head, 0);
    instertionAtLast(head, 2);
    instertionAtLast(head, 1);
    instertionAtLast(head, 1);
    instertionAtLast(head, 2);
    instertionAtLast(head, 0);
    print(head);

    //  //w/o replace
    sort_(head);

    // with replace
    // sort_repl(head);

    print(head);

    cout << "end" << endl;
    return 0;
}