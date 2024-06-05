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

void in_order(node *root)
{
    if (root == 0)
        return;
    stack<node *> stack;
    cout << "\t";
    while (1)
    {
        // left
        if (root != 0)
        {
            stack.push(root);
            root = root->left;
        }
        else
        {
            if (stack.empty())
            {
                break;
            }

            root = stack.top();
            stack.pop();

            // print
            cout << root->data << " ";

            // right
            root = root->right;
        }
    }
    cout << endl;
}

void pre_order(node *root)
{
    if (root == 0)
    {
        return;
    }
    stack<node *> stack;

    cout << "\t";
    while (1)
    {
        if (root != 0)
        {
            cout << root->data << " ";
            stack.push(root);
            root = root->left;
        }
        else
        {
            if (stack.empty())
                break;

            root = stack.top();
            stack.pop();

            root = root->right;
        }
    }
    cout << endl;
}

void post_Order(node *root, vector<int> &v)
{
    if (root == 0)
    {
        return;
    }
    stack<node *> stack;

    while (1)
    {
        // left
        if (root != 0)
        {
            stack.push(root);
            root = root->left;
        }
        else
        {
            // right
            if (stack.empty())
                break;

            root = stack.top();
            stack.pop(); 
        }
    }
}

// App 2
void preOrder(node *root, vector<int> &v)
{
    if (root == 0)
    {
        return;
    }

    stack<node *> stack;

    stack.push(root);
    while (!stack.empty())
    {
        node *temp = stack.top();
        stack.pop();
        v.push_back(temp->data);

        if (temp->right)
        {
            stack.push(temp->right);
        }
        if (temp->left)
        {
            if (stack.empty())
                break;
            stack.push(temp->left);
        }
    }
}

void postOrder(node *root, vector<int> &ans)
{
    if (root == 0)
    {
        return;
    }
    stack<node *> stack;
    stack.push(root);
    while (!stack.empty())
    {
        node *temp = stack.top();
        stack.pop();
        ans.push_back(temp->data);

        if (temp->left)
        {
            stack.push(temp->left);
        }
        if (temp->right)
        {
            stack.push(temp->right);
        }
    }
    reverse(ans.begin(), ans.end());
}

int main()
{
    node *root = 0;
    // 10 3 7 -1 -1 8 -1 -1 6 9 -1 -1 -1
    root = build_tree(root);

    //    10
    //  3    6
    // 7  8  9
    cout << "Level Order Traversal" << endl;
    level_order(root);

    // cout << "In_order" << endl;
    // in_order(root);

    // cout << "Pre_order" << endl;
    // pre_order(root);

    cout << "PreOrder \n\t";
    vector<int> ans;
    preOrder(root, ans);
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    ans.clear();

    cout << "Post Order \n\t";
    postOrder(root, ans);
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}