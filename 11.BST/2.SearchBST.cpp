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
// Time complexity:  O( logN )  || WC : O(N) if node des
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

bool search(node *root, int key)
{
    if (root == 0)
        return 0;
    if (root->data == key)
        return 1;
    if (root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

bool Search(node *root, int key)
{
    node *temp = root;
    while (temp != 0)
    {
        if (temp->data == key)
            return 1;
        if (temp->data > key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return 0;
}
// Time complexity:  O(logN)
// Space complexity: O(1)

int min_(node *root)
{
    if (root == 0)
        return 0;
    node *temp = root;
    while (temp->left)
    {
        temp = temp->left;
    }
    return temp->data;
}
// Time complexity:  O(logN)
// Space complexity: O(1))

int max_(node *root)
{
    if (root == 0)
        return 0;
    node *temp = root;
    while (temp->right)
    {
        temp = temp->right;
    }
    return temp->data;
}
// Time complexity:  O(logN)
// Space complexity: O(1)

int main()
{

    node *root = 0;

    cout << "Enter the data " << endl;
    takeInput(root);
    cout << "Data is " << endl;
    level_order(root);

    return 0;
}