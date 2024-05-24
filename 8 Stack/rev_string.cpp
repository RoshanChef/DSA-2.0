#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "roshan";
    cout << s.length() << endl;

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    cout << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = st.top();
        st.pop();
    }
    cout << s << endl;
    return 0;
}