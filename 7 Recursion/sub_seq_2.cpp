#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sub_seq(int arr[], int len)
{
   vector<vector<int>> ans;
   int limit = (1 << len) - 1;

   for (int num = 0; num <= limit; num++)
   {
      vector<int> output;
      for (int i = 0; i < len; i++)
      {
         int bit = 1 << i;
         if (num & bit)
         {
            output.push_back(arr[i]);
         }
      }
      ans.push_back(output);
   }

   return ans;
}

int main()
{
   int arr[] = {3, 2, 4};
   int len = 3;
   vector<vector<int>> v = sub_seq(arr, len);
   for (vector<int> val : v)
   {
      cout << "{";
      for (int ele : val)
      {
         cout << ele << ",";
      }
      cout << "}";
      cout << endl;
   }
   return 0;
}