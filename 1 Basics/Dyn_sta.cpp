#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    cout << sizeof(p) << endl;

    //best practice
    int ar[100];

    int n;
    cout << "enter size of arr  " << endl;
    cin >> n;
    
    // variable length array
    int *ptr = new int[n];

    // statically automatically free
    while (1)
    {
        int i = 10;
    }

    // Heap memory you have to delete
    while (1)
    {
        int *p = new int;
    }

    // delete explicitly
    while (1)
    {
        int *p = new int;
        delete p;
    }

    while (1)
    {
        int *p = new int[40];
        delete[] p;
    }

    /*
        delete variable
        delete [] variable -> 1D Array
    */

    return 0;
}