#include <iostream>
#include <queue>
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

// left print right
void inorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    // left
    inorder(root->left);

    // print
    cout << root->data << " ";
    // right
    inorder(root->right);
}

// print left right
void preorder(node *root)
{
    if (root == 0)
        return;

    // print
    cout << root->data << " ";
    // left
    preorder(root->left);
    // right
    preorder(root->right);
}

// left right print

void postorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    // left
    postorder(root->left);
    // right
    postorder(root->right);
    // print
    cout << root->data << " ";
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

    cout << "In Order Traversal" << endl<< "\t";
    inorder(root);

    cout << "\nPre Order Traversal" << endl<< "\t";
    preorder(root);

    cout << "\nPost Order Traversal" << endl<< "\t";
    postorder(root);
    cout<<"\n====="<<endl;
    return 0;
}