#include <iostream>
using namespace std;

int main()
{

    int arr[4][4] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,

    };

    // basics
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Wave print
    cout << "wave print ... " << endl;
    for (int column = 0; column < col; column++)
    {
        // revese
        if (column & 1)
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][column] << " ";
            }
            cout<<endl;
        }
        // normal
        else
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][column] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}