#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &ar, int target)
{
	unordered_map<int, int> mp;
	for (int i = 0; i < ar.size(); i++)
		mp[ar[i]] = i;

	for (int i = 0; i < ar.size(); i++)
	{

		int a = ar[i];
		int b = target - a;
		if (mp.find(b) != mp.end() && mp[target - a] != i)
		{
			return {i, mp[b]};
		}
	}
	return {};
}
int main()
{

	vector<int> arr = {3, 2, 4, 5};
	int target = 7;

	vector<int> res = twoSum(arr, target);
	for (int val : res)
	{
		cout << val << " ";
	}

	cout << "\n=== end ===" << endl;
	return 0;
}