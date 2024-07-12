#include <iostream>
#include <cstdlib>
using namespace std;

/*

Heapify
Build_heap
Heap sort

*/
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

// given array convert into heap
void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{
    int arr[] = {
        -1, 100, 20, 60, 50, 65, 62, 55, 40, 30, 10, 15};
    int len = sizeof(arr) / sizeof(int);
    cout << "Before Printing ... " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    heapify(arr, len, 2);
    cout << "\n\nAfter Printing ... " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    int vec[] = {-1, 10, 12, 13, 14, 15};
    len = sizeof(vec) / sizeof(int);
    buildHeap(vec, len);
    cout << "\n\nAfter Printing ... " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << vec[i] << " ";
    }
    cout << " \n=== end ===";
    return 0;
}