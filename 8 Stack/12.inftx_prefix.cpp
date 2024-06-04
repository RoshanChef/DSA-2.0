#include <bits/stdc++.h>
using namespace std;
int pre(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

char asso(char ch)
{
    if (ch == '^')
    {
        return 'R';
    }
    return 'L';
}

void reverse(string &str)
{
    int s = 0;
    int e = str.length() - 1;
    while (s < e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}
string infixToPrefix(string s)
{
    string ans;
    stack<char> stack;

    // scan right  to left
    for (int i = s.length() - 1; i > -1; i--)
    {
        char ch = s[i];
        if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || ('0' <= ch && ch <= '9'))
            ans += ch;

        // right bracket
        else if (ch == ')')
            stack.push(ch);

        // left bracket
        else if (ch == '(')
        {
            while (!stack.empty() && stack.top() != ')')
            {
                ans += stack.top();
                stack.pop();
            }
            stack.pop();
        }

        // operator
        else
        {

            if (stack.empty())
                stack.push(ch);
            else
            {
                while ((!stack.empty() && pre(ch) < pre(stack.top())) || !stack.empty() && pre(ch) == pre(stack.top() && asso(ch) == 'L'))
                {
                    ans += stack.top();
                    stack.pop();
                }
                stack.push(ch);
            }
        }
    }
    // remaining
    while (!stack.empty())
    {
        ans += stack.top();
        stack.pop();
    }

    reverse(ans);
    return ans;
}
int main()
{
    string expression = "a+b*c-d";
    string prefix = infixToPrefix(expression);
    cout << prefix;

    return 0;
}