class Solution:

    def findMinDiff(self, A,N,M):

        A.sort()
        ans = float('inf')
        for i in range(0,N-M+1):
            j = i+M-1
            ans = min(ans , A[j]-A[i])
        return ans
