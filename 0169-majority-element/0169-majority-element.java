class Solution {
    public static int majorityElement(int[] array) {
        int n = array.length;
        return majorityElement(array, 0, n - 1);
    }

    private static int majorityElement(int[] array, int left, int right) {
        if (left == right) {
            return array[left];
        }

        int mid = (left + right) / 2;
        int majorityLeft =  majorityElement(array, left, mid);
        int majorityRight =  majorityElement(array, mid + 1, right);

        if (majorityLeft == majorityRight) {
            return majorityLeft;
        }

        int leftOccurrence = occurrence(array, left, mid, majorityLeft);
        int rightOccurrence = occurrence(array, mid + 1, right, majorityRight);

        if (leftOccurrence > rightOccurrence) {
            return majorityLeft;
        } else {
            return majorityRight;
        }
    }

    private static int occurrence(int[] array, int left, int right, int target) {
        int count = 0;
        for (int i = left; i <= right; ++i) {
            if (array[i] == target) {
                count++;
            }
        }

        return count;
    }

}