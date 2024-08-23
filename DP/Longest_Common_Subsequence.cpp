/*
class Solution {
  private:
    int solve(int n, int m, int i, int j, const string &str1, const string &str2,vector<vector<int>>&dp) {
        // base case
        if(i == n || j == m) {
            return 0;
        }
        if(dp[i][j] != -1){return dp[i][j];}
        if(str1[i] == str2[j]){
            return dp[i][j] = 1+solve(n, m, i+1, j+1, str1, str2,dp);
        }
        return dp[i][j] = max(solve(n, m, i+1, j, str1, str2,dp), solve(n, m, i, j+1, str1, str2,dp));
    }

  public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, const string &str1, const string &str2) {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n, m, 0, 0, str1, str2,dp);
        
    }
};
*/
class Solution {

  public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, const string &str1, const string &str2) {
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i] == str2[j]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
               
            }
        }
        return dp[n][m];
    }
};
