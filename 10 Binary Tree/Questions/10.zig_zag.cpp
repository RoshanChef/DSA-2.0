#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if (root == 0)
        return {};
    if (root->left == 0 && root->right == 0)
        return {{root->val}};

    queue<TreeNode*> q;
    q.push(root);

    bool lTor = 1;

    while (!q.empty()) {

        int size = q.size();
        vector<int> ans_t(size);

        // Process Queue
        for (int i = 0; i < size; i++) {

            TreeNode* front = q.front();
            q.pop();
            // reverse or normal
            int index = lTor ? i : size - 1 - i;
            ans_t[index] = front->val;

            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }

        // change direction
        lTor = !lTor;

        res.push_back(ans_t);
    }
    return res;
}

int main() { 
    
    
    return 0;
}
