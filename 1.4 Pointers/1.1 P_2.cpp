#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    int *ptr = &num;

    // stores an address
    // // Datatype * pointerName

    // // *ptr == num
    *ptr = *ptr + 1;
    cout << num << endl;

    cout << "Pointer " << ptr << endl;
    ptr = ptr + 1;
    cout << "Pointer " << ptr << endl;

    // // types

    /*
    wild
    null
    dangling
    void
    */

    // wild
    // int *a;

    // Null
    // All same
    int *y = NULL;
    int *x = 0;
    int *z = '\0';
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    // Dangling
    int *m = 0;

    {
        int xab = 10;
        m = &xab;
    }
    cout << m << endl;
    cout << *m << endl;
    *m = 102;
    cout << *m << endl;

    // void == generic
    int i = 12;
    double d = 15.65;
    float f = 45.99;

    void *pr = &i;
    cout << *(int *)pr << endl;
    
    pr = &d;
    cout << *(double *)pr << endl;
    pr = &f;
    cout << *(float *)pr << endl;

    char ch = 'A';
    char *pt = &ch;
    cout << pt << endl;

    return 0;
}