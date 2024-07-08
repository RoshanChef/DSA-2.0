#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *left, *right;
    int val;
    node()
    {
        this->val = 0;
        this->left = 0;
        this->right = 0;
    }
    node(int val) : val(val)
    {
        this->left = 0;
        this->right = 0;
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
            cout << temp->val << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

int maxSumOfNonAdjNode(node *root)
{
    if (root == 0)
        return -1;

    int lv = 1, s1 = 0, s2 = 0;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        while (size)
        {
            node *temp = q.front();
            q.pop();
            if (lv % 2 == 1)
            {
                s1 += temp->val;
            }
            else
            {
                s2 += temp->val;
            }
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            size--;
        }
        lv++;
    }
    return max(s1, s2);
}

int main()
{
    node *root = 0;
    levelBuild(root);
    level_order(root);
    int ans = maxSumOfNonAdjNode(root);
    cout << "answer " << ans << endl;


    cout << "\n=== end ===";
    return 0;
}
