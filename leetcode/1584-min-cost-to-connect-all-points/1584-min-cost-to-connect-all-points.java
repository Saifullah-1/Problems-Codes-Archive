class Solution {
    public int minCostConnectPoints(int[][] points) {
        int n = points.length;
        boolean[] visited = new boolean[n];
        int[] minCost = new int[n];
        Arrays.fill(minCost, Integer.MAX_VALUE);
        
        minCost[0] = 0;
        int result = 0;
        
        for (int i = 0; i < n; i++) {
            int minIndex = -1;
            for (int j = 0; j < n; j++) {
                if (!visited[j] && (minIndex == -1 || minCost[j] < minCost[minIndex])) {
                    minIndex = j;
                }
            }
            
            visited[minIndex] = true;
            result += minCost[minIndex];
            
            for (int j = 0; j < n; j++) {
                int cost = Math.abs(points[minIndex][0] - points[j][0]) +
                           Math.abs(points[minIndex][1] - points[j][1]);
                minCost[j] = Math.min(minCost[j], cost);
            }
        }
        
        return result;
    }
}