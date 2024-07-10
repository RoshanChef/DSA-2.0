#include <iostream>
using namespace std;
bool isSort(int *arr, int len)
{
    // Base case
    if (len == 1 || len == 0)
        return 1;

    // processing
    if (arr[0] > arr[1])
        return 0;

    // Recursive call
    return isSort(arr + 1, len - 1);
}

int main()
{
    int arr[] = {45,4};
    int len = sizeof(arr) / sizeof(int);

    bool check = isSort(arr, len);

    cout << "is Sorted ? " << check << endl;
    return 0;
}