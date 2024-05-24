#include <iostream>
using namespace std;

void in_(int arr[][4], int row, int col)
{

    // input row major fashion
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
}

void pr_(int arr[][4], int row, int col)
{
    // output row major fashion
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void row_sum(int arr[][4], int row, int col, int arr2[])
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        arr2[row] = sum;
    }
}

void col_sum(int arr[][4], int row, int col, int arr2[])
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        arr2[col] = sum;
    }
}

int Large_Row_sum(int arr[][4], int row, int col, int arr2[])
{
    int maxi = INT8_MIN, mxIndex = 0;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        arr2[col] = sum;
        if (sum > maxi)
        {
            maxi = sum;
            mxIndex = col;
        }
    }
    return mxIndex + 1;
}




int main()
{
    int arr[3][4];

    in_(arr, 3, 4);
    pr_(arr, 3, 4);

    int arr2[3];
    row_sum(arr, 3, 4, arr2);

    cout << "Row sum is " << endl;
    for (int val : arr2)
    {
        cout << val << " ";
    }
    cout << endl;

    int arr3[4];

    cout << "col num " << Large_Row_sum(arr, 3, 4, arr3) << endl;
    // col_sum(arr, 3, 4, arr3);

    cout << "Col sum is " << endl;
    for (int val : arr3)
    {
        cout << val << " ";
    }

    return 0;
}