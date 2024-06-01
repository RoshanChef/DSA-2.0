#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // arr 1st element

    //&arr enitre array

    cout << "first .. \n\t" << arr << endl;
    // cout << endl;
    // cout << arr + 1 << endl;
    // cout << "contains .. " << (&arr) + 1 << endl;
    // cout << &arr[0] + 1 << endl;

    cout << *(&arr) << endl;
    cout << *(arr + 2) << endl;
    cout << *arr + 1 << endl;

    // arr[i] = *(arr + i)
    // i[arr] = *(i + arr)

    // cout << arr[2] << endl;
    // cout << 2 [arr] << endl;

    int temp[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sizeof(temp) << endl;
    cout << sizeof(&temp) << endl;

    int *pt = temp;
    cout << sizeof(pt) << endl;

    cout << temp + 1 << endl;
    cout << pt + 1 << endl;
    pt++;
    cout << pt << endl;

    int ar[4] = {0};
    // int *p = ar;

    // not allowed
    //  int * p = &ar;

    cout << "\n==== end ====";
    return 0;
}
