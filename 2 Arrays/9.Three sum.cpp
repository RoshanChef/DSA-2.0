	#include<bits/stdc++.h>
using namespace std;

// Time complexity:  O(N*N)
// Space complexity: O(N)
vector<vector<int>> threeSum(vector<int>& nums) {

	set<vector<int>> st; 

	for(int i = 0; i<nums.size(); i++){
		set<int> hash; 
		for(int j = i+1; j<nums.size(); j++){
			int third = -(nums[i] + nums[j]); 
			if(hash.find(third)!= hash.end()){
				vector<int> temp = {nums[i] , nums[j] , third};
				sort(temp.begin(),temp.end()); 
				st.insert(temp);
			}
			hash.insert(nums[j]);
		}
	}
	vector<vector<int>> ans(st.begin() , st.end()); 
	return ans; 
}

// Time complexity: O(NlogN) + O(n^2) = O(n^2);
// Space complexity: O(1) No extra space needed

  vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // Sorting the array
        
        for(int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                // Skip duplicate elements to avoid duplicate triplets
                continue;
            }
            
            int a = nums[i];
            int target = 0 - a;
            int left = i + 1, right = n - 1;
            
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    ans.push_back({a, nums[left], nums[right]});
                    // Move the left pointer to the next different number
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Move the right pointer to the previous different number
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    // Move both pointers
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return ans;
    }


int main()
{

	vector<int> v = {-1,0,1,2,-1,-4}; 
	vector<vector<int>> res = threeSum(v);
	for(auto it : res){
		for(int val : it){
			cout<<val<< " ";
		}
		cout<<endl;
	}


	return 0;
}