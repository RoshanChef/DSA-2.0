#include <iostream>
using namespace std;

class abc
{
    mutable int x;
    int *y;

public:
    abc()
    {
        x = 0;
        y = NULL;
    }
    // const fn => can't change any val inside
    int getX() const
    {
        // //error
        // x = 13;
        return x;
    }
    void setX(int val)
    {
        x = val;
    }
    int decode() const
    {
        x = 1001;
        return x;
    }
};

void cons(const abc &a)
{
    // all member acces by obj must const
    cout << "value " << a.getX() << endl;
};

int main()
{
    // int *a = new int(23);
    // cout << *a << endl;

    // // const int *p = new int(867); // const data , non-const pointer
    // int const *p = new int(867);
    // cout << *p << endl;

    // // //error
    // // *p  = 34;

    // // delete heap memory
    // delete p;

    // int data = 12;
    // p = &data;
    // cout << *p << endl;

    // // const pointer , non-const data
    // int *const pr = new int(23);
    // cout << *pr << endl;
    // *pr = 2;
    // cout << *pr << endl;

    // int b = 789;

    // // error
    // pr = &b;

    // cout << *pr << endl;

    // ****************************************
    // varialbe properties * pointer properties
    // *****************************************

    abc obj;
    cout << obj.getX() << endl;
    cout<<obj.decode()<<endl;
    cons(obj);

    return 0;
}