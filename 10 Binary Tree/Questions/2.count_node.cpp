#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node()
    {
        data = 0;
        this->left = 0;
        this->right = 0;
    }
    node(int data)
    {
        this->data = data;
        this->left = 0;
        this->right = 0;
    }
};

void levelBuild(node *&root)
{
    queue<node *> que;
    cout << "enter root element" << endl;
    int data;
    cin >> data;
    root = new node(data);
    que.push(root);
    while (!que.empty())
    {
        node *temp = que.front();
        que.pop();

        cout << "enter data for left of " << temp->data << endl;
        cin >> data;
        if (data != -1)
        {
            temp->left = new node(data);
            que.push(temp->left);
        }
        cout << "enter the data for right of " << temp->data << endl;
        cin >> data;
        if (data != -1)
        {
            temp->right = new node(data);
            que.push(temp->right);
        }
    }
}

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

int countNodes(node *root)
{
    if (root == 0)
        return 0;

    int left = countNodes(root->left);
    int right = countNodes(root->right);
    return left + right + 1;
}
int main()
{

    return 0;
}