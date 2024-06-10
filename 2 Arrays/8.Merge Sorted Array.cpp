#include <iostream>
#include <vector>

using namespace std;

/*
You are given two integer arrays nums1 and nums2.
0 < nums1 & merge all into nums1.
Example:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Pointer for the last element in the initial portion of nums1
    int j = n - 1; // Pointer for the last element in nums2
    int k = m + n - 1; // Pointer for the last position in nums1

    // Merge the arrays starting from the end
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
}

int main() {
    vector<int> arr1 = {1, 2, 3, 0, 0, 0}; // arr1 has extra space for arr2 elements
    vector<int> arr2 = {2, 5, 6};
    
    int m = 3; // Number of initial elements in arr1
    int n = 3; // Number of elements in arr2

    merge(arr1, m, arr2, n); 
  
    for (int val : arr1) {
        cout << val << " "; 
    }
    cout << endl;

    return 0;
}
