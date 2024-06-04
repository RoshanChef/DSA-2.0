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
        cout << "hpp";
        this->next = 0;
    }
    node(int val)
    {
        this->value = val;
        this->next = 0;
    }
    ~node()
    {
        this->next = 0;
        delete this->next;
    }
};

void print(node *head)
{
    while (head != 0)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

void insertion(node *&head, int data)
{
    if (head == 0)
    {
        head = new node(data);
        return;
    }
    node *temp = head;
    node *n = new node(data);
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// if ll sorted .. O(N)
void remove_dub(node *head)
{
    while (head != 0)
    {
        if ((head->next != 0) && (head->next->value == head->value))
        {
            node *temp = head->next;
            head->next = head->next->next;
            delete temp;
        }
        else
            head = head->next;
    }
}

// if ll not sorted ..
// Appoarch 1 O(N*N)
void remove_db(node *head)
{
    if (head == 0)
    {
        return;
    }
    while (head != 0)
    {
        node *temp = head->next;
        node *prev = head;
        while (temp != 0)
        {
            if (temp->value == head->value)
            {
                node *n = temp;
                prev->next = temp->next;
                delete n;
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        head = head->next;
    }
}

// Appoarch 2
// sort and apply remove_dub

// Approach 3
void removeDb(node *head)
{
    if (head == 0)
    {
        return;
    }
    map<int, bool> visit;
    node *prev = 0;
    node *cur = head;
    while (cur != 0)
    {
        //visited
        if (visit[cur->value] != 0)
        {
            node *temp = cur;
            prev->next = cur->next;
            delete temp;
            cur = prev->next;
        }
        else
        {
            //not visited 
            visit[cur->value]++;
            prev = cur;
            cur = cur->next;
        }
    }
}
int main()
{

    node *head = 0;
    insertion(head, 10);
    insertion(head, 50);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 20);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 40);
    insertion(head, 40);
    insertion(head, 50);

    // print
    print(head);

    // remove
    //  removeDb(head);
    remove_db(head);

    // print
    print(head);

    return 0;
}