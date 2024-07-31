class Solution {
    public int DFS (char[][] grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.length || j >= grid[0].length || grid[i][j] == '0')
            return 0;
        
        grid[i][j] = '0'; // '0' means visited node
        DFS(grid, i + 1, j); // Down
        DFS(grid, i - 1, j); // Up
        DFS(grid, i, j + 1); // Right
        DFS(grid, i, j - 1); // Left
        
        return 1;
    }
    
    public int numIslands(char[][] grid) {
        int islands = 0;
        for (int i = 0; i < grid.length; ++i) {
            for (int j = 0; j < grid[0].length; ++j) {
                if (grid[i][j] == '1') {
                    islands += DFS(grid, i, j);
                }
            }
        }
        return islands;
    }
}
