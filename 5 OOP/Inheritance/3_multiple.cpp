#include <iostream>
using namespace std;
class A
{
public:
    int chem;
    A()
    {
        this->chem = 100;
    }
};

class B
{
public:
    int chem;
    B()
    {
        this->chem = 400;
    }
};

class C : public A, public B
{
public:
    int math;
    C()
    {
       this->math = 99;
    }
};

int main()
{
    C obj;
    cout << "A " << obj.A::chem << endl;
    cout << "B " << obj.B::chem << endl;
    cout << endl;
    cout << endl;

    // //error
    // cout<<obj.C::chem<<endl;

    cout << "A " << obj.C::A::chem << endl;
    cout << "B " << obj.C::B::chem << endl;

    return 0;
}