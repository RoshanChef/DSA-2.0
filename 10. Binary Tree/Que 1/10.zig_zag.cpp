#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int val;
    node *right;
    node *left;

    node(int val)
    {
        this->val = val;
        this->right = 0;
        this->left = 0;
    }
};

void levelBuild(node *&root)
{
    queue<node *> que;
    cout << "enter root element" << endl;
    int data;
    cin >> data;
    root = new node(data);
    que.push(root);
    while (!que.empty())
    {
        node *temp = que.front();
        que.pop();

        cout << "enter data for left of " << temp->val << endl;
        cin >> data;
        if (data != -1)
        {
            temp->left = new node(data);
            que.push(temp->left);
        }
        cout << "enter the data for right of " << temp->val << endl;
        cin >> data;
        if (data != -1)
        {
            temp->right = new node(data);
            que.push(temp->right);
        }
    }
}

vector<vector<int>> zigzagLevelOrder(node* root) {
    vector<vector<int>> res;
    if (root == 0)
        return {};
    if (root->left == 0 && root->right == 0)
        return {{root->val}};

    queue<node*> q;
    q.push(root);

    bool lTor = 1;

    while (!q.empty()) {

        int size = q.size();
        vector<int> ans_t(size);

        // Process Queue
        for (int i = 0; i < size; i++) {

            node* front = q.front();
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
