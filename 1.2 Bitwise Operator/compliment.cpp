#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int num = 0, i = 0;
    while (n)
    {
        int bit = n & 1;
        num += (!bit) * pow(2, i);
        n = n >> 1;
        i++;
    }
    cout << "The number is : " << num;

    return 0;
}