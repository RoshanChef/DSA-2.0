#include <bits/stdc++.h>
using namespace std;
string first_nonRepeat(string &s)
{
    map<char, int> m;
    queue<char> q;

    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        char cur = s[i];

        // map count;
        m[cur]++;

        // queue push the current element
        q.push(cur);
        while (!q.empty())
        {
            if (m[cur] > 1)
                q.pop();
            else
            {
                ans += q.front();
                break;
            }
        }
        // empty queue
        if (q.empty())
            ans += '#';
    }
    return ans;
}

int main()
{

    string s = "aabc";
    string res = first_nonRepeat(s);
    cout << res << endl;

    s = "zz";
    res = first_nonRepeat(s);
    cout << res << endl;

    return 0;
}