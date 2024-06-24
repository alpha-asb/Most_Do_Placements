class Solution:
    
    #Function to find the leaders in the array.
    def leaders(self,n, arr):
        #Code here
        max_ele = float('-inf')
        res = []
        for i in range(n-1,-1,-1):
            if arr[i] >= max_ele:
                max_ele = arr[i]
                res.append(arr[i])
        return res[::-1]
