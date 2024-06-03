#include <iostream>
using namespace std;

int brute_sq(int num)
{
    if (num == 1)
        return 1;
    int ans = 0;
    for (int i = 1; i <= num; i++)
    {
        ans = i * i;
        if (ans > num)
        {
            return i - 1;
        }
    }
    return -1;
}

int sq(int num)
{
    int low = 0, high = num;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int square = mid * mid;
        if (num == square)
        {
            ans = mid;
            return ans;
        }
        else if (num < square)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

double sqrtPre(int num, int precesion, int target)
{

    double ans = num;
    double fact = 1;
    for (int i = 0; i < precesion; i++)
    {
        fact /= 10;
        for (double j = ans; j * j <= target; j += fact)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;

    // cout << brute_sq(n) << endl;

    cout << sq(n) << endl;
    int precision = 4;
    cout << "Answer with precision " << sqrtPre(sq(n), precision, n) << endl;

    return 0;
}