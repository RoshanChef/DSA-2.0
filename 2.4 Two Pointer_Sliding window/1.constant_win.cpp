#include <iostream>
using namespace std;

/*
maximum sum of consecutive number in array in size of k

*/
int main()
{
    int l = 0, r = 0;
    int ar[] = {-1, 2, 3, 3, 4, 5, -2};
    int n = sizeof(ar) / sizeof(int);

    int k = 4;

    int sum = 0, maxsum = INT32_MIN;

    while (r < n)
    {
        sum = sum + ar[r];

        if ((r - l + 1) == k)
        {
            maxsum = max(maxsum, sum);
            sum = sum - ar[l];
            l++;
        }

        r++;
    }
    cout << "maxsum " << maxsum << endl;
    return 0;
}