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
        this->left = 0, this->right;
    }
    node(int val) : val(val)
    {
        this->left = 0, this->right;
    }
};
void solve(node *root, int len, int maxlen, int sum, int maxsum)
{
    if (root == 0)
    {
        if (len > maxlen)
        {
            maxlen = len;
            maxsum = sum;
        }
        else if (len == maxlen)
            maxsum = max(sum, maxsum);
        return;
    }
    sum += root->val;
    solve(root->left, len + 1, maxlen, sum, maxsum);
    solve(root->right, len + 1, maxlen, sum, maxsum);
}
int sumOfLongRootToLeafPath(node *root)
{
    int len = 0;
    int maxL = 0;
    int sum = 0;
    int maxS= 0;
    solve(root, len, maxL, sum, maxS);
}

int main()
{

    node root(19); 
    cout<<root.val<<endl;
    cout << "\n=== end ===";
    return 0;
}