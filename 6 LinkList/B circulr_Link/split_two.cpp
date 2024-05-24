#include <bits/stdc++.h>
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
    node(int data)
    {
        this->value = data;
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
        temp = temp->next;
        cout << temp->value << " ";
    } while (temp != tail);
    cout << endl;
}
vector<node *> split_2(node *tail)
{
    node *head = tail->next;
    if (head == 0)
    {
        vector<node *> ans;
        return ans;
    }
    node *slow = head;
    node *fast = head;
    while (fast->next != head)
    {
        fast = fast->next;
        if (fast->next != head)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    node *head2 = slow->next;
    slow->next = head;
    fast->next = head2;

    vector<node *> ans;
    ans.push_back(slow);
    ans.push_back(fast);
    return ans;
}

int main()
{
    node *tail = 0;
    insertion(tail, 10, 0);
    print(tail);
    insertion(tail, 20, 10);
    insertion(tail, 30, 20);
    insertion(tail, 40, 30);
    insertion(tail, 50, 40);
    // insertion(tail, 60, 50);
    print(tail);

    vector<node *> res = split_2(tail);
    print(res[0]);
    print(res[1]);
    return 0;
}