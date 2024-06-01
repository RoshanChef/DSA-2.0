#include <iostream>
using namespace std;

void print(int n, string *st)
{
    // base
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n /= 10;
    print(n, st);
    cout << st[digit] << " ";
}
int main()
{
    int n = 5987;
    string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    print(n, num);
    return 0;
}