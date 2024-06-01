#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int len, int index, vector<vector<int>> &ans)
{
   if (index >= len)
   {
      ans.push_back(arr);
      return;
   }
   for (int i = index; i < len; i++)
   {
      swap(arr[i] , arr[index]);
      solve(arr , len , index+1 , ans);
      swap(arr[i] , arr[index]);
   }
   
}
vector<vector<int>> permutation(vector<int> arr, int len)
{
   vector<vector<int>> ans;
   solve(arr, len, 0, ans);

   return ans;
}

int main()
{
   vector<int> arr = {1,2, 3};
   vector<vector<int>> ans = permutation(arr, arr.size());

   for (auto val : ans)
   {
      cout << "[ ";
      for (auto ele : val)
      {
         cout << ele << " ";
      }
      cout << "]";
      cout<<endl;
   }

   return 0;
}