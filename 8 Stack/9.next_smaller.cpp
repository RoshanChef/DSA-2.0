#include <bits/stdc++.h>
using namespace std;

// Approach 1
void next_smaller(int *arr, int *ans, int len)
{
    for (int i = 0; i < len; i++)
    {
        int min = arr[i];
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < min)
                min = arr[j];
        }
        if (min == arr[i])
            ans[i] = -1;
        else
            ans[i] = min;
    }
}
// Approach 2
void nx_smaller(int *ar, int *ans, int len)
{
    stack<int> stack;
    len--;
    stack.push(-1);
    for (int i = len; i >= 0; i--)
    {
        int cur = ar[i];

        // stack has greater ele
        while (stack.top() >= cur)
        {
            stack.pop();
        }
        ans[i] = stack.top();
        stack.push(cur);
    }
}
int main()
{
    int ar[] = {1, 2, 1, 4, 3};
    int ans[5] = {0};
    nx_smaller(ar, ans, 5);
    for (int val : ans)
        cout << val << " ";
    return 0;
}