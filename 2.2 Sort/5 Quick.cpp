#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    // count min pivot
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            cnt++;
    }

    // set pivot
    int pivotIn = s + cnt;
    swap(arr[s], arr[pivotIn]);

    // set ele
    while (s < e)
    {
        if (arr[s] < arr[pivotIn])
            s++;
        else if (arr[e] > arr[pivotIn])
            e--;
        else
            swap(arr[s], arr[e]);
    }
    return pivotIn;
}

/*
int partition(int *arr, int s, int e)
{
    int pivot_In = s;
    s++;

    //set pivot
    while (s <= e)
    {
        if (arr[s] <= arr[pivot_In])
            s++;
        else if (arr[e] > arr[pivot_In])
            e--;
        else
            swap(arr[s], arr[e]);
    }
    swap(arr[pivot_In], arr[e]);
    return e;
}
 */

void Quick_sort(int *arr, int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // 1 case ker baki
    int p = partition(arr, s, e);

    // Recursive calls

    // left
    Quick_sort(arr, s, p - 1);

    // right
    Quick_sort(arr, p + 1, e);
}

int main()
{
    int ar[] = {3, 1, 9, 5, 2};
    int len = sizeof(ar) / sizeof(int);

    for (int val : ar)
        cout << val << " ";
    cout << endl;

    Quick_sort(ar, 0, len - 1);
    cout << endl;
    for (int val : ar)
        cout << val << " ";

    cout << "\n==== end ====";
    return 0;
}