class Solution:
	def countTriplet(self, arr, n):
		# code here
		arr.sort()
		ans = 0
		for i in range(n-1,1,-1):
		    start,end = 0,i-1
		    while(start<end):
		        sum = arr[start]+arr[end]
		        if sum == arr[i]:
		            ans+=1
		            start+=1
		            end-=1
		        elif sum < arr[i]:
		            start+=1
		        else:
		            end-=1
        return ans
