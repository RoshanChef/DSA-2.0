#include <iostream>
#include <vector>
using namespace std;

vector<int> onece_appear(int *arr, int len)
{
    // xor all
    int xr = 0;
    for (int i = 0; i < len; i++)
    {
        xr ^= arr[i];
    }

    int cnt = 0;
    // check set bit O(32)
    while (xr)
    {
        if (xr & 1)
        {
            break;
        }
        xr >>= 1;
        cnt++;
    }

    int xr1 = 0, xr2 = 0;

    // O(N) partitions
    for (int i = 0; i < len; i++)
    {
        // set
        if (arr[i] & (1 << cnt))
        {
            xr1 ^= arr[i];
        }
        // unset
        else
        {
            xr2 ^= arr[i];
        }
    }
    vector<int> ans;
    ans.push_back(xr2);
    ans.push_back(xr1);
    return ans;
}

int main()
{

    int arr[] = {1, 4, 2, 1, 5, 2, 4, 6};
    int len = sizeof(arr) / sizeof(int);
    vector<int> one = onece_appear(arr, len);

    for (int val : one)
        cout << val << " ";
    cout << endl;

    return 0;
}