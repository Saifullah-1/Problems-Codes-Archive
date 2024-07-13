class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> hashMap = new HashMap<>();
        hashMap.put(0, 1);

        int currentSum = 0;
        int count = 0;

        for (int num : nums) {
            currentSum += num;

            int diff = currentSum - k;
            if (hashMap.containsKey(diff)) {
                count += hashMap.get(diff);
            }
            hashMap.put(currentSum, hashMap.getOrDefault(currentSum, 0) + 1);
        }

        return count;
    }
}