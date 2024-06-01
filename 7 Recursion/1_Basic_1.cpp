#include <iostream>
using namespace std;

// Tail recurstion
void rev(int n)
{
    // base condition
    if (n == 0)
        return;

    // prossing
    cout << n << " ";

    // recursive
    rev(n - 1);
}

// Head recurstion
void forw(int n)
{
    // base condition
    if (n == 0)
        return;

    // recursive
    forw(n - 1);

    // prossing
    cout << n << " ";
}

int main()
{
    cout << "reverse ";
    rev(5);
    cout << "forward ";
    forw(5);
    cout << "\n================";
    return 0;
}