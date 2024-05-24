#include <iostream>
using namespace std;

int fact(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }

    // recursive and processing
    return n * fact(n - 1);
}

int main()
{
    cout << fact(6) << endl;

    return 0;
}

