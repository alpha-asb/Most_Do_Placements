class Solution {
public:
    void dfs(int row, int col, int n, int m, vector<vector<char>>& grid) {
        if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == '0') {
            return;
        }
        grid[row][col] = '0'; // Mark as visited by setting to '0'
        int arrRow[] = {1, 1, 1, -1, -1, -1, 0, 0};
        int arrCol[] = {0, -1, 1, 0, -1, 1, -1, 1};
        
        for (int i = 0; i < 8; i++) {
            int currRow = row + arrRow[i];
            int currCol = col + arrCol[i];
            dfs(currRow, currCol, n, m, grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        int islands = 0;
        
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (grid[row][col] == '1') {
                    islands++;
                    dfs(row, col, n, m, grid); // Corrected the order of n and m
                }
            }
        }
        return islands;
    }
};
