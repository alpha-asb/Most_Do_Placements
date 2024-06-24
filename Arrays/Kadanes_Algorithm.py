class Solution:
    # Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self, arr, n):
        ##Your code here
        curr = 0
        ans = float('-inf')
        for i in range (n):
            curr+=arr[i]
            ans = max(curr,ans)
            if curr < 0:
                curr = 0
        return ans
