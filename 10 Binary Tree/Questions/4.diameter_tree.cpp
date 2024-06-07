#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Node
{
private:
    int data;
    Node *next;

public:
    Node *left;
    Node *right;
    Node()
    {
        this->data = 0;
        this->next = 0;
    }
    Node(int data)
    {
        this->data = data;
        this->next = 0;
    }
};

// o(n)
pair<int, int> dia(Node *&root)
{
    if (root == 0)
    {
        pair<int, int> zero = make_pair(0, 0);
        return zero;
    }

    // left
    pair<int, int> left = dia(root->left);
    // right
    pair<int, int> right = dia(root->right);

    int a = left.first;
    int b = right.first;
    int c = left.second + right.second + 1;

    pair<int, int> ans;

    ans.first = max(a, max(b, c));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
int diameter(Node *root)
{
    pair<int, int> res;
    res = dia(root);
    return res.first;
}

// o(n2)
int h(TreeNode<int> *root)
{
    if (root == 0)
        return 0;
    int left = h(root->left);
    int right = h(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    if (root == 0)
        return 0;

    int op1 = diameterOfBinaryTree(root->left);
    int op2 = diameterOfBinaryTree(root->right);
    int op3 = h(root->left) + h(root->right);
    return max(op1, max(op2, op3));
}

int main()
{

    return 0;
}