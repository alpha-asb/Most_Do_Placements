class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    
    int dp[205][205];
    int rec(int n,int k){
        // base case
        if(n==1 || k==0 || k==1){
            return k;
        }
        if(dp[n][k] != -1){
            return dp[n][k];
        }
        int ans = INT_MAX;
        for(int i =1;i<=k;i++){
            int case1 = rec(n-1,i-1);//egg break
            int case2 = rec(n,k-i);  // not break
            int worst = 1 + max(case1,case2);
            ans = min(ans,worst);
        }
        return dp[n][k] = ans;
    }
    int eggDrop(int n, int k) 
    {  memset(dp,-1,sizeof(dp));
       return rec(n,k);
    }
};
