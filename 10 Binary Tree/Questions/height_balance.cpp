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

pair<bool, int> solve(node *root)
{
    if (root == 0)
    {
        pair<bool, int> zero = make_pair(1, 0);
        return zero;
    }
    pair<bool, int> left = solve(root->left);
    pair<bool, int> right = solve(root->right);
    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;
    pair<bool, int> ans;

    if (leftAns && rightAns && diff)
    {
        ans.second = max(left.second, right.second) + 1;
        ans.first = 1;
        return ans;
    }
    else
    {
        ans.first = 0;
        return ans;
    }
}
bool isBal(node *root)
{
    pair<bool, int> res;
    res = solve(root);
    return res.first;
}

// height
int height(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    // left
    int left = height(root->left);
    // right
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}
// o(n2)
bool isBalanced(node *root)
{
    if (root == 0)
    {
        return 1;
    }

    // left
    bool left = isBalanced(root->left);
    // right
    bool right = isBalanced(root->right);

    // height
    bool diff = abs(height(root->left) - height(root->right)) <= 1;

    if (left && right && diff)
        return 1;
    else
        return 0;
}

int main()
{

    node *root = 0;
    levelBuild(root);
    level_order(root);

    if (isBal(root))
    {
        cout << "it is height balanced\n";
    }
    else
        cout << "it is not balanced " << endl;

    return 0;
}