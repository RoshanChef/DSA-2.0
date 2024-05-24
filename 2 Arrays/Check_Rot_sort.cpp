#include <bits/stdc++.h>
/*

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

    Input: nums = [3,4,5,1,2]
    Output: true

    Input: nums = [1,2,3]
    Output: true

    */

bool check(vector<int> &n)
{

    int cnt = 0, len = n.size();
    for (int i = 0; i < len; i++)
    {
        int index = (i + 1) % len;
        if (n[i] > n[index])
        {
            cnt++;
        }
    }
    if (cnt > 1)
        return 0;
    return 1;
}
using namespace std;
int main()
{

    return 0;
}