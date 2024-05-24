#include "iostream"
using namespace std;

int main()
{
    int n = 5, m = 2;
    float val = n / m;
    cout << "Implicit Type Casting: " << endl;
    cout << " 5/2 : " << val << endl;

    int a = 5, b = 2;
    cout << "\nExplicit Type Casting: " << endl;
    float c = (float)a / b;
    cout << " 5/2 : " << c << endl;
    return 0;
}