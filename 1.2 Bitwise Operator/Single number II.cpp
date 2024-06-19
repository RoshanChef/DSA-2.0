#include <iostream>
#include <vector>
using namespace std;

/*
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space

Example 1:
Input: nums = [2,2,3,2]
Output: 3

Example 2:
Input: nums = [0,1,0,1,0,1,99]
Output: 99
*/

int singleNumber(vector<int>& nums) {
    int len = nums.size();
    int ans = 0;

    for (int bit = 0; bit < 32; bit++) {
        int cnt = 0;
        for (int j = 0; j < len; j++) {
            if (1 << bit & nums[j])
                cnt++;
        }
        if (cnt % 3 == 1)
            ans = ans | (1 << bit);
    }
    return ans;
}

int main() {

  
    return 0;
}
