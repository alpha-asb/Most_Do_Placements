class Solution {
  public:
    long long int solve(int coins[], int N, int sum,int idx,vector<vector<int>>&dp){
        // base 
        if(sum == 0){
            return 1;
        }
        if(sum < 0 || idx == N){
            return 0;
        }
        if(dp[sum][idx] != -1){
            return dp[sum][idx];
        }
        int include = solve(coins,N,sum-coins[idx],idx,dp);
        int exclude = solve(coins,N,sum,idx+1,dp);
        return dp[sum][idx] = include + exclude;
    }
    long long int count(int coins[], int N, int sum) {

        vector<vector<int>>dp(sum+1,vector<int>(N+1,-1));
        return solve(coins,N,sum,0,dp);
        
    }
};
