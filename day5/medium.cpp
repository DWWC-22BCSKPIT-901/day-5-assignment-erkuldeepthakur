#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
 int left = -1, right = -1;
 int low = 0, high = nums.size() - 1;
 while (low <= high) {
 int mid = low + (high - low) / 2;
 if (nums[mid] >= target) high = mid - 1;
 else low = mid + 1;
 }
 if (low < nums.size() && nums[low] == target) left = low;
 low = 0, high = nums.size() - 1;
 while (low <= high) {
 int mid = low + (high - low) / 2;
 if (nums[mid] <= target) low = mid + 1;
 else high = mid - 1;
 }
 if (high >= 0 && nums[high] == target) right = high;
 return {left, right};
}
int main() {
 vector<int> nums1 = {5, 7, 7, 8, 8, 10};
 int target1 = 8;
 vector<int> res1 = searchRange(nums1, target1);
 cout << "[" << res1[0] << ", " << res1[1] << "]" << endl; 
 vector<int> nums2 = {5, 7, 7, 8, 8, 10};
 int target2 = 6;
 vector<int> res2 = searchRange(nums2, target2);
 cout << "[" << res2[0] << ", " << res2[1] << "]" << endl; 
 return 0;
}
