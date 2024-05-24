#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;

    // int row = 1;
    // // rows
    // while (row <= n)
    // {
    //     // columns
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "* ";
    //         col = col + 1;
    //     }
    //     row = row + 1;
    //     cout << endl;
    // }

    // // ************** numbers ****************
    // int row = 1;
    // // rows
    // while (row <= n)
    // {
    //     // columns
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row << " ";
    //         col = col + 1;
    //     }
    //     row = row + 1;
    //     cout << endl;
    // }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // // *********** increasing 1 ************
    // int row = 1;

    // // rows
    // while (row <= n)
    // {
    //     // columns
    //     int col = 1,num = row;
    //     while (col <= row)
    //     {
    //         cout << num++ << " ";
    //         col = col + 1;
    //     }
    //     row = row + 1;
    //     cout << endl;
    // }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    // // *********** increasing  2************
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row + col - 1 << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }


    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i-j +1<< " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    return 0;
}