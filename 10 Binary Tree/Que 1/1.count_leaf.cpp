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

node *build_tree(node *root)
{
    int data;
    cout << "enter the Data" << endl;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }
    root = new node(data);

    // left
    cout << "Enter the left of " << data << endl;
    root->left = build_tree(root->left);

    // right
    cout << "Enter the right of " << data << endl;
    root->right = build_tree(root->right);

    return root;
}

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

void solve(node *root, int &cnt)
{
    if (root == 0)
        return;
    if (root->left == 0 && root->right == 0)
    {
        cnt++;
        return;
    }
    solve(root->left, cnt);
    solve(root->right, cnt);
}
int count(node *root)
{
    if (root == 0)
        return 0;
    int cnt = 0;
    solve(root, cnt);
    return cnt;
}
int main()
{

    node *root = 0;
    // 10 3 5 6 7 8 -1 -1 -1 -1 -1 -1 -1
    levelBuild(root);
    level_order(root);
    int ans = count(root);
    cout << "leaf is " << ans << endl;

    cout << "\n======= end ========== " << endl;

    return 0;
}