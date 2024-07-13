class Solution {
    public static void insertion_sort(int[] arr) {
        for (int i = 1; i < arr.length; ++i) {
            int curr = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > curr) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = curr;
        }
    }

    public static int[] sortArrayByParityII(int[] nums) {
        int len = nums.length;
        int []arr_sorted = new int[len];
        int []arr_even = new int[len / 2];
        int []arr_odd = new int[len / 2];
        int j = 0, k = 0;
        for (int i = 0; i < len; ++i) {
            if (nums[i] % 2 == 0) arr_even[j++] = nums[i];
            else arr_odd[k++] = nums[i];
        }
        insertion_sort(arr_even);
        insertion_sort(arr_odd);
        for (int i = 0; i < len; ++i) {
            if (i % 2 == 0) arr_sorted[i] = arr_even[i / 2];
            else arr_sorted[i] = arr_odd[(i - 1) / 2];
        }
        return arr_sorted;
    }
}