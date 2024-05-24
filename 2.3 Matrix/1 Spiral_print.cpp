#include <bits/stdc++.h>
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

    // rows
    int startRow = 0;
    int endingRow = row - 1;

    // cols
    int startCol = 0;
    int endingCol = col - 1;

    // element track
    int cntEle = 0;
    int totalEle = row * col;

    cout << "Spiral Print" << endl;
    // spiral print
    while (cntEle < totalEle)
    {
        // start->end col
        for (int i = startCol; i <= endingCol && cntEle < totalEle; i++)
        {
            cout << arr[startRow][i] << " ";
            cntEle++;
        }
        startRow++;

        // start->end row
        for (int i = startRow; i <= endingRow && cntEle < totalEle; i++)
        {
            cout << arr[i][endingCol] << " ";
            cntEle++;
        }
        endingCol--;

        // end->start col
        for (int i = endingCol; i >= startCol && cntEle < totalEle; i--)
        {
            cout << arr[endingRow][i] << " ";
            cntEle++;
        }
        endingRow--;

        // end->start row
        for (int i = endingRow; i >= startRow && cntEle < totalEle; i--)
        {
            cout << arr[i][startCol] << " ";
            cntEle++;
        }
        startCol++;
    }

    return 0;
}