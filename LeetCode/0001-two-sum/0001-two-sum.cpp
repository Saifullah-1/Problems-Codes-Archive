class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i = 0, j = 1;
        // while (i < j) {
        //     while (j < nums.size()) {
        //         if (nums[i] + nums[j] == target)
        //             return vector<int>{i, j};
        //         j++;
        //     }
        //     i++;
        //     j = i + 1;
        // }
        // return vector<int>{i, j};
        unordered_multimap<int, int> m;
        for (int i = 0; i < nums.size(); ++i)
            m.insert({nums[i], i});

        vector<int> v(2);
        for (auto p : m) {
            auto it = m.find(target - p.first);
            if (it != m.end() && it->second != p.second) {
                v[0] = p.second;
                v[1] = it->second;
                break;
            }
        }
        return v;
    }
};