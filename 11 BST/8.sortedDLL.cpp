#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left, *right;
    node()
    {
        this->val = 0;
        this->left = 0, this->right = 0;
    }
    node(int val)
    {
        this->val = val;
        this->left = 0, this->right = 0;
    }
};

// Traversal
void level_order(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        while (size)
        {
            node *temp = q.front();
            cout << temp->val << " ";
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            size--;
        }
        cout << endl;
    }
}

node *insertionBST(node *root, int d)
{
    if (root == 0)
    {
        root = new node(d);
        return root;
    }

    if (d > root->val)
    {
        // right side
        root->right = insertionBST(root->right, d);
    }
    else
    {
        // left side
        root->left = insertionBST(root->left, d);
    }
    return root;
}
// Time complexity:  O( logN ) WC : O(N) if node des
// Space complexity: O( logN )

void takeInput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertionBST(root, data);
        cin >> data;
    }
}

void convertSortedDLL(node *root, node *&head)
{
    if (root == 0)
        return;
    // right subTree
    convertSortedDLL(root->right, head);

    // set root
    root->right = head;
    // set head
    if (head)
        head->left = root;
    // change head
    head = root;

    // same for left subTree
    convertSortedDLL(root->left, head);
}
void print(node *head)
{
    cout << endl
         << "sorted list is " << endl;
    while (head)
    {
        cout << head->val << " ";
        head = head->right;
    }
}

node *convertBST(node *&head, int n)
{
    if (n <= 0 || head == 0)
        return 0;

    node *left = convertBST(head, n / 2);

    node *root = head;
    root->left = left;
    head = head->right;

    // same for right
    root->right = convertBST(head, n - 1 - n / 2);

    return root;
}

int main()
{
    node *root = 0;
    takeInput(root);
    level_order(root);

    node *head = 0;
    convertSortedDLL(root, head);
    print(head);

    cout << "\n\nTree now " << endl;
    node *r = convertBST(head, 9);
    level_order(r);

    cout << "\n === end === " << endl;

    return 0;
}