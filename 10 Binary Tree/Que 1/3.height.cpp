#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this->data = data;
        this->right = 0;
        this->left = 0;
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

int height(node *root)
{
    if (root == 0)
        return 0;

    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}

int h(node *root)
{
    if (root == 0)
        return 0;
    queue<node *> q;
    q.push(root);
    q.push(0);
    int res = 0;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == 0)
        {
            res++;
            if (!q.empty())
                q.push(0);
        }
        else
        {
            // left child
            if (temp->left)
                q.push(temp->left);
            // right child
            if (temp->right)
                q.push(temp->right);
        }
    }
    return res;
}
int main()
{

    node *root = 0;
    // 1 2 -1 3 -1 -1 4 -1 5 -1 6 -1 -1
    levelBuild(root);
    level_order(root);

    cout << "height is " << height(root) << endl;
    cout << "height is " << h(root) << endl;

    cout << "\n=== end ===" << endl;
    return 0;
}