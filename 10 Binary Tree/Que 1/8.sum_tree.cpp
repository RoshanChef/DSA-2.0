#include"tree.h"

// O(n)
pair<bool,int> sum_(node *root) {
    if(root == 0){
        pair<bool,int> zero = make_pair(1 , 0); 
        return zero; 
    }
    if (root->left == 0 && root->right == 0)
    {
        pair<bool,int> cur = make_pair(1 , root->data); 
        return cur; 
    }

        //left 
    pair<bool , int> left = sum_(root->left);

        //right
    pair<bool , int> right = sum_(root->right);

        //cur
    bool cur = (root->data == (left.second + right.second));

    pair<bool,int> ans ; 
    if(left.first && right.first && cur){
        ans.first = 1; 
        ans.second = root->data*2;
    }
    else
        ans.first = 0; 

    return ans; 
}

bool isSumTree_(node* root)
{
    pair<bool , int> res; 
    res = sum_(root);
    return res.first; 
}

// O(n2)
int sum(node* root){

    if(root == 0)
        return 0; 

    if (root->left == 0 && root->right == 0)
        return root->data; 

    int left = sum(root->left);
    int right = sum(root->right);
    int cur = root->data; 

    return left + right + cur; 
}


bool isSumTree(node* root)
{
    if(root == 0 || (root->left == 0 && root->right == 0))
        return 1; 

    //left 
    bool lf = isSumTree(root->left);
    //right
    bool rg = isSumTree(root->right);
    //current data
    bool cur = (root->data == sum(root->left) + sum(root->right));

    if(lf && rg && cur)
        return 1; 
    else 
    return 0; 
}

int main()
{

    return 0;
}