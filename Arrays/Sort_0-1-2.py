class Solution:
    def sort012(self,arr,n):
        lo , mid , hi = 0,0, n-1
        while mid <= hi:
            if arr[mid] == 0:
                arr[mid],arr[lo] = arr[lo],arr[mid]
                lo+=1
                mid+=1
            elif arr[mid] == 2:
                arr[mid],arr[hi] = arr[hi],arr[mid]
                hi-=1
            else:
                mid+=1
