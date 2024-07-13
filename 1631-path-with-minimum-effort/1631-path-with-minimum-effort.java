class Solution {
    public static int minimumEffortPath(int[][] heights) {
        int r = heights.length;
        int c = heights[0].length;
        int[][] directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a -> a[2])); // contains arrays of size 3 each {r, c, effort}
        pq.offer(new int[]{0, 0, 0});
        int[][] efforts = new int[r][c];
        for (int[] row : efforts) 
            Arrays.fill(row, Integer.MAX_VALUE);
        
        efforts[0][0] = 0;
        boolean[][] visited = new boolean[r][c];
        while (!pq.isEmpty()) {
            int[] current = pq.poll();
            int row = current[0];
            int col = current[1];
            int effort = current[2];
            if (visited[row][col]) continue;
            visited[row][col] = true;
            if (row == r - 1 && col == c - 1) // --> reached the destination
                return effort;
            for (int[] dir : directions) {
                int newRow = row + dir[0];
                int newCol = col + dir[1];
                if (newRow >= 0 && newRow < r && newCol >= 0 && newCol < c) {
                    int newEffort = Math.max(effort, Math.abs(heights[row][col] - heights[newRow][newCol]));
                    if (newEffort < efforts[newRow][newCol]) {
                        efforts[newRow][newCol] = newEffort;
                        pq.offer(new int[]{newRow, newCol, newEffort});
                    }
                }
            }
        }
        return -1;
    }
}