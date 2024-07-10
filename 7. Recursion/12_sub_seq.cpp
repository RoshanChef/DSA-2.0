#include <bits/stdc++.h>
using namespace std;

void solve(string str, string out, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        ans.push_back(out);
        return;
    }

    // exclude
    solve(str, out, index + 1, ans);

    // include
    char ele = str[index];
    out.push_back(ele);
    solve(str, out, index + 1, ans);
}

vector<string> sub_seq(string &str)
{
    vector<string> ans;
    string out = "";

    solve(str, out, 0, ans);

    return ans;
}

int main()
{
    string str = "abc";
    vector<string> sub = sub_seq(str);

    cout << endl;
    for (string val : sub)
        cout << val << " ";
    cout << "================" << endl;

    return 0;
}