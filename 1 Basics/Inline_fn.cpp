#include <iostream>
using namespace std;

// Before compilation it just replace by return
inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}

// default arg always start from rightmost
void print(int *ar, int end, int start = 0)
{
    for (int i = start; i < end; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    int a = 5, b = 9;
    int mx = getMax(a, b);
    cout<<mx<<endl;

    int ar[5] = {1, 3, 5, 7, 9};
    print(ar, 5);

    cout << "\n ==========";

    return 0;
}