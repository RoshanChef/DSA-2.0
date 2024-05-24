#include <iostream>
using namespace std;

int sumOfN(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }

    // recursive and processing
    return n + sumOfN(n - 1);
}

int main()
{
    int n = 6;
    cout << sumOfN(n) << endl;
    return 0;
}