class Solution:
    #Function to rearrange  the array elements alternately.
    def rearrange(self,arr, n): 
        max_ele = arr[n-1]+1
        max_idx,min_idx = n-1,0
        
        for i in range(n):
            if i%2 == 0:
                arr[i] = arr[i] + (arr[max_idx]%max_ele)*max_ele
                max_idx-=1
            else:
                arr[i] = arr[i] + (arr[min_idx]%max_ele)*max_ele
                min_idx+=1
        for i in range(n):
            arr[i]//=max_ele
