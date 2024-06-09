#include <bits/stdc++.h>
using namespace std;
bool chkPair(int A[], int size, int target)
{
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == target) {
                return 1;
            }
        }
    }

    return 0;
}
// Time Complexity: O(N*N)
//  Auxiliary Space: O(1)

vector<int> twoSum(vector<int> &ar, int target)
{
	// track the indexes
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
// Time Complexity: O(N)
//  Auxiliary Space: O(N)

bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
    int l, r;

    /* Sort the elements */
    sort(A, A + arr_size);

    /* Now look for the two candidates in
       the sorted array*/
    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else // A[l] + A[r] > sum
            r--;
    }
    return 0;
}

// Time Complexity: O(NlogN), Time complexity for sorting the array
// Auxiliary Space: O(1)

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