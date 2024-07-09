#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
    node()
    {
        this->data = 0;
        this->right = 0;
        this->left = 0;
    }
    node(int data)
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

node *insertionBST(node *root, int d)
{
    if (root == 0)
    {
        root = new node(d);
        return root;
    }

    if (d > root->data)
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

bool solve(node *root, int lb, int ub)
{
    if (root == 0 || root->left == 0 && root->right == 0)
        return 1;
    if(lb<= root->data && root->data<= ub){
        return solve(root->left , lb , root->data) && solve(root->right , root->data , ub); 
    }
    return 0; 
}
bool valid_BST(node *root)
{
    if (root->left == 0 && root->right == 0)
        return 1;

    int lb = INT_MIN, ub = INT_MAX;
    return solve(root, lb, ub);
}

int main()
{

    node *root = 0;
    takeInput(root);
    level_order(root);

    cout << "\n=== end ===";
    return 0;
}