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

void inOrder(node *root)
{
    if (root == 0)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(node *root)
{
    if (root == 0)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node *root)
{
    if (root == 0)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main()
{

    node *root = 0;

    cout << "Enter the data " << endl;
    takeInput(root);
    cout << "Data is " << endl;
    level_order(root);

    cout << "Printing .. " << endl;
    cout << "In_order" << endl;
    inOrder(root);
    cout << endl
         << "Post_order" << endl;
    postOrder(root);

    cout << endl
         << "Pre_order" << endl;
    preOrder(root);

    return 0;
}