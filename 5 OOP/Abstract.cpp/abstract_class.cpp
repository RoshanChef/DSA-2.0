#include <iostream>
#include "birds.h"
using namespace std;

void birdWork(bird *&obj)
{
    obj->fly();
    obj->eat();
}

// work like an interface
class base
{
public:
    // can't create object of class 
    // pure virtaul function
    // you have to imple this by inheritence ..
    virtual void print() = 0;
};

class child : public base
{
public:
    void print() { cout << "hello printer .. \n"; }
};

int main()
{

    bird *b = new sparrow;
    birdWork(b);

    delete b;
    b = new eagle;
    birdWork(b);

    return 0;
}