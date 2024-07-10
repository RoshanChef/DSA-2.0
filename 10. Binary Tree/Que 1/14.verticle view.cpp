#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *left, *right;
    int data;
    node()
    {
        this->data = 0;
        this->left = 0, this->right = 0;
    }
    node(int data)
    {
        this->data = data;
        this->left = 0, this->right = 0;
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

        cout << "enter data for left of " << temp->data << endl;
        cin >> data;
        if (data != -1)
        {
            temp->left = new node(data);
            que.push(temp->left);
        }
        cout << "enter the data for right of " << temp->data << endl;
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

    while (!q.empty())
    {
        int size = q.size();
        while (size)
        {
            node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            size--;
        }
        cout << endl;
    }
}

void enter(map<int, map<int, multiset<int>>> &m, node *root, int x,
           int y)
{
    if (root == nullptr)
        return;

    // left
    enter(m, root->left, x - 1, y + 1);

    // node
    m[x][y].insert(root->data);

    // right
    enter(m, root->right, x + 1, y + 1);
}
vector<vector<int>> verticalTraversal(node *root)
{
    map<int, map<int, multiset<int>>> mp;

    // data store
    enter(mp, root, 0, 0);

    vector<vector<int>> ans;

    // store
    for (auto it_x : mp)
    {
        vector<int> temp;
        auto row_ele = it_x.second;
        for (auto it_y : row_ele)
        {
            auto col = it_y.second;
            temp.insert(temp.end(), col.begin(), col.end());
        }
        ans.push_back(temp);
    }

    return ans;
}

// using level order
vector<vector<int>> verticle_order(node *root)
{

    vector<vector<int>> ans;
    // x for verticle , y for horizontal
    // x- {y - set}
    map<int, map<int, multiset<int>>> mp;
    queue<pair<node *, pair<int, int>>> q; // node  , {x , y}
    q.push({root, {0, 0}});

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        node *node = front.first;
        auto cordinate = front.second;
        int x = cordinate.first, y = cordinate.second;

        mp[x][y].insert(node->data);

        if (node->left)
        {
            q.push({node->left, {x - 1, y + 1}});
        }
        if (node->right)
        {
            q.push({node->right, {x + 1, y + 1}});
        }
    }

    for (auto col : mp)
    {
        auto row = col.second;
        vector<int> temp;
        for (auto level : row)
        {
            auto ele = level.second;
            temp.insert(temp.end(), ele.begin(), ele.end());
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{
    node *root = 0;
    levelBuild(root);
    level_order(root);

    vector<vector<int>> values = verticalTraversal(root);
    for (auto it : values)
    {
        cout << "[";
        for (auto val : it)
        {
            cout << val << " ";
        }
        cout << "]";
    }

    cout << "\n=== end ===";
    return 0;
}