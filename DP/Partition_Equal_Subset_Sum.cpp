class Solution{
public:
    bool solve(int N,int arr[],int target,int idx, vector<vector<int>>&dp){
        if(target == 0)return true;
        if(target < 0)return false;
        if(idx == N)return false;
        if(dp[target][idx] != -1){return dp[target][idx];}
        bool choose = solve(N,arr,target - arr[idx],idx+1,dp);
        bool skip = solve(N,arr,target,idx+1,dp);
        return dp[target][idx] = choose || skip;
    }
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i =0;i<N;i++){
            sum+= arr[i];
        }
        if(sum %2 != 0)return 0;
        sum /= 2;
        vector<vector<int>>dp(sum+1,vector<int>(N+1,-1));
        return solve(N,arr,sum,0,dp);
    }
};
