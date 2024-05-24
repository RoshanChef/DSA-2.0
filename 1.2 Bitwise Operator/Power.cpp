#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;

    for (int i = 0; i < b >> 1; i++)
        ans = ans * a;

    ans = ans * ans;

    if (b % 2 == 1)
        return ans * a;
    return ans;
}

int main()
{
    int a, b;
    a = 2, b = 5;
    int c = power(a, b);
    cout << c;

    return 0;
}