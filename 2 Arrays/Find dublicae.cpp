#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(long long arr[], int n)
{
    sort(arr, arr + n);
    vector<int> ans;
    int track = -1;

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] == arr[i + 1] && track != arr[i])
        {
            ans.push_back(arr[i + 1]);
            track = arr[i];
        }
    }

    if (ans.size() > 0)
    {
        return ans;
    }
    return {-1};
}

int main()
{

    long long arr[] = {1, 41, 2, 3, 41, 1, 41};

    vector<int> ans = duplicates(arr, 6);

    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}