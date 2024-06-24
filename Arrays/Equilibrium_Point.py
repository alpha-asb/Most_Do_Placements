class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,arr, n):
        # Your code here
        sum = 0
        for i in range(n):
            sum+=arr[i]
        left,right = 0,0
        
        for i in range(n):
            right = sum - left - arr[i]
            if left == right:
                return i+1
            left+=arr[i]
        return -1
