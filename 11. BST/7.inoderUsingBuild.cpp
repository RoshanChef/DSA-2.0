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
        cout<<endl;
    }
}

node *usingInTree(int *Inorder, int s, int e)
{
    if (s > e)
        return 0;

    int mid = s + (e - s) / 2;
    node *root = new node(Inorder[mid]);

    root->left = usingInTree(Inorder, s, mid - 1);
    root->right = usingInTree(Inorder, mid + 1, e);
    return root;
}
// Time O(N)
// space O(N)
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    node *root = usingInTree(arr, 0, 4);
    level_order(root);

    cout << "\n=== end ===";
    return 0;
}