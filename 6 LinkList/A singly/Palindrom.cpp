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
};

// print
void print(node *head)
{
    if (head == 0)
    {
        cout << "Empty LinkList" << endl;
        return;
    }

    node *temp = head;
    // use of do-while
    while (temp != 0)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// At last
void insertionAtLast(node *&head, int d)
{
    if (head == 0)
    {
        head = new node(d);
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

bool check(vector<int> ar)
{
    int s = 0;
    int e = ar.size() - 1;
    while (s <= e)
    {
        if (ar[s] != ar[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
// Approach 1
bool Palindrome(node *head)
{
    if (head == 0 || head->next == 0)
    {
        return 1;
    }
    // store in another
    vector<int> ar;
    while (head != 0)
    {
        ar.push_back(head->value);
        head = head->next;
    }
    return check(ar);
}

// lower
node *middle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != 0)
    {
        fast = fast->next;
        if (fast != 0)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
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
// Approach 2
bool palindrome(node *head)
{
    if (head == 0 || head->next == 0)
        return 1;

    node *mid = middle(head);
    mid = mid->next;
    reverse(mid);

    node *temp = mid;

    // check
    while (mid != 0)
    {
        if (head->value != mid->value)
        {
            reverse(temp);
            return 0;
        }
        head = head->next;
        mid = mid->next;
    }

    reverse(temp);
    return 1;
}
int main()
{

    node *head = 0;
    insertionAtLast(head, 10);
    insertionAtLast(head, 20);
    insertionAtLast(head, 30);
    insertionAtLast(head, 20);
    insertionAtLast(head, 10);
    print(head);
    if (palindrome(head))
    {
        cout << "it is Palindrome" << endl;
    }
    else
    {
        cout << "it is not Palindrome" << endl;
    }
    print(head);
    return 0;
}