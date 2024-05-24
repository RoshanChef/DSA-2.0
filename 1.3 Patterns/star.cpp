#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    //            *
    //          * *
    //        * * *
    //      * * * *
    //    * * * * *

    //     int i = 1;
    //     while (i <= n)
    //     {
    //         //space
    //         int j = n-i;
    //         while (j > 0)
    //         {
    //             cout << "  ";
    //             j--;
    //         }
    //         //print
    //         j = 1;
    //         while (j <= i)
    //         {
    //             cout << " *";
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    //     }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = i;
    //     while (j <= n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *

    // int i = 1;
    // while (i <= n)
    // {
    //     //space
    //     int j = i - 1;
    //     while (j > 0)
    //     {
    //         cout << "  ";
    //         j--;
    //     }
    //     j = i;
    //     // print
    //     while (j <= n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1 1 1 1 1
    //   2 2 2 2
    //     3 3 3
    //       4 4
    //         5

    // int i = 1;
    // while (i <= n)
    // {
    //     //space
    //     int j = i - 1;
    //     while (j > 0)
    //     {
    //         cout << "  ";
    //         j--;
    //     }
    //     j = i;
    //     // print
    //     while (j <= n)
    //     {
    //         cout <<i<< " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    //         1
    //       2 2
    //     3 3 3
    //   4 4 4 4
    // 5 5 5 5 5

    // int i = 1;
    // while (i <= n)
    // {
    //     //space
    //     int j = n - i;
    //     while (j > 0)
    //     {
    //         cout << "  ";
    //         j--;
    //     }
    //     j = 1;
    //     // print
    //     while (j <=i )
    //     {
    //         cout <<i<< " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1 2 3 4 5
    //   2 3 4 5
    //     3 4 5
    //       4 5
    //         5

    // int i = 1;
    // while (i <= n)
    // {
    //     // space
    //     int j = i - 1;
    //     while (j > 0)
    //     {
    //         cout << "  ";
    //         j--;
    //     }
    //     j = i;
    //     // print
    //     while (j <= n)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    // int i = 1, num = 1;
    // while (i <= n)
    // {
    //     // space
    //     int j = n - i;
    //     while (j > 0)
    //     {
    //         cout << "  ";
    //         j--;
    //     }
    //     j = 1;
    //     // print 1st
    //     while (j <= i)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     // print 2nd
    //     j = i-1;
    //     while (j)
    //     {
    //         cout<<j<<" ";
    //         j--;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 1 2 3 4 4 3 2 1
    // 1 2 3 * * 3 2 1
    // 1 2 * * * * 2 1
    // 1 * * * * * * 1
    // int i = 1;
    // while (i <= n)
    // {
    //     // 1st print
    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }

    //     // space
    //     j = i;
    //     while (j >= 2)
    //     {
    //         cout << "* ";
    //         cout << "* ";
    //         j--;
    //     }

    //     // 2nd print
    //     j = n - i + 1;
    //     while (j)
    //     {
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    return 0;
}