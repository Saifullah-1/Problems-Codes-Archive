class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        size_t n = cost.size();
        cost.push_back(0);

        for (int i = 2; i <= n; ++i) {
            cost[i] += min(cost[i - 1], cost[i - 2]);
        }
        return cost[n];
    }
};