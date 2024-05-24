#include <iostream>
#include <cmath>
using namespace std;
// Decimal to binary convert
int Dec_Bin(int num)
{
   int ans = 0;
   int i = 0;
   while (num)
   {
      int bit = num % 2 ;
      ans = ans + bit * pow(10, i);
      num = num>>1; 
      i++; 
   }
   return ans;
}
int main()
{

   int n;
   cout << "enter the number " << endl;
   cin >> n;
   cout << "Binary of " << n << " is " << Dec_Bin(n) << endl;
   return 0;
}