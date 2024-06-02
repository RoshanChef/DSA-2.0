#include <iostream>
using namespace std;

class a
{
public:
    int val = 0;
    int operator<<(a &obj)
    {
        cout << "value " << this->val << endl;
        return obj.val + this->val;
    }
};

int main()
{
    a obj1;
    obj1.val = 10;

    a obj2;
    obj2.val = 20;

    cout << (obj1 << obj2) << endl;

    return 0;
}