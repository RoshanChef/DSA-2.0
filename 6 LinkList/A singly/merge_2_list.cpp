#include <iostream>
using namespace std;

// **********************
// it's merge not sort
// **********************

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

// Approach 1
node *merge(node *head1, node *head2)
{
    if (head1 == 0)
    {
        return head2;
    }
    if (head2 == 0)
        return head1;
    node *head3 = nullptr, *tail = nullptr;
    // ele in h1 and h2
    while (head1 != 0 && head2 != 0)
    {
        if (head1->value < head2->value)
        {
            if (head3 == 0)
            {
                head3 = head1;
                tail = head3;
            }
            else
            {
                tail->next = head1;
                tail = tail->next;
            }
            head1 = head1->next;
        }
        else
        {
            if (head3 == 0)
            {
                head3 = head2;
                tail = head2;
            }
            else
            {
                tail->next = head2;
                tail = tail->next;
            }
            head2 = head2->next;
        }
    }
    // ele h2
    while (head2 != 0)
    {
        tail->next = head2;
        head2 = head2->next;
        tail = tail->next;
    }
    // ele h1
    while (head1 != 0)
    {
        tail->next = head1;
        head1 = head1->next;
        tail = tail->next;
    }

    return head3;
}
node *solve(node *first, node *second)
{
    if (first->next == 0)
    {
        first->next = second;
        return first;
    }

    node *cr1 = first, *n1 = cr1->next;
    node *cr2 = second, *n2 = cr2->next;
    while (n1 != 0 && cr2 != 0)
    {
        // check b/w
        if (cr1->value <= cr2->value && cr2->value <= n1->value)
        {
            cr1->next = cr2;
            n2 = cr2->next;
            cr2->next = n1;

            // aaged vadh ..
            cr1 = cr2;
            cr2 = n2;
        }
        else
        {
            cr1 = cr1->next;
            n1 = n1->next;

            // first finished
            if (n1 == 0)
            {
                cr1->next = cr2;
                return first;
            }
        }
    }
    return first;
}

// Approach 2
node *mrg(node *first, node *second)
{
    if (first == 0)
        return second;
    if (second == 0)
        return first;
    if (first->value <= second->value)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

int main()
{

    node *head1 = 0;
    insertionAtLast(head1, 10);
    // insertionAtLast(head1, 20);
    print(head1);

    node *head2 = 0;
    insertionAtLast(head2, 5);
    insertionAtLast(head2, 20);
    insertionAtLast(head2, 30);
    // insertionAtLast(head2, 15);
    // insertionAtLast(head2, 25);
    print(head2);

    node *res = mrg(head1, head2);
    print(res);

    return 0;
}