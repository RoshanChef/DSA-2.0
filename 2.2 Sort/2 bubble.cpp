#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        bool swaped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            // swap
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (!swaped)
            break;
    }
}

int main()
{
    vector<int> arr = {12, 4  , 7, 10};
    
    return 0;
}