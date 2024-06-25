def findElement( arr, n):
    l,r = n*[0],n*[0]
    l[0] = arr[0]
    r[n-1] = arr[n-1]
    
    for i in range(1,n):
        l[i] = max(l[i-1],arr[i])
    for i in range(n-2,-1,-1):
        r[i] = min(r[i+1],arr[i])
    for i in range(1,n-1):
        if l[i] <= arr[i] and arr[i] <= r[i]:
            return arr[i]
    return -1
