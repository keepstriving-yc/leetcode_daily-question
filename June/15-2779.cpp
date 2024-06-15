#include<algorithm>
#include<vector>
#include<iostream>
#include<ranges>
using namespace std;

class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int res = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0, j = 0; i < n; i++) {
            while (nums[i] - 2 * k > nums[j]) {
                j++;
            }
            res = max(res, i - j + 1);
        }
        return res;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {4, 6, 1, 2};
    cout << sol.maximumBeauty(nums, 2) << endl;
    return 0;
}
