#include <iostream>
using namespace std;

int first(int arr[], int n, int key)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // founded ..
        if (key == arr[mid])
        {
            if (arr[mid - 1] == key)
            {
                high = mid - 1;
            }
            else
                return mid;
        }
        // greater than
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        // less than
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int last(int arr[], int n, int key)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // founded ..
        if (key == arr[mid])
        {
            if (mid + 1 <= high && arr[mid + 1] == key)
            {
                low = mid + 1;
            }
            else
                return mid;
        }
        // greater than
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        // less than
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int ar[] = {0,1,1,3, 3, 3, 3, 3, 3};
    int len = sizeof(ar) / 4;
    cout << "first occurence " << first(ar, len, 3) << endl;
    cout << "last occurence " << last(ar, len, 3) << endl;
    return 0;
}