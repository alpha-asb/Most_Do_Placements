class Solution {
    int Rec(int i,int j,int n,int m,vector<vector<int>>& matrix,vector<vector<int>>&dp){
        if(i < 0 || i >= n || j<0 || j>=m ){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int right = INT_MIN,left = INT_MIN,up = INT_MIN,down = INT_MIN;
        // right
        if(j+1 < m && matrix[i][j+1] > matrix[i][j]){
            right = 1 + Rec(i,j+1,n,m,matrix,dp);
        }
        // left
        if(j-1 >= 0 && matrix[i][j-1] > matrix[i][j]){
            left = 1 + Rec(i,j-1,n,m,matrix,dp);
        }
        // up
        if(i-1 >= 0 && matrix[i-1][j] > matrix[i][j]){
            up = 1 + Rec(i-1,j,n,m,matrix,dp);
        }
        // down
        if(i+1 < n && matrix[i+1][j] > matrix[i][j]){
            down = 1 + Rec(i+1,j,n,m,matrix,dp);
        }
        return dp[i][j] = max({right,left,up,down,1});
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int result =1;
        for(int row =0;row<n;row++){
            for(int col = 0;col<m;col++){
                if(dp[row][col] == -1){
                    Rec(row,col,n,m,matrix,dp);
                    result = max(result,dp[row][col]);
                }
            }
        }
        return result;
    }
};
