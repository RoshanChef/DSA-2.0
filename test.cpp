#include <iostream>
using namespace std;
int sq(int n)
{
    if (n == 1)
    {
        return n;
    }

    for (int i = 1; i <= n; i++)
    {
        int ans = i * i;
        if (ans > n)
        {
            return i-1;
        }
    }

    return -1;
}
int main()
{

    cout << sq(2) << endl;
    return 0;
}