#include <iostream>
using namespace std;

int main()
{
    char p[5] = "john";
    char *ptr = p;
    cout << (ptr + 1) << endl;
    cout << p;

    // roshan store in unknown memory area and return only address
    char *str = "roshan";
    str = "new string";
    cout << str << endl;

    // pointers play ..

    string name = "roshan";
    cout << name << endl;
    name = "kalmathe";
    cout << name << endl;

    char *s = "hello";
    cout << s << endl;
    s = "world";
    cout << s << endl;

    char ch[5] = "jojo";
    char *pal = &ch[0];
    cout << pal << endl;


    return 0;
}