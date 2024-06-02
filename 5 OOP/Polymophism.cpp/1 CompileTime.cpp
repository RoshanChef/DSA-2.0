#include <iostream>
using namespace std;

class Mathametics
{
public:
    // function overloading ..(name and return type must be same)
    int sum(int a, int b)
    {
        cout << "First " << endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout << "Second " << endl;
        return a + b + c;
    }

    int sum(int a, float b)
    {
        cout << "Third " << endl;
        return a + b + 100;
    }

    // // error
    // double sum(int a, int b)
    // {
    //     return 500;
    // }

    double sum(double a, double b)
    {
        return a + b;
    }
};

class param
{
public:
    int value;
    // operator overloading ..
    // Reference var otherwise loop
    void operator+(param &a)
    {
        cout << this->value - a.value << endl;
    }
};

void operator<<(ostream &cout, param &obj)
{
    cout << obj.value;
    cout << "i am in operator overload " << endl;
    return;
}

int main()
{

    Mathametics obj;
    // cout << obj.sum(2, 1) << endl;
    // cout << obj.sum(2, 2.5f) << endl;

    param obj1;
    param obj2;
    obj1.value = 5;
    obj2.value = 15;
    obj1 + obj2;

    param p;
    p.value = 109;
    cout << p;

    return 0;
}