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
        this->next = nullptr;
    }
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
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
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *n = new node(d);
    temp->next = n;
}

// printing ...
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// reverse k nodes
node *rev_K(node *head, int k)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    node *prev = nullptr, *cur = head, *next = 0;
    int cnt = 0;
    while (cnt < k && cur != 0)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        cnt++;
    }
    if (cur != 0)
    {
        head->next = rev_K(cur, k);
    }

    return prev;
}

int main()
{
    node *head = new node(10);
    print(head);

    insertionAtLast(head, 20);
    insertionAtLast(head, 30);
    insertionAtLast(head, 40);
    insertionAtLast(head, 50);
    insertionAtLast(head, 60);
    print(head);

    cout << "\nk reverse " << endl;
    head = rev_K(head, 4);
    print(head);

    return 0;
}