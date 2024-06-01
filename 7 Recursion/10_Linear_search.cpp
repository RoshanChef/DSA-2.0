#include <iostream>
using namespace std;
bool linear(int *ar, int len, int key)
{
    // base case
    if (len == 0)
        return 0;

    // processing
    if (ar[0] == key)
    {
        return 1;
    }
    // recursive call
    return linear(ar + 1, len - 1, key);
}

int main()
{
    int ar[] = {2, 1, 5, 9, 3};
    int len = sizeof(ar) / sizeof(int);

    int key = 9;
    bool check = linear(ar, len, key);

    if (check)
    {
        cout << "Present in Arr " << endl;
    }
    else
    {
        cout << "Absent in Arr " << endl;
    }

    return 0;
}