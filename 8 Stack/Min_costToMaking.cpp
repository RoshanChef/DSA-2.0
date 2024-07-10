#include <bits/stdc++.h>
using namespace std;

int min_valid(string &str)
{
    if ((str.length() & 1) == 1)
        return -1;

    // length
    int len = str.length();
    stack<char> stack;

    // remove valid
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        // open bracket
        if (ch == '{')
            stack.push(ch);

        // close bracket
        else
        {
            if (!stack.empty() && stack.top() == '{')
                stack.pop();
            else
                stack.push(ch);
        }
    }

    // Invalid
    // 1 {{{{
    // 2 }}}}
    // 3 }}}{{{
    int a = 0, b = 0;
    while (!stack.empty())
    {
        if (stack.top() == '{')
            a++;
        else
            b++;
        stack.pop();
    }

    a++, b++;

    int ans = (a / 2) + (b / 2);
    return ans;
}
int main()
{
    string s = "}}}}}}}";
    int res = min_valid(s);
    cout << "ans is " << res << endl;
    return 0;
}