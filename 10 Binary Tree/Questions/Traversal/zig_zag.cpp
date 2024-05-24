#include <bits/stdc++.h>
#include "tree.h"
using namespace std;
vector<int> zig_zag(node *root)
{
    vector<int> ans;

    if (root == 0)
        return ans;

    queue<node *> q;
    q.push(root);

    bool leftToright = 1;
    while (!q.empty())
    {
        int size = q.size();

        //normal or reverse
        vector<int> temp(size);

        for (int i = 0; i < size; i++)
        {
            node *front = q.front();
            q.pop();

            //normal or reverse
            int index = leftToright ? i : size - 1 - i;
            temp[index] = front->data;

            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }

        leftToright = !leftToright;
        for (auto val : temp)
        {
            ans.push_back(val);
        }
    }
    return ans;
}

int main()
{
    node *root = 0;
    levelBuild(root);
    level_order(root);

    vector<int> result = zig_zag(root);
    cout << "reverse" << endl;
    for (int val : result)
    {
        cout << val << " ";
    }

    cout << "\n === end === " << endl;

    return 0;
}