#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }
        return dp[n - 1];
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 9, 3, 1};  // Example input
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed: " << result << endl;
    return 0;
}