class Solution
{
    public:
    bool dest = false;
    void dfs(int row,int col,int n,vector<vector<int>>& grid,vector<vector<bool>>& visited){
        if(row<0 || row >=n || col<0 || col>=n || visited[row][col] || grid[row][col] ==0)return;
        if(grid[row][col] == 2){dest = true;return;}
        visited[row][col] = true;
        dfs(row-1,col,n,grid,visited);
        dfs(row,col-1,n,grid,visited);
        dfs(row+1,col,n,grid,visited);
        dfs(row,col+1,n,grid,visited);
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
       int n = grid.size();
       vector<vector<bool>>visited(n,vector<bool>(n,false));
       for(int row =0;row<n;row++){
           for(int col =0;col<n;col++){
               if(grid[row][col] == 1){
                   dfs(row,col,n,grid,visited);
                  return dest;
               }
           }
       }
       return false;
    }
};
