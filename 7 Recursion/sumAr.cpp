#include <iostream>
using namespace std;

int sumAr(int *ar, int len)
{
    // Base case
    if (len == 1)
        return ar[0];
    if (len == 0)
        return -1;

    // recursive and processing
    return ar[0] + sumAr(ar + 1, len - 1);
}

int main()
{

    int ar[] = {};
    int len = sizeof(ar) / sizeof(int);

    int sum = sumAr(ar, len);
    cout << "sum is " << sum << endl;
    return 0;
}