#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

class Solution {
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_map<int, int> lastIndex;

    for (int i = 0; i < nums.size(); i++) {
      if (lastIndex.count(nums[i])) {
        if (i - lastIndex[nums[i]] <= k) {
          return true;
        }
      }
      lastIndex[nums[i]] = i;
    }
    return false;
  }
};

int main() {
  Solution sol;

  int n, k;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  cout << "Enter k: ";
  cin >> k;

  bool result = sol.containsNearbyDuplicate(nums, k);

  cout << (result ? "true" : "false") << endl;

  return 0;
}
