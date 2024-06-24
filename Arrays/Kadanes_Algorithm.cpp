class Solution {
  public:
    long long maxSubarraySum(int arr[], int n) {

        // Your code here
        long long curr = 0;
        long long ans = INT_MIN;
        
        for(int i=0;i<n;i++){
            curr+=arr[i];
            ans = max(curr,ans);
            if(curr<0){
                curr = 0;
            }
        }
        return ans;
    }
};
