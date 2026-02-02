#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int findDuplicate(vector<int> &nums) {
    int slow = nums[0];
    int fast = nums[0];

    do {
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
      slow = nums[slow];
      fast = nums[fast];
    }

    return slow;
  }
};

int main() {
  Solution sol;

  int n;
  cout << "Enter n (array will have n+1 elements): ";
  cin >> n;

  vector<int> nums(n + 1);
  cout << "Enter elements: ";
  for (int i = 0; i <= n; i++) {
    cin >> nums[i];
  }

  int duplicate = sol.findDuplicate(nums);
  cout << "Duplicate number: " << duplicate << endl;

  return 0;
}
