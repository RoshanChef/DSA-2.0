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

void print(node *&head)
{
    if (head == 0)
    {
        cout << "empty linklist" << endl;
        return;
    }

    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertionAtLast(node *&head, int data)
{
    if (head == 0)
    {
        head = new node(data);
        return;
    }

    node *temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    node *n = new node(data);
    temp->next = n;
}

void revese(node *&head)
{

    if (head == 0)
        return;

    node *prev = 0, *next = 0;
    node *cur = head;

    while (cur != 0)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

node *add(node *first, node *second)
{
    int carry = 0;
    node *ans = 0;

    while (first != 0 || second != 0 || carry != 0)
    {
        int val1 = 0, val2 = 0;
        if (first != 0)
        {
            val1 = first->value;
            first = first->next;
        }
        if (second != 0)
        {
            val2 = second->value;
            second = second->next;
        }

        // sum
        int sum = val1 + val2 + carry;
        int digit = sum % 10;
        carry = sum / 10;

        insertionAtLast(ans, digit);
    }
    return ans;
}

node *add_two(node *a, node *b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    revese(a);
    revese(b);
    
    node *c = add(a, b);

    revese(a);
    revese(b);

    revese(c);
    return c;
}

int main()
{
    node *a = 0;
    insertionAtLast(a, 1);
    insertionAtLast(a, 2);
    insertionAtLast(a, 4);
    insertionAtLast(a, 6);
    insertionAtLast(a, 2);
    print(a);

    node *b = 0;
    insertionAtLast(b, 3);
    insertionAtLast(b, 4);
    insertionAtLast(b, 8);
    print(b);

    node *c = add_two(a, b);
    print(c);
    return 0;
}