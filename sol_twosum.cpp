class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();  // Correct way to get vector length

        for (int i = 0; i < length; i++) {
            for (int x = i + 1; x < length; x++) {
                if (nums[i] + nums[x] == target) {
                    return {i, x};  // Correct return syntax
                }
            }
        }

        return {};  // Return empty vector if no solution (not needed per problem statement)
    }
};
