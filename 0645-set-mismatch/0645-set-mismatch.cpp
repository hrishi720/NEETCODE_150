class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int duplicate = -1;
        int missing = -1;

        for (int i = 0; i < nums.size() - 1; i++) {

            // Duplicate number
            if (nums[i] == nums[i + 1]) {
                duplicate = nums[i];
            }

            // Missing number is between nums[i] and nums[i+1]
            if (nums[i + 1] - nums[i] == 2) {
                missing = nums[i] + 1;
            }
        }

        // Missing number is 1
        if (nums[0] != 1) {
            missing = 1;
        }

        // Missing number is n
        if (nums.back() != nums.size()) {
            missing = nums.size();
        }

        return {duplicate, missing};
    }
};