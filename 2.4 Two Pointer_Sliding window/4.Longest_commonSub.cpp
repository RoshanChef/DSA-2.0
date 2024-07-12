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
            int val = 'a' - s[j];
            if (hash[val] == 1)
                break;
            maxlen = max(maxlen, j - i + 1);
            hash[val]++;
        }
    }
    return maxlen;
}

int main()
{
    string s = "cadbzabcd";
    int maxlen = longest_sub(s);
    cout << "answer is " << maxlen << endl;

    cout << " \n=== end ===";
    return 0;
}