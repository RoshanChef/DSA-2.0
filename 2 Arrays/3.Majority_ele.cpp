#include <iostream>
using namespace std;

int majorityEle(int *a, int size)
{
    if (size == 1)
        return a[0];

    int number[100000] = {0};

    for (int i = 0; i < size; i++)
    {
        number[a[i]] = number[a[i]] + 1;
    }

    int n = size / 2;
    // check in fruqency ..
    for (int i = 0; i < 100000; i++)
    {
        if (number[i] > n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[6] = {3, 1, 3, 3, 2, 4};
    int majori = majorityEle(arr, sizeof(arr) / 4);
    cout << majori << endl;

    cout << "=== end ===" << endl;
    ;

    return 0;
}