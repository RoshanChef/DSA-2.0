#include <iostream>
using namespace std;

int longest_sub(string s)
{
    int n = s.size();
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int hash[256] = {};
        for (int j = i; j < n; j++)
        {
            int val = s[j] - 'a';
            if (hash[val] == 1)
                break;
            maxlen = max(maxlen, j - i + 1);
            hash[val]++;
        }
    }
    return maxlen;
}
// Time complexity:  O(N*N)
// Space complexity:  O(256) => O(1)

int longest(string s)
{
    int n = s.size();
    int l = 0, r = 0;
    int hash[256] = {-1};
    int maxlen = 0;
    while (r < n)
    {
        if (hash[r] != -1)
        {
            if (hash[s[r]] >= l)
            {
                l = hash[s[r]] + 1;
            }
        }
        int len = r - l + 1;
        maxlen = max(maxlen, len);
        hash[s[r]] = r;
        r++;
    }
    return maxlen;
}
// Time complexity:  O(N)
// Space complexity: O(256) => O(1)

int main()
{
    string s = "cadbzabcd";
    int maxlen = longest_sub(s);
    cout << "answer is " << maxlen << endl;
    cout << "answer is " << longest(s) << endl;

    cout << " \n=== end ===";
    return 0;
}