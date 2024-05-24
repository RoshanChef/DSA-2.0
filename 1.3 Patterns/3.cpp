#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number : ";
    cin >> n;

    int i = 1;
    // // rows
    // while (i <= n)
    // {
    //     // columns
    //     int j = n;
    //     while (j >= 1)
    //     {
    //         cout << j << " ";
    //         j = j - 1;
    //     }
    //     i = i + 1;
    //     cout<<endl;
    // }

    // rows
    while (i <= n)
    {
        // columns
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}