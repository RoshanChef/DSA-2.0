#include <iostream>
using namespace std;

int main()
{
    char p[5] = "John";
    char *ptr = p;
    cout << (ptr + 1) << endl;
    cout << p << endl;

    // roshan store in unknown memory area and return only address
    char str[] = "Roshan";
    // str = "new string";
    cout << str << endl;

    // // pointers play ..

    // string name = "Krishan";
    // cout << name << endl;
    // name = "kalmathe";
    // cout << name << endl;

    // const char *s = "hello";
    // cout << s << endl;
    // s = "world";
    // cout << s << endl;

    // char ch[5] = "jojo";
    // const char *pal = &ch[0];
    // cout << pal << endl;

    return 0;
}