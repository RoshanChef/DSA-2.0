#include <bits/stdc++.h>
using namespace std;

void count_sort(vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    vector<int> store(max + 1);
    int len = arr.size();
    for (int i = 0; i < len; i++)
    {
        store[arr[i]]++;
    }
    len = max + 1;
    int i = 0, j = 0;
    while (1)
    {
        if (i >= len)
            break;
        else if (store[i] > 0)
        {
            arr[j++] = i;
            store[i]--;
        }
        else
            i++;
    }
}

int main()
{
    vector<int> arr = {7, 2, 1, 9, 3, 0, 3};
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout<<"After " <<endl; 

    count_sort(arr);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}