#include <bits/stdc++.h>
using namespace std;

// O(m+n)
void merge(int a1[], int a2[], int b[] , int a1Len , int a2Len , int bLen)
{

    int i = 0, j = 0, k = 0;
    while (i < a1Len && j < a2Len)
    {
        if (a1[i] < a2[j])
        {
            b[k] = a1[i];
            i++, k++;
        }
        else
        {
            b[k] = a2[j];
            k++, j++;
        }
    }

    while (i < a1Len)
    {
        b[k] = a1[i];
        k++, i++;
    }
    while (j < a2Len)
    {
        b[k] = a2[j];
        k++, j++;
    }
}

int main()
{

    int a[3] = {1, 3, 5};
    int b[5] = {2, 4, 6, 7, 9};

    int c[8] = {0};
    merge(a, b, c , 3 ,5 , 8);

    for(int val : c) {
        cout<<val<<" ";
    }cout<<endl;

    return 0;
}