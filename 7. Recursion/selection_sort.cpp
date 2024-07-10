#include <iostream>
using namespace std;

void selection(int *arr, int len)
{
    if (len == 1)
    {
        return;
    }

    // 1 case solve ker
    int min = arr[0], minI = 0;
    for (int i = 1; i < len; i++)
    {
        if (min > arr[i])
        {
            minI = i;
            min = arr[i];
        }
    }
    swap(arr[0], arr[minI]);

    // baki recursive call
    return selection(arr + 1, len - 1);
}

int main()
{
    int ar[] = {2, 1, 3, 9, 5};
    int len = sizeof(ar) / sizeof(int);

    //Before
    for (int val : ar)
    {
        cout << val << " ";
    }
    cout << endl;

    selection(ar, len);

    //After
    for (int val : ar)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "====================" << endl;

    return 0;
}