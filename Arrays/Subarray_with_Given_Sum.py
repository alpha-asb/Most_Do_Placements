class Solution:
    def subArraySum(self,arr, n, s): 
       #Write your code here
        sum ,l,r = 0,0,0
        
        while r<n:
          sum+=arr[r]
          
          while sum>s and l < r:
           sum-=arr[l]
           l+=1
          if sum==s:
            return (l+1,r+1)
          r+=1
          
        return (-1,)
           
