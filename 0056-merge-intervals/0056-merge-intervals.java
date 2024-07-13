class Solution {
    public void insertion_sort(int[][] arr) {
        for (int i = 1; i < arr.length; ++i) {
            int []curr = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j][0] > curr[0]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = curr;
        }
    }

    public int[][] merge(int[][] intervals) {
        insertion_sort(intervals);
        List<int[]> result = new ArrayList<>();
        int[] curr = intervals[0];

        for (int i = 1; i < intervals.length; i++) {
            if (curr[1] >= intervals[i][0]) {
                curr[1] = Math.max(curr[1], intervals[i][1]);
            } else {
                result.add(curr);
                curr = intervals[i];
            }
        }
        result.add(curr);

        return result.toArray(new int[result.size()][]);
    }

}