#include <bits/stdc++.h>
using namespace std;
/*
Longest subarray with sum <= k
*/

// Brutte force
int longest_sub(vector<int> ar, int k)
{
    int maxLen = 0, len = ar.size();

    for (int i = 0; i < len; i++)
    {
        int sum = 0;
        for (int j = i; j < len; j++)
        {
            sum += ar[j];
            if (sum <= k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
            else if (sum > k)
                break;
        }
    }
    return maxLen;
}
// Time complexity:  O(N*N)
// Space complexity: O(1)

// Two pointer
int long_sub(vector<int> ar, int k)
{
    int sum = 0;
    int l = 0, r = 0;

    int maxLen = 0;
    while (r < ar.size())
    {
        sum += ar[r];
        while (sum > k)
        {
            sum -= ar[l++];
        }
        // sum<= k
        maxLen = max(maxLen, r - l + 1);
        r++;
    }
    return maxLen;
}
// Time complexity:  O(2*N)
// Space complexity: O(1)

// better Two pointer
int long_sub2(vector<int> ar, int k)
{
    int sum = 0;
    int l = 0, r = 0;

    int maxLen = 0;
    while (r < ar.size())
    {
        sum += ar[r];
        if (sum > k)
        {
            sum -= ar[l++];
        }
        // sum<= k
        maxLen = max(maxLen, r - l + 1);
        r++;
    }
    return maxLen;
}
// Time complexity:  O(N)
// Space complexity: O(1)

int main()
{
    vector<int> arr = {2, 5, 3, 7, 10};
    int value = long_sub2(arr, 14);
    cout << "value is " << value;

    return 0;
}