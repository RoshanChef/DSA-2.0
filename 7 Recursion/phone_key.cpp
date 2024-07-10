#include <bits/stdc++.h>
using namespace std;

void solve(string &num, string out, int index, vector<string> &ans, string *arr)
{
   if (index >= num.length())
   {
      ans.push_back(out);
      return;
   }
   int in = num[index] - '0';
   string val = arr[in];

   for (int i = 0; i < val.length(); i++)
   {
      out.push_back(val[i]);
      solve(num, out, index + 1, ans, arr);
      // back_track
      out.pop_back();
   }
}

vector<string> phone_key(string &num, string *arr)
{
   vector<string> ans;
   string output = "";

   solve(num, output, 0, ans, arr);
   return ans;
}

int main()
{
   string num = "89";
   string mp[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stuv", "wxyz"};

   vector<string> ans = phone_key(num, mp);

   for (auto val : ans)
      cout << val << " ";
   cout << endl;
   return 0;
}