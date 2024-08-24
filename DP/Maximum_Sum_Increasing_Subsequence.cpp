class Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int dp[n];
        for (int i = 0; i < n; i++) {
           dp[i] = arr[i];
        }
	    int sum = arr[0];
	    for(int i = 0;i<n;i++){
	        for(int j = i+1;j<n;j++){
	            if(arr[j] > arr[i]){
	                dp[j] = max(dp[j] , dp[i] + arr[j]);
	                sum = max(sum,dp[j]);
	            }
	        }
	    }
	    return sum;
	}  
};
