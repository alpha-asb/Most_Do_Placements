class Solution:	
    #Function to reverse every sub-array group of size k.
	def reverseInGroups(self, arr, N, K):
		# code here
		for i in range(0,N,K):
		    left = i
		    right = min(i+K-1 , N-1)
		    
		    while left < right:
		        arr[left],arr[right] = arr[right] ,arr[left]
		        left+=1
		        right-=1
		        
