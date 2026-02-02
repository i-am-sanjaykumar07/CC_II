#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int findMin(vector<int> &nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
      int mid = left + (right - left) / 2;

      if (nums[mid] > nums[right]) {
        left = mid + 1;
      }

      else {
        right = mid;
      }
    }

    return nums[left];
  }
};

int main() {
  Solution sol;

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);
  cout << "Enter elements (rotated sorted array): ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  int minimum = sol.findMin(nums);
  cout << "Minimum element: " << minimum << endl;

  return 0;
}
