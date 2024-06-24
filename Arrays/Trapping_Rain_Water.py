class Solution:
    def trappingWater(self, arr,n):
        #Code here
        left = [0]*n
        right = [0]*n
        
        left[0] = arr[0]
        right[n-1] = arr[n-1]
        
        for i in range(1,n):
            left[i] = max(left[i-1],arr[i])
        for j in range(n-2,-1,-1):
            right[j] = max(right[j+1],arr[j])
        
        count = 0
        
        for i in range(n):
            count = count + min(left[i],right[i]) - arr[i]
        
        return count
