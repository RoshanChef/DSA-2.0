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
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            size--;
        }
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

int kthSmallest(node *root, int &k)
{
    if (root == 0)
        return -1;

    int left = kthSmallest(root->left, k);

    k--;
    if (k == 0)
        return root->val;

    if (k < 0)
        return left;

    int right = kthSmallest(root->right, k);
    return right;
}
int main()
{

    cout << "\n=== end ===";
    return 0;
}