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

void traverseLeft(node *root, vector<int> &ans)
{
    if ((root == 0) || (root->left == 0 && root->right == 0))
        return;

    // simple
    ans.push_back(root->data);

    if (root->left)
        traverseLeft(root->left, ans);
    else
        traverseLeft(root->right, ans);
}

void traverseLeaf(node *root, vector<int> &ans)
{
    if (root == 0)
        return;
    if (root->left == 0 && root->right == 0)
    {
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

void traverseRight(node *root, vector<int> &ans)
{
    if ((root == 0) || (root->left == 0 && root->right == 0))
        return;

    if (root->right)
        traverseRight(root->right, ans);
    else
        traverseRight(root->left, ans);
    // reverse
    ans.push_back(root->data);
}

vector<int> boundary(node *root)
{
    if (root == 0)
        return {};
    if (root->left == 0 && root->right == 0)
        return {root->data};

    // add root
    vector<int> ans;
    ans.push_back(root->data);

    // left part exclusive leaf
    traverseLeft(root->left, ans);

    // leaf of left subtree
    traverseLeaf(root->left, ans);

    // leaf of right subtree
    traverseLeaf(root->right, ans);

    // righ part exclusive leaf
    traverseRight(root->right, ans);

    return ans;
}

int main()
{

    return 0;
}