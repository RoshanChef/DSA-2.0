#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *fir = new int[len1];
    int *sec = new int[len2];

    // copy values ..
    int mainI = s;
    for (int i = 0; i < len1; i++)
    {
        fir[i] = arr[mainI++];
    }
    mainI = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        sec[i] = arr[mainI++];
    }

    int in_1 = 0;
    int in_2 = 0;
    mainI = s;
    // merge into original array
    while (in_1 < len1 && in_2 < len2)
    {
        if (fir[in_1] < sec[in_2])
            arr[mainI++] = fir[in_1++];
        else
            arr[mainI++] = sec[in_2++];
    }

    while (in_1 < len1)
        arr[mainI++] = fir[in_1++];

    while (in_2 < len2)
        arr[mainI++] = sec[in_2++];

    delete[] fir;
    delete[] sec;
}
void merge_sort(int *arr, int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // 1 case solve baki ..
    int mid = s + (e - s) / 2;

    // left half
    merge_sort(arr, s, mid);
    // right half
    merge_sort(arr, mid + 1, e);
    // merge them
    merge(arr, s, e);
}

int main()
{
    int arr[] = {2, 1, 6, 9, 3};
    int len = sizeof(arr) / sizeof(int);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "After Merge " << endl;
    merge_sort(arr, 0, len);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}