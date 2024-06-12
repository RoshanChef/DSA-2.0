#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int val;
    node *right;
    node *left;

    node(int val)
    {
        this->val = val;
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

void solve(node *root, vector<int> &ans, int lv = 0)
{
    if (root == 0)
        return;
    if (ans.size() == lv)
        ans.push_back(root->val);
    solve(root->left, ans, lv + 1);
    solve(root->right, ans, lv + 1);
}
vector<int> rightSideView(node *root)
{
    if (root == 0)
        return {};
    vector<int> ans;
    solve(root, ans);
    return ans;
}
int main()
{

    return 0;
}