#include <bits/stdc++.h>
using namespace std;
/*
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.


Example:

'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.


*/
vector<int> rotateArray(vector<int> arr, int k)
{

    int len = arr.size();
    vector<int> ans(len);

    for (int i = 0; i < len; i++)
    {
        ans[(i - k + len) % len] = arr[i];
    }

    /*
        TC = O(len)
        SC =  O(len)
    */
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int> rotate = rotateArray(v, 1);

    // print
    for (int val : rotate)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}