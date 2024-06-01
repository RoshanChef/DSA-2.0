#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base condition
    if (b == 1)
        return a;

    // recursive call and processing
    return a * power(a, b - 1);
}

int Pow(int a, int b)
{
    // Base condition
    if (b == 1)
        return a;

    // Recursive call
    int ans = Pow(a, b >> 1);

    // Processing
    if ((b & 1) == 0)
    {
        // even
        return ans * ans;
    }
    else
    {
        // odd
        return a * ans * ans;
    }
}

int main()
{
    cout << endl;
    cout << Pow(3,3);
    return 0;
}