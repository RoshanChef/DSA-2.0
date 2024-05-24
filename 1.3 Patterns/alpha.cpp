#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    // A A A A
    // B B B B
    // C C C C
    // D D D D

    //  int i = 1;
    //     while (i <= n)
    //     {
    //         int j = 1 ;
    //         while (j<=n)
    //         {
    //             cout<<(char)(64+i)<<" ";
    //             j++;
    //         }
    //         cout<<endl;;
    //         i++;
    //     }

    // A B C D
    // A B C D
    // A B C D
    // A B C D

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1 ;
    //     while (j<=n)
    //     {
    //         cout<<(char)(64+j)<<" ";
    //         j++;
    //     }
    //     cout<<endl;;
    //     i++;
    // }

    // A B C D
    // B C D E
    // C D E F
    // D E F G
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << (char)(64 +i+j-1) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     ;
    //     i++;
    // }

    // A
    // B B
    // C C C
    // D D D D

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << (char)(64 + i)<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // A
    // B C
    // C D E
    // D E F G

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << (char)(64 + i + j - 1 )<< " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // D
    // C D
    // B C D
    // A B C D
    // int i = 0;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << (char)(64 + n - i + j) << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // A B C
    // B C D
    // C D E

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << (char)('A'+i+j-2) << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    return 0;
}