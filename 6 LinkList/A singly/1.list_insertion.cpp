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

// At head
void insertionAtHead(node *&head, int d)
{
    if (head == 0)
    {
        head = new node(d);
        return;
    }
    node *temp = new node(d);
    temp->next = head;
    head = temp;
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
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *n = new node(d);
    temp->next = n;
}

// using tail
void insertionAtLastTail(int d, node *&tail)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

// At position with help of friend
void insertAtPos(node *&head, int data, int pos, node *&tail)
{
    if (pos == 1)
    {
        return insertionAtHead(head, data);
    }

    node *temp = head, *fri = 0;
    int cnt = 1;
    while (cnt != pos)
    {
        fri = temp;
        temp = temp->next;
        cnt++;
    }

    if (fri->next == nullptr)
    {
        return insertionAtLastTail(data, tail);
    }

    node *n = new node(data);
    fri->next = n;
    n->next = temp;
}

// // At position without friend
// void insertAtPos(node *&head, int data, int pos , node*& tail )
// {
//     if (pos == 1)
//     {
//         return insertionAtHead(head, data);
//     }

//     int cnt = 1;
//     pos--;
//     node *temp = head;
//     while (temp->next != nullptr && cnt != pos)
//     {
//         cnt++;
//         temp = temp->next;
//     }
//     if(temp->next == nullptr) {  return insertionAtLastTail(data, tail); }
//     node *n = new node(data);
//     n->next = temp->next;
//     temp->next = n;
// }

int len(node *&head)
{
    if (head == nullptr)
    {
        return 0;
    }
    int cnt = 1;
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

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

int main()
{
    // create node
    node *n1 = new node(10);
    // cout << n1->data << endl;
    // cout << n1->next << endl;

    // // set head
    node *head = n1;
    node *tail = n1;
    print(head);

    //  //at head
    // insertionAtHead(head, 15);
    // print(head);
    // insertionAtHead(head, 20);
    // print(head);

    // //at last
    // insertionAtLast(head, 20);
    // print(head);

    // insertionAtLast(head, 30);
    // print(head);

    // //using tail
    insertionAtLastTail(20, tail);
    print(head);

    insertionAtLastTail(30, tail);
    print(head);
    insertionAtLastTail(40, tail);
    print(head);
    insertionAtLastTail(50, tail);
    print(head);

    // int position = 5;
    // insertAtPos(head, 50, position, tail);
    // print(head);

    // cout << head->data << endl;
    // cout << tail->data << endl;
    cout << len(head) << endl;

    return 0;
}