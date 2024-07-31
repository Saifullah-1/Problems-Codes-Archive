class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        if (n + m == 0) return 0;
        vector<int> nums(n + m); 
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        if ((n + m) % 2 == 0) return (nums[(n + m) / 2] + nums[(n + m) / 2 - 1]) / 2.0;
        return nums[(n + m) / 2];
    }
};