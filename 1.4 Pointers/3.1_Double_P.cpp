#include <iostream>
using namespace std;
void update(int **p)
{
    // // change 1
    // p = p + 1;

    // // change 2
    // *p = *p + 1;

    // // change 3
    // **p = **p + 1;
}

int main()
{
    int i = 123;
    int *p = &i;
    int **ptr = &p;

    // Datatype * pointerName


    cout << "value i   " << i << endl;
    cout << "value p   " << p << endl;
    cout << "value ptr " << ptr << endl;
    cout << endl
    << endl;

    update(ptr);
    cout << "value i   " << i << endl;
    cout << "value p   " << p << endl;
    cout << "value ptr " << ptr << endl;

    cout << "\n==== end ====";
    return 0;
}