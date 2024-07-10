#include <iostream>
using namespace std;

int Bi_search(int *arr, int s, int e, int key)
{
    // Base case
    if (s > e)
        return -1;

    // Processing
    int mid = s + (e - s) / 2;

    // Recursive call
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] > key)
        return Bi_search(arr, s, mid - 1, key);

    else
        return Bi_search(arr, mid + 1, e, key);
}

int main()
{
    int arr[] = {2, 4, 6, 9, 12};
    int key = 2;

    int index = Bi_search(arr, 0, 5, key);
    cout << "index at key " << index << endl;

    return 0;
}