#include <iostream>
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

    // // set tail
    // if (cur == tail)
    // {
    //     newNode->next = tail->next;
    //     tail->next = newNode;
    //     tail = newNode;
    //     return;
    // }

    newNode->next = cur->next;
    cur->next = newNode;
}

void deletionNode(node *&tail, int ele)
{
    if (tail == 0)
    {
        cout << "list is empty" << endl;
        return;
    }

    // otherwise
    node *temp = tail->next;
    node *fri = tail;

    while (temp->value != ele)
    {
        fri = temp;
        temp = temp->next;
    }

    fri->next = temp->next;

    if (temp == fri)
    {
        tail = 0;
    }

    else if (temp == tail)
    {
        tail = fri->next;
    }

    delete temp;
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

int main()
{
    node *tail = nullptr;
    insertion(tail, 5, 100);
    print(tail);

    insertion(tail, 10, 5);
    print(tail);

    insertion(tail, 15, 10);
    print(tail);

    insertion(tail, 20, 10);
    print(tail);

    // //check tail
    // cout << "tail " << tail->value << endl;
    deletionNode(tail, 20);
    print(tail);

    deletionNode(tail, 5);
    print(tail);

    deletionNode(tail, 10);
    print(tail);

    deletionNode(tail, 15);
    print(tail);

    cout << "\n ==== END ==== ";
    return 0;
}