#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *left, *right;
    int val;
    node()
    {
        this->val = 0;
        this->left = 0;
        this->right = 0;
    }
    node(int val) : val(val)
    {
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

        cout << "enter data for left of " << temp->val << endl;
        cin >> data;
        if (data != -1)
        {
            temp->left = new node(data);
            que.push(temp->left);
        }
        cout << "enter the data for right of " << temp->val << endl;
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
            cout << temp->val << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

node *solve(node *root, int &k, int value)
{
    if (root == 0)
        return root;
    if (root->val == value)
        return root;
    node *left = solve(root->left, k, value);

    node *right = solve(root->right, k, value);
    if (left || right)
    {
        k--;
        if (k == 0)
        {
            return root;
        }
        if (left == 0)
            return right;
        else
            return left;
    }
    return 0;
}

int Kth_ancestor(node *root, int k, int value)
{
    node* temp = solve(root, k, value);
    if (temp == 0 || temp->val == value)
        return -1;
    else
        return temp->val;
}

int main()
{

    node *root = 0;
    levelBuild(root);
    level_order(root);
    int k = 3;
    cout << k << "nd ancestor => " << Kth_ancestor(root, k, 1);

    cout << "\n=== end ===";
    return 0;
}