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

int getLen(node *head)
{
    int cnt = 0;
    while (head != 0)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

// Approach 1
void middleNode(node *head)
{
    int len = getLen(head);
    int cnt = 0;

    len = len >> 1;

    while (cnt != len)
    {
        cnt++;
        head = head->next;
    }
    cout << "Middle data => " << head->data << endl;
}

// Approach 2 lower
node *middle2(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast->next != 0)
    {
        fast = fast->next;
        if (fast->next != 0)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

// Approach 2 upper
node *middle3(node *head)
{
    if (head == 0 || head->next == 0)
    {
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while (fast != 0)
    {
        fast = fast->next;
        if (fast != 0)
            fast = fast->next;
        slow = slow->next;
    }

    return slow;
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

    // cout << "Middle one is => " << middle2(head)->data << endl;

    cout << "Middle one is => " << middle3(head)->data << endl;

    // middleNode(head);

    return 0;
}