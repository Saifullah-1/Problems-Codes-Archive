class Solution {
    public int findTheCity(int n, int[][] edges, int distanceThreshold) {
        int[][] dist = new int[n][n];

        for (int i = 0; i < n; ++i) {
            Arrays.fill(dist[i], Integer.MAX_VALUE / 2);
            dist[i][i] = 0;
        }

        for (int[] edge : edges) {
            int from = edge[0];
            int to = edge[1];
            int w = edge[2];
            dist[from][to] = w;
            dist[to][from] = w;
        }

        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        int minNeighboursInd = -1;
        int minNeighbours = Integer.MAX_VALUE;

        for (int i = 0; i < n; ++i) {
            int neighbours = 0;
            for (int j = 0; j < n; ++j) 
                if (i != j && dist[i][j] <= distanceThreshold) 
                    neighbours++;
            
            if (neighbours <= minNeighbours) {
                minNeighboursInd = i;
                minNeighbours = neighbours;
            }
        }

        return minNeighboursInd;
    }
}