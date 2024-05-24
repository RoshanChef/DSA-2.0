#include <iostream>
using namespace std;

int main()
{
    // 1D array
    /*
    int n;
    cin >> n;
    int *p = new int[n];
    */

    // 2D N × N
    /*
       int n;
       // 2D array
       cin >> n;
       int **ptr = new int *[n];

       // creation
       for (int i = 0; i < n; i++)
       {
           // 1D array
           ptr[i] = new int[n];
       }

       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < n; j++)
           {
               cin >> ptr[i][j];
           }
       }

       //print ...
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < n; j++)
           {
               cout<< ptr[i][j] <<" ";
           }cout<<endl;
       }

    */

    // 2D row × col

    int row, col;
    cin >> row >> col;

    int **ptr = new int *[row];

    // create array
    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int[col];
    }

    // input of array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // print out
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing inner memory
    for (int i = 0; i < row; i++)
    {
        //rowise col 
        delete[] ptr[i];
    }

    //releasing outter memory
    delete [] ptr;

        cout<<"\n=========================";
    return 0;
}