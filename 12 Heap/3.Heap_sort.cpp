#include <iostream>
using namespace std;

void heapify(int arr[], int n, int index)
{
    int left = 2 * index;
    int right = 2 * index + 1;
    int largest = index;

    if (left < n && arr[largest] < arr[left])
        largest = left;
    if (right < n && arr[largest] < arr[right])
        largest = right;
    if (largest != index)
    {
        swap(arr[largest], arr[index]);
        index = largest;
        heapify(arr, n, index);
    }
}

void heapsort(int arr[], int n)
{
    while (n != 1)
    {
        swap(arr[1], arr[n--]);
        heapify(arr, n, 1);
    }
}
int main()
{
    int arr[] = {-1, 100, 65, 62, 50, 60, 55, 40, 30, 10, 15};
    int len = sizeof(arr) / sizeof(int);
    cout << "Before Sorting ... " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
    heapsort(arr, len - 1);
    cout << "After Sorting ... " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " \n=== end ===";
    return 0;
}