#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next = 0;
    node()
    {
        this->val = 0;
        this->next = 0;
    }
    node(int val)
    {
        this->val = val;
        this->next = 0;
    }
};

// insertion
void insertTail(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == 0 && tail == 0)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
}

// print
void print(node *head)
{
    if (head == 0)
        return;
    while (head != 0)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

node *middle(node *head)
{
    if (head == 0 || head->next == 0)
    {
        return head;
    }
    node *fast = head->next, *slow = head;
    while (fast->next != 0)
    {
        fast = fast->next;
        if (fast->next != 0)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
node *solve(node *&first, node *&sec)
{
    if (first->next == 0)
    {
        first->next = sec;
        return first;
    }

    node *c1 = first, *n1 = first->next;
    node *c2 = sec, *n2 = sec->next;

    while (n1 != 0 && c2 != 0)
    {

        if (c1->val <= c2->val && c2->val <= n1->val)
        {
            c1->next = c2;
            c2->next = n1;
            // aaged vadh
            c2 = n2;
            c1 = c1->next;
            if (n2 != 0)
                n2 = n2->next;
        }
        else
        {
            c1 = c1->next;
            n1 = n1->next;
            if (n1 == 0)
            {
                c1->next = c2;
                return first;
            }
        }
    }
    return first;
}
node *merge(node *&left, node *&right)
{
    if (left == 0)
        return right;
    if (right == 0)
        return left;
    if (left->val <= right->val)
        return solve(left, right);
    else
        return solve(right, left);
}

node *merge_sort(node *&head)
{
    // base case
    if (head == 0 || head->next == 0)
    {
        return head;
    }

    // 1 divide into 2 halfs
    node *mid = middle(head);

    node *left = head;
    node *right = mid->next;
    mid->next = 0;

    // 2 sort left-right recursive
    left = merge_sort(left);
    right = merge_sort(right);

    // 3 merge them
    node *ans = merge(left, right);
    return ans;
}

int main()
{
    node *head = 0, *tail = 0;
    insertTail(head, tail, 3);
    insertTail(head, tail, 1);
    insertTail(head, tail, 5);
    insertTail(head, tail, 6);
    insertTail(head, tail, -1);
    insertTail(head, tail, 10);
    print(head);

    node *c = merge_sort(head);
    print(c);

    return 0;
}