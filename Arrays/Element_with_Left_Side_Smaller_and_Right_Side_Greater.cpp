int findElement(int arr[], int n) {
    
    vector<int>l(n,0); // to store the prefixs of max element till index
    vector<int>r(n,0); // to store the prefixs of min element till index from right to left
    
    l[0] = arr[0]; r[n-1] = arr[n-1];
    
    for(int i =1;i<n;i++){
        l[i] = max(l[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        r[i] = min(r[i+1],arr[i]);
    }
    for(int i = 1;i<n-1;i++){
        if(l[i]<= arr[i] and arr[i]<=r[i]){
            return arr[i];
        }
    }
    return -1;
}
