#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node()
    {
        this->value = 0;
        this->next = nullptr;
    }
    node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
    ~node()
    {
        int val = this->value;
        if (this->next != nullptr)
        {
            this->next = nullptr;
            delete this->next;
        }
        cout << "memory delete is " << val << endl;
    }
};

// Approach 1
bool is_circular(node *head)
{
    // empty list
    if (head == nullptr)
        return true;

    // >=1 node
    node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp != head && temp != 0);

    if (temp == head)
    {
        return 1;
    }

    return 0;
}

// Approach 2
bool is_circular_2(node *head)
{
    // empty
    if (head == nullptr)
        return 1;

    // >=1 node
    map<node *, bool> visit;
    while (head)
    {
        if (visit[head] == 1)
            return 1;

        visit[head] = 1;
        head = head->next;
    }
    return 0;
}

void insertion(node *&tail, int data, int ele)
{
    node *newNode = new node(data);
    if (tail == nullptr)
    {
        tail = newNode;
        tail->next = newNode;
        return;
    }
    // non-empty
    node *cur = tail;
    while (cur->value != ele)
    {
        cur = cur->next;
    }

    // set tail
    if (cur == tail)
    {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
        return;
    }

    newNode->next = cur->next;
    cur->next = newNode;
}
void print(node *tail)
{
    if (tail == 0)
    {
        cout << "Empty LinkList" << endl;
        return;
    }

    node *temp = tail;
    // use of do-while
    do
    {
        cout << tail->value << " ";
        tail = tail->next;
    } while (temp != tail);
    cout << endl;
}

// floyd's cycle detection
node *floydDetect(node *head)
{
    if (head == 0)
    {
        return 0;
    }

    node *slow = head;
    node *fast = head;
    while (slow != nullptr && fast != nullptr)
    {
        fast = fast->next;
        if (fast->next != 0)
            fast = fast->next;
        slow = slow->next;
        if (fast == slow)
        {
            // cout << "cycle detect at " << slow->value << endl;
            return slow;
        }
    }
    return 0;
}

node *floyd_start(node *head)
{
    if (head == nullptr)
        return nullptr;

    node *slow = head;
    node *fast = floydDetect(head);
    // give start node
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    cout << "cycle start at " << slow->value << endl;
    return slow;
}

void remove_cy(node *head)
{
    if (head == nullptr)
        return;
    node *point = floyd_start(head);
    node *temp = point;
    while (temp->next != point)
    {
        temp = temp->next;
    }
    temp->next = 0;
}

void s_print(node *head)
{
    while (head != 0)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    node *tail = 0;
    insertion(tail, 10, 0);
    insertion(tail, 20, 10);
    insertion(tail, 30, 20);
    insertion(tail, 40, 30);
    print(tail);

    cout << tail->value << endl;
    cout << is_circular_2(tail) << endl;

    node *head = new node(20);
    node *a = new node(30);
    node *b = new node(40);
    node *c = new node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    node *d = new node(60);
    node *f = new node(70);
    c->next = d;
    d->next = f;
    f->next = head->next;

    // cout << is_circular_2(head) << endl;

    // cout << is_circular_2(0) << endl;
    if (floyd_start(head))
    {
        cout << "Is cycle ? " << "yes " << endl;
    }
    else
    {
        cout << "not present " << endl;
    }

    remove_cy(head);
    s_print(head);

    return 0;
}