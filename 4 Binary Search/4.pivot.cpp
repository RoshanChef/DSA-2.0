#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        // upper side
        if (arr[mid] >= arr[0])
        {
            low = mid + 1;
        }
        // lower side
        else
        {
            high = mid;
        }
    }
    return low - 1;
}

int main()
{
    // rotated sorted array
    int arr[5] = {3, 8, 10, 13, 3};
    cout << pivot(arr, 5) << endl;
    cout << arr[pivot(arr, 5)] << endl;

    return 0;
}