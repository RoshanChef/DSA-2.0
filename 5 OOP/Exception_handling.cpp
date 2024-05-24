#include <iostream>
using namespace std;

int main()
{
    int a = 10, b;
    cin >> b;
    // if (b == 0)
    // {
    //     // program flow stop
    //     cout << "divisible not possible" << endl;
    //     return 0;
    // }
    // cout << a / b << endl;

    // anther way exception
    try
    {
        if (b == 0)
        {
            throw "divisible is not possible";
        }
        cout << a / b << endl;
    }
    catch (const char *&msg)
    {
        cout << msg << endl;
    }

    cout << "\n=== end ===" << endl;

    return 0;
}