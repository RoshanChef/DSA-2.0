#include <bits/stdc++.h>
using namespace std;
/*
maximum points you can obtain from cards
point = {6 2 3 4 7 2 1 7  1} cards = 4

condition :
        1.. take from both front & back as well
            don't allow to take from middle

*/

int maxPoints(vector<int> &points, int cards)
{
    int lsum = 0;
    for (int i = 0; i < cards; i++)
    {
        lsum += points[i];
    }
    int max_points = lsum, rsum = 0, sum = 0;
    for (int i = cards - 1; i >= 0; i--)
    {
        lsum -= points[i];
        rsum += points[points.size() - (cards - i)];
        sum = lsum + rsum;
        if (max_points < sum)
            max_points = sum;
    }
    return max_points;
}

int main()
{
    vector<int> arr = {6, 1, 1, 4, 7, 2, 1, 7, 201};
    int k = 4;

    cout << maxPoints(arr, k);

    cout
        << "\n=== end ===";
    return 0;
}