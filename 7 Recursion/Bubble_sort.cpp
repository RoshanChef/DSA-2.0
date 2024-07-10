#include <iostream>
using namespace std;
void Bubble(int *arr, int len)
{
    // Base condition
    if (len == 1)
        return;

    // 1 case ker
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    //baki Recursive call
    return Bubble(arr + 1, len - 1);
}

int main()
{
    int ar[] = {2, 1, 3, 9, 5};
    int len = sizeof(ar) / sizeof(int);

    for (int val : ar)
    {
        cout << val << " ";
    }
    cout << endl;
    Bubble(ar, len);
    for (int val : ar)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "====================" << endl;
    return 0;
}