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
    ~node()
    {
        int value = this->data;
        if (this->next != nullptr)
        {
            this->next = nullptr;
            delete this->next;
        }
        cout << "deletion done value is " << value << endl;
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

// printing ..
void print(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// delete node
void deletionPos(node *&head, int pos)
{
    node *temp = head;
    if (pos == 1)
    {
        head = head->next;
        delete temp;
        return;
    }

    int cur = 1;
    node *fri = nullptr;
    while (cur != pos)
    {
        fri = temp;
        temp = temp->next;
        cur++;
    }
    fri->next = temp->next;
    delete temp;
}

int main()
{

    node *head = 0;
    insertionAtLast(head, 10);
    print(head);

    insertionAtLast(head, 20);
    insertionAtLast(head, 30);
    insertionAtLast(head, 40);
    print(head);

    // deletionPos(head, 3);
    // deletionPos(head, 3);
    // deletionPos(head, 2);
    // deletionPos(head , 1);
    // deletionPos(head, 1);

    deletionPos(head, 1);
    deletionPos(head, 2);
    print(head);

    return 0;
}