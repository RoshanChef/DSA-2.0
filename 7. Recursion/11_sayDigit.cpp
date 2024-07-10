#include <iostream>
using namespace std;
void sayDigit(int n, string *num)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // processing
    int digit = n % 10;
    n /= 10;

    // recursive call
    sayDigit(n, num);

    cout << num[digit] << " ";
}

int main()
{
    int n = 3425;
    string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(n, num);
    return 0;
}