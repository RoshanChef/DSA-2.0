#include <iostream>
using namespace std;

class abc
{
public:
    static int a, b;
    int c;

    static void print()
    {
        // no this pointer passes
        // all member must be static
        cout << "a => " << a << " b => " << b << endl;

        // // error
        // cout << c << endl;
    }
};

int abc::a;
int abc::b;

int main()
{
    abc obj1, obj2;
    obj1.a = 10;
    obj1.b = 20;
    obj1.print();

    // change in obj2
    obj2.a = 30;
    obj2.b = 40;
    obj1.print();
    obj2.print();

    // direct access
    cout << abc::a << endl;
    cout << abc::b << endl;

    abc::print();

    return 0;
}