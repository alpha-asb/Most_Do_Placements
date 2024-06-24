class Solution:
    
    # Note that the size of the array is n-1
    def missingNumber(self, n, arr):
        
        sum = (n*(n+1))//2
        arr_sum = 0
        for i in range(n-1):
            arr_sum += arr[i]
        return sum-arr_sum
