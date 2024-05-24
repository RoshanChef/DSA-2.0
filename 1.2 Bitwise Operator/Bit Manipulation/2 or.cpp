#include <iostream>
using namespace std;

int main()
{
    cout << "set the number's ith bit : "<<endl;
    int n = 12, i;
    cin >> i;
    cout << "before n : " << n << endl;

    i = 1 << i;
    n = n | i;

    cout << "after n : " << n << endl;

    return 0;
}