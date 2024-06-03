#include <iostream>
using namespace std;

class animal
{
private:
    int a, b;
    const int c;

public:
    // error
    //  animal(int a , int b  , int c ){
    //      this->a = a;
    //      this->b = b;
    //      this->c = c;
    //  }

    // solutions
    animal(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
};

class Box
{
    int width;
    // private constructor ..
    Box(int width) : width(width) {}

public:
    friend class BoxFactory;
};

class BoxFactory
{
    int cnt;

public:
    BoxFactory() { this->cnt = 0; }
    Box getBox(int w)
    {
        cnt++;
        return Box(w);
    }
    int getCnt() { return cnt; }
};

int main()
{

    BoxFactory fect;
    Box bx = fect.getBox(123);
    Box bx2 = fect.getBox(24);

    cout << fect.getCnt() << endl;

    return 0;
}