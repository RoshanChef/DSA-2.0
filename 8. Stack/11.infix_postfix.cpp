#include <bits/stdc++.h>
using namespace std;

int pre(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

// associativity
char asso(char ch)
{
    if (ch == '^')
        return 'R';
    return 'L';
}

string infixToPostfix(string s)
{
    string ans;
    stack<char> stack;
    //scan left to right
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // operand
        if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z') || ('0' <= ch && ch <= '9'))
        {
            ans += ch;
        }

        // left bracket
        else if (ch == '(')
        {
            stack.push(ch);
        }

        // right bracket
        else if (ch == ')')
        {
            // pop all
            while (stack.top() != '(')
            {
                ans += stack.top();
                stack.pop();
            }
            stack.pop();
        }

        // operators
        else
        {
            // poping
            while ((!stack.empty() && pre(stack.top()) > pre(ch)) ||
                   (!stack.empty() && pre(stack.top()) == pre(ch) && asso(ch) == 'L'))
            {
                ans += stack.top();
                stack.pop();
            }
            stack.push(ch);
        }
    }
    // remaing part ..
    while (!stack.empty())
    {
        ans += stack.top();
        stack.pop();
    }

    return ans;
}
int main()
{
    string expression = "a+b*c-d";
    string postfix = infixToPostfix(expression);
    cout << postfix;

    return 0;
}