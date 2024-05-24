#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& ar, int target) {
	unordered_map<int,int> mp; 
	vector<int> ans;
	for(int i = 0; i<ar.size(); i++)
		mp[ar[i]] =  i; 

	for(int i = 0; i<ar.size(); i++){

		int a = ar[i];
		int b = target - a;
		if(mp.find(b) != mp.end() && mp[target-a] != i){
			ans.push_back(i);
			ans.push_back(mp[b]); 
			return ans;
		}
	}

	return ans; 
}
int main()
{

	vector<int>  arr = {3,2,4,5};
	int target = 6; 
	vector<int> res = twoSum(arr,target);
	for(int val: res){
		cout<<val <<" "; 
	}
	
	return 0;
}