#include <iostream>
using namespace std;

bool Lsearch(int a[], int key, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] == key)
            return 1;
    }
    return 0;
}

void reverse(int arr[], int len)
{
    len--;
    int i = 0;
    while (i < len)
    {
        // swap the elements
        int temp = arr[i];
        arr[i] = arr[len];
        arr[len] = temp;

        len--;
        i++;
    }
    cout << endl;
}

void print(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {2, 7, 3, 5, 9};
    // cout<<Lsearch(arr,10,8);
    print(arr, 5);
    reverse(arr, 5);
    print(arr, 5);

    return 0;
}