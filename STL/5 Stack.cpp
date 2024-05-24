#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"stack top .. "<<st.top()<<endl;
    st.pop();
    // cout<<st.top()<<endl;
    cout<<"stack size .. "<<st.size()<<endl;
    cout<<"stack empty .. "<<st.empty()<<endl;

    return 0;
}