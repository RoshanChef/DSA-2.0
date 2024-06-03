#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = 0;
    }
    node(int data)
    {
        this->data = data;
        this->next = 0;
    }
};
// At last
void insertionAtLast(node *&head, int d)
{
    if (head == nullptr)
    {
        node *n = new node(d);
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    node *n = new node(d);
    temp->next = n;
}

void print(node *&head)
{
    if (head == 0)
    {
        cout << "empty linklist" << endl;
        return;
    }

    node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// simple
void reverse(node *&head)
{
    if (head->next == 0 || head == 0)
    {
        return;
    }
    node *back, *cur, *fr;
    back = nullptr, cur = head, fr = head;
    while (cur != 0)
    {
        fr = fr->next;
        cur->next = back;
        back = cur;
        cur = fr;
    }
    head = back;
}

// Approch 1
void recurRev1(node *&head, node *back)
{
    // base condition
    if (head == 0)
    {
        head = back;
        return;
    }

    // processing ..
    node *cur = head, *fr = head->next;
    cur->next = back;
    back = cur;
    head = fr;

    // recursive
    return recurRev1(head, back);
}

// Approach 2
node *recurRev2(node *head)
{
    // base case
    if (head->next == nullptr)
        return head;

    // recursive call
    node *smallHead = recurRev2(head->next);

    // processing ..
    head->next->next = head;
    head->next = nullptr;
    return smallHead;
}

int main()
{
    node *head = 0;

    insertionAtLast(head, 20);
    insertionAtLast(head, 30);
    insertionAtLast(head, 40);
    insertionAtLast(head, 50);
    print(head);

    // reverse(head);
    // recurRev1(head, nullptr);
    // print(head);

    head = recurRev2(head);
    print(head);

    cout << "\n===========================";

    return 0;
}