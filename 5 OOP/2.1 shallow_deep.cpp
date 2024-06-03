#include <iostream>
using namespace std;

// shallow => surface lv

// Deep => detailing

class box
{
public:
    int x, *y;
    box(int x, int y) : x(x), y(new int[y]) {}

    void print() const
    {
        cout << "x " << x << "\ny => " << *y << "\nPtr y " << y << endl;
    }

    // // shallow default copy
    // box(box &obj)
    // {
    //     this->x = obj.x;
    //     this->y = obj.y;
    // }

    // //Deep copy
    box(box &obj)
    {
        this->x = obj.x;
        this->y = new int(*obj.y);
    }

    ~box()
    {
        delete y;
    }
};

int main()
{
    // // Shallow copy
    // box a(1, 20);
    // box b(a);
    // // box b = a;
    // a.print();
    // b.print();

    // *(b.y) = 2500;
    // b.x = 5;

    // cout << "\na print " << endl;
    // a.print();

    // cout << "\nb print " << endl;
    // b.print();




    // //Deep copy
    // box c = {2, 30};
    // box d(c);

    // c.print();
    // d.print();

    // *(d.y) = 2500;

    // cout << "Printing c " << endl;
    // c.print();

    // cout << "Printing d " << endl;
    // d.print();

    return 0;
}