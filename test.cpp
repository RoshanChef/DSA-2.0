#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n == 2 || n == 1 || n == 0)
        return 1;
    for (int i = 3; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (prime(n))
        cout << "it is prime" << endl;
    else
        cout << "it is not prime" << endl;

    return 0;
}