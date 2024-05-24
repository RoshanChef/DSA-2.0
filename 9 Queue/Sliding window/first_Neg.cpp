#include <bits/stdc++.h>
using namespace std;

// ########################
// sliding window
// ########################

vector<int> firstNeg(vector<int> ar, int k)
{
    vector<int> ans;
    int i = 0, j = 0;
    queue<int> window;
    
    while (j < ar.size())
    {
        // -ve
        if (ar[j] < 0)
            window.push(ar[j]);

        // window hit
        if (j - i + 1 == k)
        {
            if (!window.empty())
            {
                ans.push_back(window.front());
            }
            else
            {
                ans.push_back(0);
            }
            if (ar[i] == window.front())
            {
                window.pop();
            }
            i++;
        }
        j++;
    }
    return ans;
}

int main()
{
    vector<int> ar = {12, -1, -7, 8, -15, 30, 16, 28};

    vector<int> res = firstNeg(ar, 3);
    for (int val : res)
    {
        cout << val << " ";
    }
    cout << endl;
    ar = {-8, 2, 3, -6, 10};
    res = firstNeg(ar, 2);
    for (int val : res)
    {
        cout << val << " ";
    }

    return 0;
}