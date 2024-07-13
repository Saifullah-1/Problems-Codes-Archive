class Solution {
    public static void counting_sort(int[] arr) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < arr.length; ++i) {
            max = Math.max(max, arr[i]);
            min = Math.min(min, arr[i]);
        }

        int size = max - min + 1;
        int[] frequencyArray = new int[size];
        int index;

        for (int i = 0; i < arr.length; ++i) {
            index = arr[i] - min;
            frequencyArray[index] += 1;
        }

        int j = 0;
        for (int i = 0; i < size; ++i) {
            while (frequencyArray[i] != 0) {
                arr[j] = i + min;
                frequencyArray[i] -=1;
                j++;
            }
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
        counting_sort(arr_even);
        counting_sort(arr_odd);
        for (int i = 0; i < len; ++i) {
            if (i % 2 == 0) arr_sorted[i] = arr_even[i / 2];
            else arr_sorted[i] = arr_odd[(i - 1) / 2];
        }
        return arr_sorted;
    }
}