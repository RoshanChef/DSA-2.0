#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        this->data = data;
        this->right = 0;
        this->left = 0;
    }
};

// Traversal
void level_order(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // level complete
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}


int main()
{

    return 0;
}