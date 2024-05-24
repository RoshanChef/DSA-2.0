#include <iostream>
using namespace std;

int main()
{
    int in = 5;
    int *p = &in;
    int **ptr = &p;

    // Datatype * pointerName

    cout << "pointer p .. " << &p << endl;
    cout << "pointer ptr .. " << ptr << endl;

    // int **

    // int *
    cout << *ptr << endl;
    // int
    cout << **ptr << endl;

    cout << endl;
    cout << in << endl;
    cout << *p << endl;
    cout << **ptr << endl;

    cout << endl;
    cout << &in << endl;
    cout << p << endl;
    cout << *ptr << endl<<endl;

    cout<<&p<<endl;
    cout<<ptr<<endl;

    return 0;
}