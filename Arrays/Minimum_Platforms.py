class Solution:    
    #Function to find the minimum number of platforms required at the
    #railway station such that no train waits.
    def minimumPlatform(self,n,arr,dep):
        # code here
        arr.sort()
        dep.sort()
        
        count ,ans = 0,0
        i,j = 0,0
        
        while i<n:
            if arr[i] <= dep[j]:
                count+=1
                ans = max (ans,count)
                i+=1
            else:
                count-=1
                j+=1
        return ans
