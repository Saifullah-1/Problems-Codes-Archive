class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = 1;
        while (i < j) {
            while (j < nums.size()) {
                if (nums[i] + nums[j] == target)
                    return vector<int>{i, j};
                j++;
            }
            i++;
            j = i + 1;
        }
        return vector<int>{i, j};
    }
};