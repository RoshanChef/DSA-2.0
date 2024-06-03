#include <iostream>
using namespace std;

int Peaks_moutain(int arr[], int len)
{
    int low = 0;
    int high = len - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        //  left side
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        //  right side
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    int arr[5] = {4, 5, 6, 21, 1};
    cout << Peaks_moutain(arr, 5) << endl;

    return 0;
}