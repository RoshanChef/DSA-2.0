#include <iostream>
using namespace std;

int main()
{
    // Product - Sum 
    int a = 452, sum = 0, product = 1;
    while (a != 0)
    {
        sum = sum + a % 10;
        product = product * (a%10);
        a/=10;
    }
    cout<<"ans is : "<<product-sum;
    return 0;
}