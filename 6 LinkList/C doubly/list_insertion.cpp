#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *pre;
    node *next;
    node()
    {
        this->value = 0;
        this->next = 0;
        this->pre = 0;
        cout << "default call " << endl;
    }
    node(int data)
    {
        this->value = data;
        this->next = 0;
        this->pre = 0;
    }
    ~node()
    {
        int val = this->value;
        if (this->next != 0)
        {
            this->next = 0;
            this->pre = 0;
            delete this->pre;
            delete this->next;
        }
        cout << "free memory " << val << endl;
    }
};

void print(node *head)
{
    if (head == 0)
        return;

    while (head != nullptr)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int getLen(node *head)
{
    int cnt = 0;
    while (head != nullptr)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}
void insertionAtLast(node *&head, int data)
{
    if (head == nullptr)
    {
        node *temp = new node(data);
        head = temp;
        return;
    }
    // otherwise
    node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    node *n = new node(data);
    temp->next = n;
}

void inserionAtHead(node *&head, int data)
{
    if (head == nullptr)
    {
        node *n = new node(data);
        head = n;
        return;
    }
    // otherwise
    node *n = new node(data);
    n->next = head;
    head->pre = n;
    head = n;
}
void inserionAtPosition(node *&head, int data, int pos)
{
    if (pos == 1)
    {
        return inserionAtHead(head, data);
    }
    int cnt = 1;
    node *temp = head;
    while (cnt != pos && temp->next != 0)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == 0)
        return insertionAtLast(head, data);

    node *n = new node(data);
    n->next = temp;
    n->pre = temp->pre;
    temp->pre->next = n;
    temp->pre = n;
}

void deletionAtHead(node *&head)
{
    if (head == 0)
        return;

    node *temp = head;
    head = head->next;
    head->pre = 0;
    delete temp;
}

void deletionAtPosition(node *&head, int pos)
{
    if (head == 0)
        return;
    if (pos == 1)
        return deletionAtHead(head);

    // otherwise
    int cur = 1;
    node *temp = head;
    node *Friend = nullptr;
    while (temp->next != 0 && cur != pos)
    {
        Friend = temp;
        temp = temp->next;
        cur++;
    }
    Friend->next = temp->next;

    // middle node
    if (temp->next != 0)
        temp->next->pre = Friend;
    delete temp;
}

int main()
{

    node *head = nullptr;
    insertionAtLast(head, 10);
    print(head);

    insertionAtLast(head, 20);
    insertionAtLast(head, 30);

    print(head);
    cout << "len => " << getLen(head) << endl;

    inserionAtHead(head, 5);
    inserionAtHead(head, 1);
    print(head);

    cout << "len => " << getLen(head) << endl;

    inserionAtPosition(head, 50, 6);
    print(head);

    inserionAtPosition(head, 70, 2);
    print(head);

    deletionAtHead(head);
    deletionAtHead(head);
    print(head);

    deletionAtPosition(head, 2);
    print(head);

    deletionAtPosition(head, 2);
    deletionAtPosition(head, 3);
    deletionAtPosition(head, 2);

    print(head);

    return 0;
}