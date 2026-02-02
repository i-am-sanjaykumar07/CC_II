#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (nums[mid] == target)
        return mid;
      else if (nums[mid] < target)
        left = mid + 1;
      else
        right = mid - 1;
    }

    return left;
  }
};

int main() {
  Solution sol;

  int n, target;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  cout << "Enter target: ";
  cin >> target;

  int index = sol.searchInsert(nums, target);
  cout << "Output: " << index << endl;

  return 0;
}
