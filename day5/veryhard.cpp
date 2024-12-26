#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int>& nums) {
 int low = 0, high = nums.size() - 1;
 while (low < high) {
 int mid = low + (high - low) / 2;
 if (nums[mid] > nums[high]) {
 low = mid + 1;
 } else if (nums[mid] < nums[high]) {
 high = mid;
 } else {
 high--; 
 }
 }
 return nums[low];
}
int main() {
 vector<int> nums1 = {1, 3, 5};
 cout << findMin(nums1) << endl; 
 vector<int> nums2 = {2, 2, 2, 0, 1};
 cout << findMin(nums2) << endl; 
 return 0;
}
