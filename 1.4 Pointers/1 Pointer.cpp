
#include <iostream>

using namespace std;

int main()
{
    int num = 5;

    // A pointer is a variable that stores the memory address of another variable as its value.

    // Datatype *ptr_var_name;
    int *p = &num;

    double *d = NULL;

    cout << "\nsize " << sizeof(p) << endl;
    cout << "size " << sizeof(d) << endl;
    cout << endl;
    int a = *p;
    a++;
    cout << num << endl;
    cout << a << endl;

    cout << "Before .. num" << endl;
    cout << num << endl;

    // (*p) == num
    // (*p) = (*p) + 1;
    (*p) = (*p) * 2;

    cout << "\nAfter .. num " << endl;
    cout << num << endl;

    cout << endl;
    // copy pointers
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    cout << endl;
    cout << q << endl;

    // both different ..
    //  cout << *q++ << endl;

    cout << num << endl;
    cout << (*q)++ << endl;
    cout << num << endl;
    cout << q << endl;

    return 0;
}