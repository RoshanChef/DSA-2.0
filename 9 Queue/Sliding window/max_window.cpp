#include "bits/stdc++.h"
using namespace std;
vector<int> max_in_window(vector<int> &ar, int k)
{
    vector<int> ans;
    int i = 0, j = 0;
    int maxi = INT_MIN;
    while (i <= ar.size()-k)
    {
        maxi = max(maxi, ar[j]);

        // window hit
        if (k == j - i + 1)
        {
            ans.push_back(maxi);
            i++;
        }
        j++;
    }

    return ans;
}
int main()
{
    vector<int> ar = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    vector<int> ans;
    ans = max_in_window(ar, 3);
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}