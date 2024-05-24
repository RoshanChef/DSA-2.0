#include <iostream>
using namespace std;

void update(int *p)
{
    // p = p + 1;
    *p = *p + 1;
}

// int get_sum(int arr[], int n)
int get_sum(int *arr, int n)
{
    // benit >> send part of an array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    char ch = 'A';
    char *pt = &ch;
    cout << pt << endl;

    // // Datatype * pointerName

    int val = 5;
    int *p = &val;

    // cout << "Before .. " << p << endl;
    // update(p);
    // cout << "After .. " << p << endl;

    cout << "Before val .. " << val << endl;
    update(p);
    cout << "After val .. " << val << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl;

    cout << get_sum(arr + 3, 2) << endl;

    return 0;
}