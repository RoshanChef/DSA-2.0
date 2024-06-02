#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{

    // card sort
    for (int i = 1; i < n; i++)
    {

        int temp = arr[i];
        int j;
        // currect place
        for (j = i - 1; j >= 0; j--)
        {

            // shiftting ...
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
}

//  TC => bc O(N) 
//              ac,wc O(N*N)
//  SC =>O(1)

int main()
{
    vector<int> ar = {30, 20, 10, 5};

    insertionSort(ar.size(), ar);

    for (int val : ar)
        cout << val << " ";

    return 0;
}