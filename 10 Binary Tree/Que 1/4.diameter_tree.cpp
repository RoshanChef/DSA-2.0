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

// O(N)
// dia , height
pair<int , int> dia(TreeNode* root){
    if(root == 0){
        return  {0,0};  
    }
    //left
    pair<int,int> left = dia(root->left);
    //right
    pair<int,int> right = dia(root->right);
        

    //diameter
    int op1 = left.first; 
    int op2 = right.first;
    int op3 = left.second + right.second; 

    //height
    int ans_h = max(left.second , right.second) + 1;

    pair<int,int> ans; 
    ans.first = max(op3 ,max(op1,op2)); 
    ans.second = ans_h; 

    return ans;      
}
    
int diameterOfBinaryTree(TreeNode* root) {
    pair<int,int> res; 
    res = dia(root); 
    return res.first;
}

// O(N*N)
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
