#include <iostream>
using namespace std;
void check(int n, int i)
{
    int ans = 1;
    ans = ans << i;
    if (ans & n)
        cout << "bit is set";
    else
        cout << "not set ";
}

int main()
{
    // ********** 1
    // int n;
    // cout << "check even or odd : ";
    // cin >> n;

    // if (n & 1)
    //     cout << "odd .. ";
    // else
    // cout << "even .. ";




    // ************ 2
    // int n, i;
    // cout << "check number's ith bit set or not : ";
    // cin >> n >> i;
    // check(n, i);



    // *********** 3
    // int n, i;
    // cout << "clear number's ith bit  : ";
    // cin >> n >> i;

    // cout << "before n : " << n<<endl;
    // int ans = 1;
    // ans = ans << i;
    // n = n & (~ans);
    // cout << "after n : " << n;



    // ********** 4
    // //reset first set bit from number
    // int n;
    // cout << "enter num for first reset a bit ";
    // cin >> n;

    // cout << "before n : " << n << endl;
    // n = n & n - 1;
    // cout << "after n : " << n;


    // ******** 5
    //  // check wheather number is power of 2 or not
    // int n;
    // cout << "check num is power of 2 or not :  ";
    // cin >> n;

    // n = n & n - 1;
    // if (n)
    //     cout << "Not power of 2" << endl;
    // else
    //     cout << "Power of 2";

   
   
    // ************* 6
    // //number of 1'a in number
    // int n;
    // cout << "returns the number of 1's ";
    // cin >> n;
    // int count = 0;
    // //one way
    // while (n)
    // {
    //     if (n & 1 == 1)
    //     {
    //         count++;
    //     }
    //     n = n >> 1;
    // }

    // //another way
    // while (n)
    // {
    //     n= n & n-1;
    //     count++;
    // }
    // cout<<"count is : "<<count;

    return 0;
}