#include <iostream>
using namespace std;

class val
{
public:
    int a, b;
    val(int fir, int sec) : a(fir), b(sec*fir) {}
};
int main()
{
    val obj(10, 20);
    cout << obj.a << endl;
    cout << obj.b << endl;

    return 0;
}